using System.Collections.Generic;

namespace Sablo.Gameplay.Pathfinding
{
    public interface IPathfinding
    {
        public List<Node> FindPath(Node[,] grid, Node start, Node target);
    }
}