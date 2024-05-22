using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features;
using Features.CharacterMovement.Scripts;
using Features.GridGeneration.Scripts;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class Player : PlayerBaseClass,IPlayer
    {
        public void OnFoundingCollectible(Collectable collectable)
        {
           
            if (collectable.levelDependent)
            {
                switch (collectable.collectableType)
                {
                    case CollectableItems.ChestBox:
                        ChestBoxCase(collectable);
                        break;
                    case CollectableItems.Key:
                        KeyCase(collectable);
                        break;
                }
            }
        }
        
        public void AssignUIController(UIController uiController)
        {
            UIController = uiController;
        }
        public void Init(Vector3 position, Tile tile)
        {
            transform.position = position;
            CurrentTile = tile;
            CurrentTile.CheckAdjacents(true);
        }

        public void MoveOnPath(List<Tile> path)
        {
            pathToMove = path;
            if (currentCoroutine != null)
            {
                StopCoroutine(currentCoroutine);
            }
            var nearestWaypoint = FindNearestWaypoint(path);
            if (nearestWaypoint != null)
            {
                var nearestIndex = path.IndexOf(nearestWaypoint);
                var trimmedPath = path.GetRange(nearestIndex, path.Count - nearestIndex);
                currentCoroutine = FollowPath(trimmedPath);
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
                yield return FollowOnTarget(path[i].transform, last);
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
                transform.DOLocalRotate(new Vector3(0, 0,0 ), 0f).SetEase(Ease.Linear);
                StopCoroutine(currentCoroutine);
                _playerAnimator.WalkAnimation(false);
                Jump(gateTile.transform.position);
            }
        }

        private IEnumerator FollowOnTarget(Transform target, bool lastIndex)
        {
            var configs = Configs.GameConfig;
           
            var targetPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
            var lookDir = targetPosition - transform.position;
            var targetRotation = Quaternion.LookRotation(lookDir, Vector3.up);
            while (Vector3.Distance(transform.position, targetPosition) > 0.1f)
            {
                transform.position = Vector3.MoveTowards(transform.position, targetPosition, configs.playerMoveSpeed * Time.deltaTime);
                transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, Time.deltaTime * configs.playerRotationSpeed);
                yield return null;
            }
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
                transform.DOLocalRotate(new Vector3(0, 0,0 ), 0.1f).SetEase(Ease.Linear);
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
            // if (requiredItem!=CollectableItems.None)
            // {
            //     
            //     if (playerGoalHandler.FetchCollectible(requiredItem)>0)
            //     {
            //         if (playerGoalHandler.TaskComplete)
            //         {
            //             JumpEffect(position);
            //         }
            //        
            //     }
            //     else
            //     {
            //         Debug.LogError("Key Missing");
            //         return;
            //     }
            // }
            // else
            // {
            //     JumpEffect(position);
            // }
            //if (!Haskey)return;
        }

       
      
    }
}