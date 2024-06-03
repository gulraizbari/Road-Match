
using System;
using GridGeneration.Scripts.interfaces;
using UnityEngine;

public class Collectable : MonoBehaviour
{
    public CollectableItems collectableType;
    public BoosterType typeOfBooster;
    public bool levelDependent;
    [SerializeField]private string id;
    public bool isDone;
    public bool Unlink;
    public string CollectibleID => id;
    public void Init(string _id,bool unLink)
    {
        id = _id;
        Unlink = unLink;
    }
    public void CheckTileLink(ITile linkedTile)
    {

        if (linkedTile != null)
        {
            linkedTile.TileState = TileStates.Walkable; 
        }
        else
        {
            print(" not match");
        }
    }
    public string ReverseString(string input)
    {
        
        char[] charArray = input.ToCharArray();
        Array.Reverse(charArray);
        return new string(charArray);
    }
}
