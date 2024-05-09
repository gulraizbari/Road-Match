using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface ITile
    {
        public Transform Transform { get; }
    
        void SelectTile(ITile tile);
        void UnSelect(bool canSelect,float delay);
        void OnMerge();
        public Item CurrentItem { get; }
        public string ID { get; }
        
    }
}