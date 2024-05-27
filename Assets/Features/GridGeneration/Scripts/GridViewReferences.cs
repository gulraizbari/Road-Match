using Features;
using Features.GridGeneration.Scripts;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;

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
    [BoxGroup("References")] public TextMeshProUGUI movesText;
    [BoxGroup("References")] public Enemy enemy;
    [BoxGroup("References")] public PowerUp powerUp;
    [BoxGroup("References/Values")] public int moves;
   

    public IUIController UIHandler;

    public void SetUIHandler(UIController controller) => UIHandler = controller;
    public void CalculateMoves(int movesMultiplier )
    {
        moves = moves * movesMultiplier;
        UpdateText();
    }

    public void UpdateMoves(int value)
    {
        moves += value;
        if (moves <=0 )
        {
            moves = 0;
            UpdateText();
            print("Level Fail");
          UIHandler.LevelFail(.5f);
        }
        else
        {
            UpdateText();
        }
        
    }

    private void UpdateText()
    {
        movesText.SetText($"{moves}");
    }
    
}