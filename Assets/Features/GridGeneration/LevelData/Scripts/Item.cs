using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

public class Item : MonoBehaviour
{
   [BoxGroup("Item")]public ItemType type;
   [ShowIf("type",ItemType.Fruits)]
   [BoxGroup("Item")]public Fruits fruits;
   [ShowIf("type",ItemType.Vegetables)]
   [BoxGroup("Item")]public Vegetables vegetables;
}
