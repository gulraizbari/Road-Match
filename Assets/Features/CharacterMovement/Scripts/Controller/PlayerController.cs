using Features.GridGeneration.Scripts;
using Sablo.Gameplay.PathFinding;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class PlayerController : MonoBehaviour, IPlayerController
    {
        [SerializeField] private GridTraversal _gridTraversal;
        public IPathFinding PathFinding;
        public Player Player;
       [ShowInInspector] public IPlayer SelectedPlayer { get; set; }

        public void AssignPath(Tile target)
        {
            if (SelectedPlayer != null)
            {
                PathFinding.Find(SelectedPlayer.CurrentTile, target);
                _gridTraversal.StopBlinkingOnTraversableTiles();
            }

            SelectedPlayer = null;
        }
    }
}