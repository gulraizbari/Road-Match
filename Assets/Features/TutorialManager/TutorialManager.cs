using System;
using System.Collections;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using UnityEngine;
using UnityEngine.Rendering;

public class TutorialManager : MonoBehaviour
{
    public List<Tutorial> TutorialsData;
    public int id;
    public GridView gridView;
    public RectTransform hand;
    public Camera mainCamera;
    public Tile RequiredTile;
    public static event Action _tutorialAction;

    void OnEnable()
    {
        _tutorialAction += NextTutorial;
    }

    void OnDisable()
    {
        _tutorialAction -= NextTutorial;
    }

    public  void TutorialAction()
    {
        if (id >= TutorialsData.Count)
        {
            hand.gameObject.SetActive(false);
            return;
        }
       
        foreach (var tile in gridView.PathData)
        {
            tile.Value.istutorial = false;
            tile.Value.ignore = true;
            if (tile.Value.TileState != TileStates.Walkable  )
            {
                tile.Value.TileState = TileStates.NotBreakable;
            }
            
            
            if (tile.Key==TutorialsData[id].touchableID)
            {
                tile.Value.istutorial = true;
                if (TutorialsData[id].currentTutorial == Tutorials.PlayerToTarget1)
                {
                    tile.Value.TileState = TileStates.Walkable;
                    tile.Value.ignore = false;
                }
                else
                {
                    tile.Value.TileState = TileStates.FlipAble;
                }
               
                RequiredTile = tile.Value;
            }
           
        }

        var desiredPos = mainCamera.WorldToScreenPoint(RequiredTile.transform.position);
        desiredPos.y -= 50;
        desiredPos.x += 50;
        hand.position = desiredPos;
    }

    public void NextTutorial()
    {
        if (PlayerPrefs.GetInt("Lvl")>0)return;
        id++;
        TutorialAction();
    }
    IEnumerator Start()
    {

        yield return new WaitForSeconds(2);
        if (PlayerPrefs.GetInt("Lvl")>0)yield break;
        TutorialAction();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

  public  static void OnTutorialAction()
    {
        _tutorialAction?.Invoke();
    }
}

[Serializable]
public class Tutorial
{
    public Tutorials currentTutorial;
    public string touchableID;
}
