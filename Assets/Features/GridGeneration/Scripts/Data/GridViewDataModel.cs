using Features.Haptics.Interfaces;
using GridGeneration.Scripts.interfaces;

namespace Features.GridGeneration.Scripts
{
    public class GridViewDataModel
    {
        public IGridGenerator GridHandler;
        public Cell[,] CellGrid;
        public LevelData LevelData;
        
    }
}