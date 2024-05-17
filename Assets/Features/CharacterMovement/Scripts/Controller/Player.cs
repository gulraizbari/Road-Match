using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features;
using Features.GridGeneration.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

namespace Sablo.Gameplay.Movement
{
    public class Player : MonoBehaviour, IPlayer
    {
        [SerializeField, ReadOnly] Tile _currentTile;
        [SerializeField] private float _moveSpeed = 5f;

        [BoxGroup("Reference")] [SerializeField]
        GameObject _crown;
        [BoxGroup("Reference")] [SerializeField]
        PlayerAnimator _playerAnimator;
        private IEnumerator currentCoroutine;
        private float _rotationSpeed = 10f;
        public List<Tile> pathToMove;
        public Tile lastTile;
        public float walkDelay;
        public Tile CurrentTile
        {
            get => _currentTile;
            set => _currentTile = value;
        }

        public IUIController UIController { get; private set; }

        public void AssignUIController(UIController uiController)
        {
            UIController = uiController;
        }
        public void Init(Vector3 position, Tile tile)
        {
            transform.position = position;
            CurrentTile = tile;
        }

        public void MoveOnPath(List<Tile> path)
        {
            pathToMove = path;
            if (currentCoroutine != null)
            {
                StopCoroutine(currentCoroutine);
            }

            // Find the nearest waypoint on the new path and start moving from there
            var nearestWaypoint = FindNearestWaypoint(path);
            if (nearestWaypoint != null)
            {
                // Get the index of the nearest waypoint in the path
                var nearestIndex = path.IndexOf(nearestWaypoint);
                // Trim the path to start from the nearest waypoint
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
                ///yield return FollowOnTarget(path[i].transform, last);
                
                if (i >= path.Count - 1)
                {
                    path[i].AssignPlayer(this);
                }
            }
        }

        private IEnumerator FollowOnTarget(Transform target, bool lastIndex)
        {
           
           
            var targetPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
            var lookDir = targetPosition - transform.position;
            // Smoothly rotate towards the target direction
            var targetRotation = Quaternion.LookRotation(lookDir, Vector3.up);
            while (Vector3.Distance(transform.position, targetPosition) > 0.1f)
            {
                // Move towards the target position
                transform.position = Vector3.MoveTowards(transform.position, targetPosition, _moveSpeed * Time.deltaTime);
                // Smoothly rotate towards the target direction
                transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, Time.deltaTime * _rotationSpeed);
                yield return null;
            }
           // _playerAnimator.WalkAnimation(false);
            transform.DOLocalMoveY(-.5f, .1f).SetRelative(true).SetEase(Ease.Linear).OnComplete((() =>
            {
                transform.DOLocalMoveY(.5f, .1f).SetRelative(true).SetEase(Ease.Linear);
            }));
            target.DOLocalMoveY(-.5f, .1f).SetRelative(true).SetEase(Ease.Linear).OnComplete((() =>
            {
                target.DOLocalMoveY(.5f, .1f).SetRelative(true).SetEase(Ease.Linear);
            }));

            if (lastIndex)
            {
                transform.DOLocalRotate(new Vector3(0, 0,0 ), 0.1f).SetEase(Ease.Linear);
                _playerAnimator.WalkAnimation(false);
                yield return new WaitForSeconds(.5f);
                lastTile.CollectAdjacent();
            }
            else
            {
                
                yield return new WaitForSeconds(walkDelay);
            }
           
        }

        public void LookAt(Vector3 target)
        {
            var lookPos = target - transform.position;
            var lookRot = Quaternion.LookRotation(lookPos, Vector3.up);
            var eulerY = lookRot.eulerAngles.y;
            var rotation = Quaternion.Euler(0, eulerY, 0);
            transform.rotation = rotation;
        }

        public void Jump(Vector3 position)
        {
            _playerAnimator.JumpAnimation();
            position.y = 1f;
            LookAt(position);
            transform.DOJump(position, 4, 1, 0.5f).SetEase(Ease.Linear).OnComplete((() =>
            {
                _crown.SetActive(true);
                transform.DORotate(new Vector3(0, 180, 0), 0.1f).SetEase(Ease.Linear).OnComplete(() =>
                {
                     _playerAnimator.WinAnimation();
                });
                 UIController.LevelComplete(4);
            }));
           }
        
    }
}