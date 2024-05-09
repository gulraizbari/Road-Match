using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public class Node
    {
        private Vector3 _position;

        public Vector3 Position
        {
            get => _position;
            set => _position = value;
        }
    }
}