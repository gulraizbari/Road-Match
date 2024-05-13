using Sablo.Gameplay.Pathfinding;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public interface IGridGenerator
    {
        public SquareNode[,] GetGrid();

        public SquareNode GetTileAtPosition(Vector3 position);
    }
}