
using GridGeneration.Scripts.interfaces;

namespace Features.MergeMechanic.Scripts.Interface
{
    public interface IMergeController
    {
        void SelectTile(ITile tile);

        void UnSelectTile();
        //void MergeTiles(ItemType itemType, object objectType);
    }
}