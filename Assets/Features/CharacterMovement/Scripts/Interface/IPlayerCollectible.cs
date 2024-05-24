using Features.GridGeneration.Scripts;

namespace Sablo.Gameplay.Movement
{
    public interface IPlayerCollectible
    {
        void AddOrUpdateCollectible(CollectableItems item, int count);
        void AddOrUpdateGoals(CollectableItems item, int count);
        int FetchCollectible(CollectableItems item);
        int FetchGoals();
        void DeleteCollectible(CollectableItems item, int count);
        void SetGate(Tile tile);
        public bool TaskComplete { get; set; }
        void SetSlogan();

    }
}