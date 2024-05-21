
using Sirenix.OdinInspector;
using UnityEngine;

public class Item : MonoBehaviour
{
    [BoxGroup("Item"), SerializeField] ItemType type;

    [ShowIf("type", ItemType.Fruits)] [BoxGroup("Item"), SerializeField]
    Fruits fruits;
    [ShowIf("type", ItemType.Vegetables)] [BoxGroup("Item"), SerializeField]
    Vegetables vegetables;
    [ShowIf("type", ItemType.Animals)] [BoxGroup("Item"), SerializeField]
    Animals animals;
    [ShowIf("type", ItemType.Random)] [BoxGroup("Item"), SerializeField]
    RandomObjects randomObjects;
    public bool Is2D;
    
    public ItemType TypeItem => type;
    public Fruits Fruit => fruits;
    public Vegetables Vegetable => vegetables;
    public Animals Animal => animals;
    public RandomObjects RandomObject=>randomObjects;
    public object GetItemObject()
    {
        switch (type)
        {
            case ItemType.Fruits:
                if (fruits != Fruits.None)
                {
                    return fruits;
                }

                break;
            case ItemType.Vegetables:
                if (vegetables != Vegetables.None)
                {
                    return vegetables;
                }
                break;
            case ItemType.Animals:
                if (animals != Animals.None)
                {
                    return animals;
                }
                break;
            case ItemType.Random:
                if (randomObjects != RandomObjects.None)
                {
                    return randomObjects;
                }
                break;
            // Add more cases for other item types as needed
            // case ItemType.SomeOtherType:
            //     // Check if value is set and return appropriate object
            //     break;
            default:
                break;
        }

        return null; // Return null if type is None or value is not set
    }
}