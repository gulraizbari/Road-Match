using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridView
    {
        public void SpawnGrid(Cell[,] grid, LevelData levelData);
        public Dictionary<string, Tile> PathData {
            get;
        }

        public IMergeController MergeController {
            get;
            set;
        }

        public IHapticController HapticHandler { get; set; }
        public Tile GetFoundTile(string  id);
        public void ChangeTileMaterial(bool isGreen,Renderer renderer);
    }
}