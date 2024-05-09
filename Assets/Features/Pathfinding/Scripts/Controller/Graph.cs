using System.Collections.Generic;
using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public class Graph
    {
        public int GetCost(Node current, Node nextNode)
        {
            var cost = Mathf.RoundToInt(Vector3.Distance(current.Position, nextNode.Position));
            return cost;
        }

        public List<Node> GetNeighbors(Node[,] grid, Node currentNode)
        {
            var neighbors = new List<Node>();
            int[,] directions =
            {
                { 0, 1 }, // right
                { 0, -1 }, // left
                { 1, 0 }, // down
                { -1, 0 }, // up
                { 1, 1 }, // down-right
                { 1, -1 }, // down-left
                { -1, 1 }, // up-right
                { -1, -1 } // up-left
            };
            for (int index = 0; index < directions.GetLength(0); index++)
            {
                var checkX = (int)currentNode.Position.x + directions[index, 0];
                var checkY = (int)currentNode.Position.y + directions[index, 1];
                if (checkX >= 0 && checkX < grid.GetLength(0) && checkY >= 0 && checkY < grid.GetLength(1))
                {
                    var neighbor = grid[checkX, checkY];
                    neighbors.Add(neighbor);
                }
            }

            return neighbors;
        }
    }
}