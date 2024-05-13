using System.Collections.Generic;
using System.Linq;
using Sablo.Gameplay.Movement;
using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public class SquareNode : Node
    {
        private readonly IGridGenerator _gridGenerator;
        private static readonly List<Vector3> Directions = new List<Vector3>()
        {
            new Vector3(0, 0, 1), new Vector3(-1, 0, 0), new Vector3(0, 0, -1), new Vector3(1, 0, 0),
            new Vector3(1, 0, 1), new Vector3(1, 0, -1), new Vector3(-1, 0, -1), new Vector3(-1, 0, 1)
        };
        
        public SquareNode(Vector3 position, IGridGenerator gridGenerator) : base(position)
        {
            _gridGenerator = gridGenerator;
        }

        public override void CacheNeighbors()
        {
            Neighbors = new List<Node>();

            foreach (var tile in Directions.Select(dir => _gridGenerator.GetTileAtPosition(Coordinates.Position + dir)).Where(tile => tile != null))
            {
                Neighbors.Add(tile);
            }
        }

        public override void Init(ICoordinates coords)
        {
            base.Init(coords);
        }
    }

    public struct SquareCoordinates : ICoordinates
    {
        public float GetDistance(ICoordinates other)
        {
            var distance = new Vector3(Mathf.Abs(Position.x - other.Position.x),
                Mathf.Abs(Position.y - other.Position.y),
                Mathf.Abs(Position.z - other.Position.z));

            var lowest = Mathf.Min(distance.x, Mathf.Min(distance.y, distance.z));
            var highest = Mathf.Max(distance.x, Mathf.Max(distance.y, distance.z));

            var horizontalMovesRequired = highest - lowest;

            return lowest * 14 + horizontalMovesRequired * 10;
        }

        public Vector3 Position { get; set; }
    }
}