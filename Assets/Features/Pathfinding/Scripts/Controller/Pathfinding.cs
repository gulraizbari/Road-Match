using System.Collections.Generic;
using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public class Pathfinding : MonoBehaviour, IPathfinding
    {
        private Graph _graph;

        public List<Node> FindPath(Node[,] grid, Node start, Node target)
        {
            var currentPath = new PriorityQueue<Node>();
            var costSoFar = new Dictionary<Node, int>();
            var visitedPath = new Dictionary<Node, Node>();
            currentPath.Enqueue(start, 0);
            costSoFar[start] = 0;
            visitedPath[start] = null;

            while (currentPath.Count > 0)
            {
                var current = currentPath.Dequeue();
                if (current == target)
                {
                    break;
                }

                foreach (var nextNode in _graph.GetNeighbors(grid, current))
                {
                    var newCost = costSoFar[current] + _graph.GetCost(current, nextNode);
                    if (!costSoFar.ContainsKey(nextNode) || newCost < costSoFar[nextNode])
                    {
                        costSoFar[nextNode] = newCost;
                        var priority = newCost + GetHeuristic(target, nextNode);
                        currentPath.Enqueue(nextNode, priority);
                        visitedPath[nextNode] = current;
                    }
                }
            }

            var path = TracePath(target, visitedPath);
            return path;
        }

        private List<Node> TracePath(Node target, Dictionary<Node, Node> visitedPath)
        {
            var path = new List<Node>();
            var currentPathNode = target;
            while (currentPathNode != null)
            {
                path.Add(currentPathNode);
                currentPathNode = visitedPath[currentPathNode];
            }

            path.Reverse();
            return path;
        }

        private int GetHeuristic(Node currentNode, Node neighborNode)
        {
            // Manhattan Distance
            var distanceX = (int)Mathf.Abs(currentNode.Position.x - neighborNode.Position.x);
            var distanceY = (int)Mathf.Abs(currentNode.Position.y - neighborNode.Position.y);
            var distance = distanceX + distanceY;
            return distance;
        }
    }
}