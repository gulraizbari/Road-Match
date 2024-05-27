using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayerCollectible
    {
        void AddOrUpdateCollectible(CollectableItems item, BoosterType itemSubType, int count);
        void AddOrUpdateGoals(CollectableItems item, BoosterType itemSubType, int count);
        int FetchCollectible(CollectableItems item);
        int FetchGoals();
        void DeleteCollectible(CollectableItems item, int count);
        void SetGate(Tile tile);
        public bool TaskComplete { get; set; }
        void SetSlogan();

    }
}