using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridView
    {
        void SpawnGrid(Cell[,] grid, LevelData levelData);
        Dictionary<string, Tile> PathData {
            get;
        }

        public IMergeController MergeController {
            get;
            set;
        }

        public IHapticController HapticHandler { get; set; }
        Tile GetFoundTile(string  id);
        void ChangeTileMaterial(bool isGreen,Renderer renderer);
    }
}