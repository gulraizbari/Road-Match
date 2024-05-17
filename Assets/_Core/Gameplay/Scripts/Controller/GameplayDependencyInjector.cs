using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using UnityEngine;

namespace Sablo.Core
{
    public class GameplayDependencyInjector : BaseDependencyInjector
    {
        [SerializeField] private MergeController _mergeController;
        [SerializeField] private GridView _gridView;
        [SerializeField] private HapticsController _hapticsController;
        [SerializeField] private PlayerController _playerController;
        [SerializeField] private PathFinding _pathFinding;
        [SerializeField] UIController _uiController;
        [SerializeField] Player _player;
        
        public override void InjectDependencies()
        {
            _gridView.MergeController = _mergeController;
            _gridView.HapticHandler = _hapticsController;
            _pathFinding.player = _playerController.Player;
            _playerController.PathFinding = _pathFinding;
            _player.AssignUIController(_uiController);
        }
    }
}