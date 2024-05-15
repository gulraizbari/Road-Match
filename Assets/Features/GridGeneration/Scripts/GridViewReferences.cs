using System.Collections;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using Sirenix.OdinInspector;
using UnityEngine;

public class GridViewReferences : MonoBehaviour
{
   [BoxGroup("References")] GridViewReferences _gridViewReferences;
   public Player player;
   [BoxGroup("References")]
   public PlayerController playerController;
   
   [BoxGroup("References")]
   public  Tile _prefabTile;
   [BoxGroup("References")]
  public GameObject _prefabTileStone;
   [BoxGroup("References")]
   public Transform Gate;
   [BoxGroup("References")]
   public  Material disable;

   [BoxGroup("References")]
   public  Material enable;

   [BoxGroup("References")]
   public GridTraversal _gridTraversal;
        
   [BoxGroup("References")]
   public ColorEffect _colorEffect;

}
