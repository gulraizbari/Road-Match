using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.CharacterMovement;
using Features.CharacterMovement.Scripts;
using Features.GridGeneration.Scripts;
using Sablo.Core;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class Player : PlayerBaseClass,IPlayer,ISFighter
    {

        public int hitPower=1;
        public int health=1;
        
        public int HitPower { get=>hitPower; set=>hitPower=value; }
        public Transform _Transform => transform;
        public int Health { get=>health; set=>health=value; }
        public void OnFoundingCollectible(Collectable collectable)
        {
           
            if (collectable.levelDependent)
            {
                switch (collectable.collectableType)
                {
                    case CollectableItems.ChestBox:
                        ChestBoxCase(collectable);
                        SoundManager.Instance.PlayChest(.7f);
                        break;
                    case CollectableItems.Key:
                        KeyCase(collectable);
                        SoundManager.Instance.PlayKey(.7f);
                        break;
                }
            }
        }

        public ISFighter Fighter => this;

        public void AssignUIController(UIController uiController)
        {
            UIController = uiController;
        }
        public void Init(Vector3 position, Tile tile)
        {
            transform.position = position;
            CurrentTile = tile;
            _playerAnimator.myFighter = this;
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
                //transform.DOLocalRotate(new Vector3(0, 0,0 ), 0f).SetEase(Ease.Linear);
                StopCoroutine(currentCoroutine);
                _playerAnimator.WalkAnimation(false);
                Jump(gateTile.transform.position);
            }
        }

        private IEnumerator FollowOnTarget(Transform target, bool lastIndex,Tile current)
        {
            var configs = Configs.GameConfig;
           
            var targetPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
            var lookDir = targetPosition - transform.position;
            var targetRotation = Quaternion.LookRotation(lookDir, Vector3.up);
            CurrentTile.isTouch = false;
            while (Vector3.Distance(transform.position, targetPosition) > 0.1f)
            {
                transform.position = Vector3.MoveTowards(transform.position, targetPosition, configs.playerMoveSpeed * Time.deltaTime);
                transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, Time.deltaTime * configs.playerRotationSpeed);
                yield return null;
            }
            CurrentTile.isTouch = true;
            transform.DOLocalMoveY(configs.playerYTargetOnTileMoving, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear).OnComplete((() =>
           {
               transform.DOLocalMoveY(1, configs.playerYTargetOnTileMovingDuration).SetEase(Ease.Linear);
           }));

            target.DOLocalMoveY(-.2f, configs.playerYTargetOnTileMovingDuration).SetRelative(true).SetEase(Ease.Linear).OnComplete((() =>
            {
                target.DOLocalMoveY(.2f, configs.playerYTargetOnTileMovingDuration).SetRelative(true).SetEase(Ease.Linear);
            }));
            if (lastIndex)
            {
                //transform.DOLocalRotate(new Vector3(0, 0,0 ), 0.1f).SetEase(Ease.Linear);
                _playerAnimator.WalkAnimation(false);
                 lastTile.CheckAdjacents(false);  //auto fliping on player stop
            }
            else
            {
                if (CurrentTile.TileCollectible)
                {
                    OnFoundingCollectible(CurrentTile.TileCollectible);
                }
                
            }
        }

       
        
        public void Jump(Vector3 position)
        {
            if (playerGoalHandler.FetchGoals()>0)
            {
                if (playerGoalHandler.TaskComplete)
                {
                    JumpEffect(position);
                }
                else
                {
                    Debug.LogError("Task Complete");
                }
            }
            else
            {
                JumpEffect(position);
            }
        }

        


        public int GiveDamage(int value)
        {
            Health -= value;
            if (Health<=0) _playerAnimator.DeathAnim();;
            return Health;
        }

        public void Attack(ISFighter fighter)
        {
            transform.DORotate(fighter._Transform.position,.1f).SetEase(Ease.Linear);
            _playerAnimator.Fighter = fighter;
           if(fighter.Health>0)
                    _playerAnimator.Attack();
        }

        public void Death()
        {
            GameController.SetState(GameStates.Lose);
            UIController.LevelFail(1.3f);
        }
    }
}