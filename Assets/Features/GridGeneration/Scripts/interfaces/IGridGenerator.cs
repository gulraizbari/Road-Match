using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using UnityEngine;

namespace GridGeneration.Scripts.interfaces
{
    public interface IGridGenerator
    {
         Cell[,] Grid();
         List<Cell> FindAdjacentCells(Cell cell);
    }
}