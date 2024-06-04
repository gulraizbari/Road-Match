using System.Collections.Generic;
using DG.Tweening;
using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.PathFinding
{
    public class PathFinding : MonoBehaviour, IPathFinding
    {
        [SerializeField] private GridGenerator _gridGenerator;
        public IPlayer player;
        [SerializeField] private List<Tile> _foundPaths = new List<Tile>();
        public bool checkWinCondition;
        [Button]
        public void Find(Tile start, Tile target)
        {
            _foundPaths.Clear();
            if (FindPath(start, target) != null)
            {
                _foundPaths = FindPath(start, target);
                player.PlayerHandler.CantRun = true;
                player.MoveOnPath(_foundPaths);
               
            }
            else
            {
                
                return;
            }
        }

        public List<Tile> foundPath => foundPath;

        private List<Tile> FindPath(Tile startCell, Tile targetCell)
        {
            var closedSet = new HashSet<Tile>();
            var openSet = new HashSet<Tile> { startCell };
            var cameFrom = new Dictionary<Tile, Tile>();

            var gScore = new Dictionary<Tile, float>();
            foreach (Tile cell in _gridGenerator._gridView.tilesGrid)
            {
                gScore[cell] = Mathf.Infinity;
            }

            gScore[startCell] = 0;

            var fScore = new Dictionary<Tile, float>();
            foreach (Tile cell in _gridGenerator._gridView.tilesGrid)
            {
                fScore[cell] = Mathf.Infinity;
            }

            fScore[startCell] = Heuristic(startCell, targetCell);

            while (openSet.Count > 0)
            {
                Tile current = null;
                var lowestFScore = Mathf.Infinity;
                foreach (Tile cell in openSet)
                {
                    if (fScore[cell] < lowestFScore)
                    {
                        current = cell;
                        lowestFScore = fScore[cell];
                    }
                }

                if (current == targetCell)
                {
                    var path = ReconstructPath(cameFrom, current);
                    _foundPaths = path;
                    return path;
                }

                openSet.Remove(current);
                closedSet.Add(current);

                foreach (Tile neighbor in _gridGenerator.FindAdjacentCells(current))
                {
                    if (closedSet.Contains(neighbor) || (neighbor.TileState != TileStates.Walkable))
                    {
                        continue; // Skip this neighbor if it's already in the closed set or it's not walkable
                    }

                    float tentativeGScore = gScore[current] + DistanceBetween(current, neighbor);

                    if (!openSet.Contains(neighbor) || tentativeGScore < gScore[neighbor])
                    {
                        cameFrom[neighbor] = current;
                        gScore[neighbor] = tentativeGScore;
                        fScore[neighbor] = gScore[neighbor] + Heuristic(neighbor, targetCell);
                        if (!openSet.Contains(neighbor))
                        {
                            openSet.Add(neighbor);
                        }
                    }
                }
            }

            return null;
        }

        private float Heuristic(Tile a, Tile b)
        {
            // Example heuristic function (Euclidean distance)
            return Vector3.Distance(a.transform.position, b.transform.position);
        }

        private float DistanceBetween(Tile a, Tile b)
        {
            // Example function to calculate distance between cells
            return Vector3.Distance(a.transform.position, b.transform.position);
        }

        private List<Tile> ReconstructPath(Dictionary<Tile, Tile> cameFrom, Tile current)
        {
            var path = new List<Tile>();
            path.Add(current);
            while (cameFrom.ContainsKey(current))
            {
                current = cameFrom[current];
                path.Add(current);
            }

            path.Reverse();
            return path;
        }

        public List<Tile> GetFoundPaths()
        {
            return _foundPaths;
        }
    }
}