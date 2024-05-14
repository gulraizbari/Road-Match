using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.PathFinding
{
    public interface IPathFinding
    {
        public void Find(Tile start, Tile target);
    }
}