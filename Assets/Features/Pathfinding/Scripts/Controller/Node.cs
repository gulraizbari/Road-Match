using System.Collections.Generic;
using UnityEngine;

namespace Sablo.Gameplay.Pathfinding
{
    public abstract class Node : MonoBehaviour
    {
        private Vector3 _position;
        private bool _isHurdle;
        private bool _isPlayerStanding;

        public Node(Vector3 position)
        {
            _position = position;
        }

        public ICoordinates Coordinates;
        public Node Connection { get; private set; }
        public List<Node> Neighbors { get; protected set; }
        public float G { get; private set; }
        public float H { get; private set; }
        public float F => G + H;

        public Vector3 Position
        {
            get => _position;
            set => _position = value;
        }

        public bool IsHurdle
        {
            get => _isHurdle;
            set => _isHurdle = value;
        }

        public bool IsPlayerStanding
        {
            get => _isPlayerStanding;
            set => _isPlayerStanding = value;
        }

        public virtual void Init(ICoordinates coords)
        {
            Coordinates = coords;
            transform.position = Coordinates.Position;
        }

        public abstract void CacheNeighbors();

        public float GetDistance(Node other) => Coordinates.GetDistance(other.Coordinates);

        public void SetConnection(Node node) => Connection = node;

        public void SetG(float g) => G = g;

        public void SetH(float h) => H = h;
    }
}