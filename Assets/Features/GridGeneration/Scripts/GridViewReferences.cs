using System.Collections;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

public class GridViewReferences : MonoBehaviour
{
   [BoxGroup("References")] GridViewReferences _gridViewReferences;
   public Player player;
   [BoxGroup("References"), SerializeField]
   public PlayerController playerController;
   
   [BoxGroup("References")]
   public  Tile _prefabTile;
   [BoxGroup("References")]
  public GameObject _prefabTileStone;
   [BoxGroup("References")]
   public Transform Gate;
   [BoxGroup("References"), SerializeField]
   public  Material disable;

   [BoxGroup("References"), SerializeField]
   public  Material enable;


}
