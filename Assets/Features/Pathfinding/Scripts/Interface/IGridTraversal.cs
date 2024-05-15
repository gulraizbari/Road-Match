using System.Collections.Generic;
using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.PathFinding
{
    public interface IGridTraversal
    {
        public void DFS(Tile current, HashSet<Tile> visited, List<Tile> connectedComponent);
    }
}