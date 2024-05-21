namespace Sablo.Gameplay.Movement
{
    public interface IPlayerCollectible
    {
        void AddOrUpdateCollectible(CollectableItems item, int count);
        int FetchCollectible(CollectableItems item);
        void DeleteCollectible(CollectableItems item, int count);

    }
}