using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface ITile
    {
        public Transform PlacementTransform { get; }
        public TileStates TileState { get; set; }
        void SelectTile(ITile tile);
        void UnSelect(bool canSelect,float delay);
        void OnMerge(Vector3 target, float duration);
        public Item CurrentItem { get; }
        public string ID { get; }
        
    }
}