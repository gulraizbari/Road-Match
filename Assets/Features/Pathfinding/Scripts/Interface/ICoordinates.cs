using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public interface ICoordinates {
        public float GetDistance(ICoordinates other);
        public Vector3 Position { get; set; }
    }
}