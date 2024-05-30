using System;
using UnityEngine;
using UnityEngine.Events;

namespace GridGeneration.Scripts.interfaces
{
    public interface ITile
    {
        public Transform PlacementTransform { get; }
        public TileStates TileState { get; set; }
        void SelectTile(ITile tile);
        void UnSelect(bool canSelect,float delay,float rotationDelay,UnityEvent action);
        void OnMerge(Vector3 target, float duration);
        public ParticleSystem MergeParticle { get; set; }
        public Item CurrentItem { get; }
        public string ID { get; }
        void CheckAdjacents(bool canFlip);
        public Collectable  TileCollectible { get; }
        public Enemy _Enemy { get; set; }
        public bool TileTouch { get; set; }

    }
}