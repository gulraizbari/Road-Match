namespace Sablo.Core
{
    public class GameplayDependencyInjector : BaseDependencyInjector
    {
        // [SerializeField] private Pathfinding _pathfinding;
        // [SerializeField] private GridManager _gridManager;
        public override void InjectDependencies()
        {
            // _pathfinding.GridManagerHandler = _gridManager;
            // _gridManager.PathfindingHandler = _pathfinding;
        }
    }
}