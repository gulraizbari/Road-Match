using System;
using Features;
using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using Utilities;

public class GridViewReferences : MonoBehaviour
{
    [BoxGroup("References")]  public Player player;
    [BoxGroup("References")] public PlayerController playerController;
    [BoxGroup("References")] public Tile _prefabTile;
    [BoxGroup("References")] public GameObject _prefabTileStone;
    [BoxGroup("References")] public Transform Gate;
    [BoxGroup("References")] public Material disable;
    [BoxGroup("References")] public Material enable;
    [BoxGroup("References")] public Material enableWithOutRotation;
    [BoxGroup("References")] public TutorialManager tutorialManager;
    [BoxGroup("References")] public Enemy enemy;
    [BoxGroup("References")] public PowerUp powerUp;
    [BoxGroup("References/Values")] public int moves;


    void OnEnable()
    {
        EventManager._updateMoves += UpdateMyMoves;
    }

    void OnDisable()
    {
        EventManager._updateMoves -= UpdateMyMoves;
    }

    private void UpdateMyMoves(int value)
    {
        moves += value;
        UIController.instance.Text(TextType.Moves).UpdateText($"{moves}");
        GameController.SetState(GameStates.Play);
    }
    public void CalculateMoves(int movesMultiplier )
    {
        moves *= movesMultiplier;
        UIController.instance.Text(TextType.Moves).UpdateText($"{moves}");
    }

    public void UpdateMoves(int value)
    {
        moves += value;
        if (moves <=0 )
        {
            moves = 0;
            UIController.instance.Text(TextType.Moves).UpdateText($"{moves}");
            print("Level Fail");
            UIController.instance.LevelFail(.5f);
        }
        else
        {
            UIController.instance.Text(TextType.Moves).UpdateText($"{moves}");
        }
        
    }

    
}