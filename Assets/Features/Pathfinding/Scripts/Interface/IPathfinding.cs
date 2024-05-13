using System.Collections.Generic;

namespace Sablo.Gameplay.Pathfinding
{
    public interface IPathfinding
    {
        public List<Node> FindShortestPath(Node start, Node target);
    }
}