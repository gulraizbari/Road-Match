using System.Collections.Generic;

namespace Features.GridGeneration.Scripts.interfaces
{
    public interface ICell
    {
        List<Cell> GetAdjacent(Tile tile);
        public int Row { get; }
        public int Col { get; }
    }
} 
    
