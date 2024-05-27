using System.Collections.Generic;
using Features.CharacterMovement;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayer
    {
        public Tile CurrentTile { get; set; }
        public void Init(Vector3 position, Tile tile);
        public void Jump(Vector3 position);
        public void MoveOnPath(List<Tile> path);
        void OnFoundingCollectible( Collectable collectable,ITile tile);
        public PlayerGoals playerGoalHandler { get; set; }
        public ISFighter Fighter { get; }
        public PlayerController PlayerHandler { get; set; }
    }
}