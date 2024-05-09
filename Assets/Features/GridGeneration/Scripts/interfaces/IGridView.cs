using Features.GridGeneration.Scripts;
using Features.MergeMechanic.Scripts.Interface;
using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridView
    {
        void SpawnGrid(Cell[,] grid, LevelData levelData);

        public IMergeController MergeController {
            get;
            set;
        }
        Tile GetFoundTile(string  id);
        void ChangeTileMaterial(bool isGreen,Renderer renderer);
    }
}