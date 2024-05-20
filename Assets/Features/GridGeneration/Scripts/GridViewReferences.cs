using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using Sirenix.OdinInspector;
using UnityEngine;

public class GridViewReferences : MonoBehaviour
{
    public Player player;
    //[BoxGroup("References")] public GridTraversal _gridTraversal;
    [BoxGroup("References")] public PlayerController playerController;
    [BoxGroup("References")] public Tile _prefabTile;
    [BoxGroup("References")] public GameObject _prefabTileStone;
    [BoxGroup("References")] public Transform Gate;
    [BoxGroup("References")] public Material disable;
    [BoxGroup("References")] public Material enable;
    //[BoxGroup("References")] public ColorEffect _colorEffect;
    [BoxGroup("References")] public TutorialManager tutorialManager;
}