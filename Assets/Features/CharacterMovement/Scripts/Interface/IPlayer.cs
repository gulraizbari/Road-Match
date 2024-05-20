using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayer
    {
        public Tile CurrentTile { get; set; }
        public void Init(Vector3 position, Tile tile);
        public void Jump(Vector3 position,bool keyReq);
        public void MoveOnPath(List<Tile> path);
        public void LookAt(Vector3 target);
        void CheckCollectable(Collectable collectable);
    }
}