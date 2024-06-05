using System.Collections.Generic;
using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayerController
    {
        public IPlayer SelectedPlayer { get; set; }
        public void AssignPath(Tile target);
        public void CheckEnemyPath(List<Tile> target);
        public bool CantRun { get; set; }
    }
}