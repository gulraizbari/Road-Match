using Features.GridGeneration.Scripts;
using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridView
    {
        void SpawnGrid(Cell[,] grid, LevelData levelData);

        
        Tile GetFoundTile(string  id);
        void ChangeTileMaterial(bool isGreen,Renderer renderer);
    }
}