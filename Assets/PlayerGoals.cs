
using System.Collections.Generic;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

public class PlayerGoals : MonoBehaviour,IPlayerCollectible
{
   [BoxGroup("Reference"), ReadOnly, ShowInInspector]
    Dictionary<CollectableItems, int> collectiblesOfPlayer=new();

    public void AddOrUpdateCollectible(CollectableItems item, int count)
    {
        if (!collectiblesOfPlayer.TryAdd(item, 1))
        {
            collectiblesOfPlayer[item] += count;
        }
    }

    public int FetchCollectible(CollectableItems item)
    {
        int value = 0;
        if (collectiblesOfPlayer.TryGetValue(item, value: out var value1))
        {
          value= value1 ;
        }

        return value;
    }
    public void DeleteCollectible(CollectableItems item,int count)
    {
        if (collectiblesOfPlayer.ContainsKey(item))
        {
            collectiblesOfPlayer[item] -= count;
            if (collectiblesOfPlayer[item] <= 0)
            {
                collectiblesOfPlayer.Remove(item);
            }
        }
    }
}
