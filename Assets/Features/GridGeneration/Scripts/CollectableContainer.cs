
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "CollectableContainer", menuName = "ScriptableObjects/CollectableContainer")]
public class CollectableContainer : ScriptableObject
{
    public List<Collectable> collectables;
}
