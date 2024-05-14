using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Pathfinding;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class PlayerController : MonoBehaviour, IPlayerController
    {
        public IPathFinding PathFinding;
        public Player Player;
        public IPlayer SelectedPlayer { get; set; }

        public void AssignPath(Tile target)
        {
            if (SelectedPlayer != null)
            {
                PathFinding.Find(SelectedPlayer.CurrentTile, target);
            }

            SelectedPlayer = null;
        }
    }
}