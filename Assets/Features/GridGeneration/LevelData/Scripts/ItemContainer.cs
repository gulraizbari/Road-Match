using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemContainer", menuName = "ScriptableObjects/ItemContainer")]
public class ItemContainer : ScriptableObject
{
  [BoxGroup("Item Daya")]  public ItemType itemType;
  [Space(5)]
  [BoxGroup("Item Daya")] public List<Item> spawnItemContainer;
    // [SerializeField] Dictionary<ItemType, List<Item>> _itemDictionary = new Dictionary<ItemType, List<Item>>();
    //
    // // Method to add items to the dictionary
    // public void AddItem(Item item)
    // {
    //     if (!_itemDictionary.ContainsKey(item.type))
    //     {
    //         _itemDictionary[item.type] = new List<Item>();
    //     }
    //     _itemDictionary[item.type].Add(item);
    // }
    //
    // public Item FindItem(ItemType type, object item)
    // {
    //     if (_itemDictionary.ContainsKey(type))
    //     {
    //         // Retrieve the list of items for the specified type
    //         List<Item> itemsOfType = _itemDictionary[type];
    //
    //         // Use Find method on the list to find the specific item
    //         return itemsOfType.Find(x => x.fruits == (Fruits)item || x.vegetables == (Vegetables)item);
    //     }
    //     else
    //     {
    //         return null; // Handle case when type is not found
    //     }
    // }
}