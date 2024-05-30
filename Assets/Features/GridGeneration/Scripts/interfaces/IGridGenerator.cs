using System.Collections.Generic;
using Features.GridGeneration.Scripts;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridGenerator
    {
         public Cell[,] Grid();
         public List<Cell> FindAdjacentCells(Cell cell);
         public List<Tile> FindAdjacentCells(Tile cell);
         public IGridView GridView { get; }
    }
}