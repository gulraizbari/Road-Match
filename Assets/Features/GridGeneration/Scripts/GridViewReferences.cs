using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using Sirenix.OdinInspector;
using TMPro;
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
    [BoxGroup("References")] public Material enableWithOutRotation;
    [BoxGroup("References")] public TutorialManager tutorialManager;
    [BoxGroup("References")] public TextMeshProUGUI movesText;
    [BoxGroup("References/Values")] public int moves;
    [BoxGroup("References/Values")]public int movesMultiplier=1;

    public void CalculateMoves()
    {
        moves = moves * movesMultiplier;
        UpdateText();
    }

    public void UpdateMoves(int value)
    {
        moves += value;
        UpdateText();
    }

    private void UpdateText()
    {
        movesText.SetText($"{moves}");
    }
    
}