using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemContainer", menuName = "ScriptableObjects/ItemContainer")]
public class ItemContainer : ScriptableObject
{
  [BoxGroup("Item Daya")]  public ItemType itemType;
  [Space(5)]
  [BoxGroup("Item Daya")] public List<Item> spawnItemContainer;
}