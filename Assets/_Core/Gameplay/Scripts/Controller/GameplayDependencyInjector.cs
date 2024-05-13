using Sablo.Gameplay.Movement;
using Sablo.Gameplay.Pathfinding;
using UnityEngine;

namespace Sablo.Core
{
    public class GameplayDependencyInjector : BaseDependencyInjector
    {
        [SerializeField] private Pathfinding _pathfinding;
        [SerializeField] private InputController _inputController;
        [SerializeField] private GridGenerator _gridGenerator;
        
        public override void InjectDependencies()
        {
            _inputController.PathfindingHandler = _pathfinding;
            _inputController.GridGeneratorHandler = _gridGenerator;
            _gridGenerator.InputControllerHandler = _inputController;
        }
    }
}