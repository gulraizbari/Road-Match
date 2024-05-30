using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using DG.Tweening.Plugins.Options;
using Features.CharacterMovement;
using Features.CharacterMovement.Scripts;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Unity.Mathematics;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class Player : PlayerBaseClass,IPlayer,ISFighter
    {

       
        public int health=1;
        public int hitPower = 2;
        public CharacterLevel _counter;
       
        
        public int HitPower { get=>hitPower;
            set => hitPower = value;
        }
        public Transform _Transform => transform;
        public int Health { get=>health; set=>health=value; }
        public void OnFoundingCollectible(Collectable collectable,ITile tile)
        {
           
            if (collectable.levelDependent)
            {
                switch (collectable.collectableType)
                {
                    case CollectableItems.ChestBox:
                        ChestBoxCase(collectable,tile);
                        SoundManager.Instance.PlayChest(.7f);
                        break;
                    case CollectableItems.Key:
                        KeyCase(collectable,tile);
                        //SoundManager.Instance.PlayKey(.7f);
                        break;
                }
            }
        }

        public ISFighter Fighter => this;
        public PlayerController PlayerHandler { get; set; }

        public void AssignUIController(UIController uiController)
        {
            UIController = uiController;
        }
        public void Init(Vector3 position, Tile tile)
        {
            transform.position = position;
            CurrentTile = tile;
            _playerAnimator.myFighter = this;
            UpdateLevel(0);
        }

        public void MoveOnPath(List<Tile> path)
        {
            if (path == null || path.Count == 0)
            {
                Debug.LogWarning("Provided path is null or empty.");
                return;
            }
            if (currentCoroutine != null)
            {
                StopCoroutine(currentCoroutine);
                currentCoroutine = null;
                _playerAnimator.WalkAnimation(false);  // Assuming you have a method to handle walk animation
            }
            pathToMove = path;
            pathToMove = path;

            var nearestWaypoint = FindNearestWaypoint(path);
            if (nearestWaypoint != null)
            {
                var nearestIndex = path.IndexOf(nearestWaypoint);
                var trimmedPath = path.GetRange(nearestIndex, path.Count - nearestIndex);
                currentCoroutine =FollowPath(trimmedPath);
                StartCoroutine(currentCoroutine);
                
            }
        }

        private Tile FindNearestWaypoint(List<Tile> path)
        {
            var minDistance = Mathf.Infinity;
            Tile nearestWaypoint = null;
            foreach (var waypoint in path)
            {
                float distance = Vector3.Distance(transform.position, waypoint.transform.position);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    nearestWaypoint = waypoint;
                }
            }
            return nearestWaypoint;
        }

        private IEnumerator FollowPath(List<Tile> path)
        {
            _playerAnimator.WalkAnimation(true);
            transform.position = new Vector3(transform.position.x, 1, transform.position.z);
            for (int i = 1; i < path.Count; i++)
            {
                var last = false;
                path[i-1].RemovePlayer();
                path[i].RemovePlayer();
                CurrentTile = path[i];
                if (i >= path.Count - 1)
                {
                    last = true;
                    lastTile = CurrentTile;
                }
                yield return FollowOnTarget(path[i].transform, last,CurrentTile);
                if (i >= path.Count - 2)
                {
                    var gateTile = path[path.Count - 1];
                    WhenGateIsFound(gateTile);
                }
                if (i >= path.Count - 1)
                {
                    path[i].AssignPlayer(this);
                }
            }
        }

        public void WhenGateIsFound(Tile gateTile)
        {
            if (gateTile.isGate)
            {
                print("Next is Gate");
                StopCoroutine(currentCoroutine);
                _playerAnimator.WalkAnimation(false);
                Child.localRotation=quaternion.identity;
                Jump(gateTile.transform.position);
            }
        }

        private IEnumerator FollowOnTarget(Transform target, bool lastIndex,Tile current)
        {
            var configs = Configs.GameConfig;
           
            var targetPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
            var lookDir = targetPosition - transform.position;
            var targetRotation = Quaternion.LookRotation(lookDir, Vector3.up);
            _playerAnimator.WalkAnimation(true);
            while (Vector3.Distance(transform.position, targetPosition) > 0.1f)
            {
               
                transform.position = Vector3.MoveTowards(transform.position, targetPosition, configs.playerMoveSpeed * Time.deltaTime);
                Child.rotation = Quaternion.Lerp(Child.rotation, targetRotation, Time.deltaTime * configs.playerRotationSpeed);
                yield return null;
            }
            
            if (lastIndex)
            {
                PlayerHandler.CantRun = false;
                _playerAnimator.WalkAnimation(false);
                 lastTile.CheckAdjacents(false);
                 transform.DOLocalMoveY(configs.playerYTargetOnTileMoving, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear);
                 target.DOLocalMoveY(configs.TileDownY, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear);
                 CurrentTile.ChangeColor(configs.TileDownColor);
            }
            else
            {
                TileEffect(target,CurrentTile);
                if (CurrentTile.TileCollectible)
                {
                    OnFoundingCollectible(CurrentTile.TileCollectible,CurrentTile);
                }
                
            }
        }

        private void TileEffect(Transform tileTransform,Tile tile)
        {
            var configs = Configs.GameConfig;
            transform.DOLocalMoveY(configs.playerYTargetOnTileMoving, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear).OnComplete((() =>
            {
                transform.DOLocalMoveY(1, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear);
            }));
            tile.ChangeColor(configs.TileDownColor);
             tileTransform.DOLocalMoveY(-.4f, configs.playerYTargetOnTileMovingDuration).SetRelative(true).SetEase(Ease.Linear).OnComplete((() =>
            {
                
               
                tileTransform.DOLocalMoveY(.4f, configs.playerYTargetOnTileMovingDuration).SetRelative(true).SetEase(Ease.Linear).OnComplete((
                    () =>
                    {
                        tile.ChangeColor(configs.TileOrignalColor);       // tile.SetMeshMaterialColorProperty(configs.TileOrignalColor);
                    }));
            }));
        }
        
        public void Jump(Vector3 position)
        {
            
            if (playerGoalHandler.FetchGoals()>0)
            {
                if (playerGoalHandler.TaskComplete)
                {
                    _counter.gameObject.SetActive(false);
                    JumpEffect(position);
                }
                else
                {
                    Debug.LogError("Task Complete");
                }
            }
            else
            {
                
                _counter.gameObject.SetActive(false);
                JumpEffect(position);
            }
        }


       

        public int GiveDamage(int value)
        {
            int resultValue=0;
            if (value>HitPower)
            {
                _playerAnimator.DeathAnim();
                resultValue = 0;
            }
            else
            {
                resultValue = HitPower;
            }
            //Health -= value;
            //if (Health<=0) 
            return resultValue;
        }

        public void Attack(ISFighter fighter)
        {
            PlayerHandler.CantRun = true;
            _counter.gameObject.SetActive(true);
            Child.DORotate(fighter._Transform.position,.1f).SetEase(Ease.Linear);
            _playerAnimator.Fighter = fighter;
           if(fighter.Health>0)
                    _playerAnimator.Attack();
           else
               PlayerHandler.CantRun = false;
        }

        public void Death()
        {
            GameController.SetState(GameStates.Lose);
            UIController.LevelFail(1.3f);
        }

        public void UpdateLevel(int value)
        {
            HitPower += value;
            _counter.UpdateLevelText(HitPower);
        }
        //public  int PlayerLevel { get=>PlayerPrefs.GetInt("PL",2); set=>PlayerPrefs.SetInt("PL",value); }

    }
}