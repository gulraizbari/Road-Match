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
        public Tile targetTile;
       [ShowInInspector] public IPlayer SelectedPlayer { get; set; }

        public void AssignPath(Tile target)
        {
            if (SelectedPlayer != null)
            {
                if (targetTile)
                {
                    if (targetTile.ID==target.ID)
                    {
                        Debug.LogError($"Target tile ID {target.ID} is already assigned. Clearing target.");
                        return;
                    }
                }
                targetTile = target;
                PathFinding.Find(SelectedPlayer.CurrentTile, targetTile);
               // _gridTraversal.StopBlinkingOnTraversableTiles();
            }
            
        }
    }
}