using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public class Pathfinding : MonoBehaviour, IPathfinding
    {
        public List<Node> FindShortestPath(Node start, Node target)
        {
            var toSearch = new List<Node>() { start };
            var processed = new List<Node>();

            while (toSearch.Any())
            {
                var current = toSearch[0];
                foreach (var node in toSearch)
                {
                    if (node.F < current.F || node.F == current.F && node.H < current.H)
                    {
                        current = node;
                    }
                }

                processed.Add(current);
                toSearch.Remove(current);

                if (current == target)
                {
                    break;
                }

                foreach (var neighbor in current.Neighbors.Where(t => !t.IsHurdle && !processed.Contains(t)))
                {
                    var inSearch = toSearch.Contains(neighbor);
                    var costToNeighbor = current.G + current.GetDistance(neighbor);

                    if (!inSearch || costToNeighbor < neighbor.G)
                    {
                        neighbor.SetG(costToNeighbor);
                        neighbor.SetConnection(current);
                        if (!inSearch)
                        {
                            neighbor.SetH(neighbor.GetDistance(target));
                            toSearch.Add(neighbor);
                        }
                    }
                }
            }

            var path = TraceShortestPath(start, target);
            return path;
        }

        private List<Node> TraceShortestPath(Node start, Node target)
        {
            var currentPathTile = target;
            var path = new List<Node>();
            var count = 100;
            while (currentPathTile != start)
            {
                path.Add(currentPathTile);
                currentPathTile = currentPathTile.Connection;
                count--;
                if (count < 0)
                {
                    throw new Exception();
                }
            }

            return path;
        }
    }
}