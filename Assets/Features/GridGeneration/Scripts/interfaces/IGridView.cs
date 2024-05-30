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

        Tile GetTile(string id);
        public IMergeController MergeController {
            get;
            set;
        }

        public IHapticController HapticHandler { get; set; }
        public Tile GetFoundTile(string  id);
        public void ChangeTileMaterial(bool isGreen,Renderer renderer);
        public void ChangeTileMaterial(Tile tile);
        public IGridGenerator GridHandler { get; }
        void UpdateMoves(int value);
        
    }
}