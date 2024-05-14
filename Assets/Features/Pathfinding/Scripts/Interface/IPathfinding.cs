using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.Pathfinding
{
    public interface IPathFinding
    {
        public void Find(Tile start, Tile target);
    }
}