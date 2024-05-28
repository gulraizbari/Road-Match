using System.Collections.Generic;
using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.PathFinding
{
    public interface IPathFinding
    {
        public void Find(Tile start, Tile target);
         List<Tile> foundPath
         {
             get;
         }
    }
}