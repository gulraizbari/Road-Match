using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayer
    {
        public Tile CurrentTile { get; set; }
        public void Init(Vector3 position, Tile tile);
        public void Jump(Vector3 position,CollectableItems requiredItem);
        public void MoveOnPath(List<Tile> path);
        void OnFoundingCollectible(Collectable collectable);
        public PlayerGoals playerGoalHandler { get; set; }
    }
}