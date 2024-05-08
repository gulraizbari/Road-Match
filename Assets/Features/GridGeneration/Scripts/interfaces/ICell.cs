using System.Collections.Generic;
using Features.GridGeneration.Scripts;

namespace GridGeneration.Scripts.interfaces
{
    public interface ICell
    {
        List<Cell> GetAdjacent(Tile tile);
    }
}