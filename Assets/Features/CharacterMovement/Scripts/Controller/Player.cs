using System.Collections;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class Player : MonoBehaviour, IPlayer
    {
        [SerializeField, ReadOnly] Tile _currentTile;
        [SerializeField] private float _moveSpeed = 5f;
        private float _rotationSpeed = 10f;
        public List<Tile> pathToMove;

        public Tile CurrentTile
        {
            get => _currentTile;
            set => _currentTile = value;
        }

        IEnumerator currentCoroutine;

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
            Tile nearestWaypoint = FindNearestWaypoint(path);
            if (nearestWaypoint != null)
            {
                // Get the index of the nearest waypoint in the path
                int nearestIndex = path.IndexOf(nearestWaypoint);
                // Trim the path to start from the nearest waypoint
                List<Tile> trimmedPath = path.GetRange(nearestIndex, path.Count - nearestIndex);
                currentCoroutine = FollowPath(trimmedPath);
                StartCoroutine(currentCoroutine);
            }
        }

        private Tile FindNearestWaypoint(List<Tile> path)
        {
            float minDistance = Mathf.Infinity;
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
            for (int i = 0; i < path.Count; i++)
            {
                path[i].RemovePlayer();
                CurrentTile = path[i];
                yield return FollowOnTarget(path[i].transform);

                if (i >= path.Count - 1)
                {
                    path[i].AssignPlayer(this);
                }
            }
        }

        private IEnumerator FollowOnTarget(Transform target)
        {
            Vector3 targetPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
            Vector3 lookDir = targetPosition - transform.position;
            // Smoothly rotate towards the target direction
            Quaternion targetRotation = Quaternion.LookRotation(lookDir, Vector3.up);
            while (Vector3.Distance(transform.position, targetPosition) > 0.1f)
            {
                // Move towards the target position
                transform.position = Vector3.MoveTowards(transform.position, targetPosition, _moveSpeed * Time.deltaTime);
                // Smoothly rotate towards the target direction
                transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, Time.deltaTime * _rotationSpeed);

                yield return null;
            }
        }
        
        public void LookAt(Vector3 target)
        {
            Vector3 lookPos = target - transform.position;
            Quaternion lookRot = Quaternion.LookRotation(lookPos, Vector3.up);
            float eulerY = lookRot.eulerAngles.y;
            Quaternion rotation = Quaternion.Euler(0, eulerY, 0);
            transform.rotation = rotation;
        }
    }
}