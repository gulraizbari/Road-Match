using Features.GridGeneration.Scripts;
using Features.UIEffects;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using UnityEngine;
using UnityEngine.Serialization;

namespace Sablo.Core
{
    public class GameplayDependencyInjector : BaseDependencyInjector
    {
        [SerializeField] private MergeController _mergeController;
        [SerializeField] private GridView _gridView;
        [SerializeField] private HapticsController _hapticsController;
        [SerializeField] private PlayerController _playerController;
        [SerializeField] private PathFinding _pathFinding;
        [SerializeField] private UIController _uiController;
        [SerializeField] private Player _player;
        [SerializeField] private PlayerGoals _playerGoals;
        [SerializeField] private VFXController _vfxController;
        public override void InjectDependencies()
        {
            _gridView.MergeController = _mergeController;
            _gridView.HapticHandler = _hapticsController;
            _pathFinding.player = _playerController.Player;
            _playerController.SelectedPlayer = _player;
            _playerController.PathFinding = _pathFinding;
            _player.AssignUIController(_uiController);
            _player.playerGoalHandler = _playerGoals;
            _player.GridViewHandler = _gridView;
            _gridView.UIHandler = _uiController;
            _gridView.Goals = _playerGoals;
            _playerGoals.gridView = _gridView;
            _player.VFXControllerHandler = _vfxController;
        }
    }
}