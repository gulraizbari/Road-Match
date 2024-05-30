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
    public string GateId;
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

    
      IEnumerator TutorialAction(float delay,float startDelay)
    {
        hand.gameObject.SetActive(false);
        if (id >= TutorialsData.Count)
        {
            yield break;
        }

        foreach (var VARIABLE in gridView.tilesGrid)
        {
            VARIABLE.TileTouch = false;
        }
        yield return new WaitForSeconds(startDelay);
        foreach (var tile in gridView.PathData)
        {
            tile.Value.istutorial = false;
            tile.Value.cantSelectPlayer = true;
            if (tile.Value.TileState != TileStates.Walkable  )
            {
              
                tile.Value.TileState = TileStates.NotBreakable;
                if (TutorialsData[id].currentTutorial == Tutorials.PlayerToGate)
                {
                    if (tile.Key== GateId)
                    {
                        tile.Value.TileState = TileStates.Gate;
                    }
                }
                
            }
            
            
            if (tile.Key==TutorialsData[id].touchableID)
            {
                tile.Value.istutorial = true;
                if (TutorialsData[id].currentTutorial == Tutorials.PlayerToTarget1 ||TutorialsData[id].currentTutorial == Tutorials.PlayerToGate )
                {
                    tile.Value.TileState = TileStates.Walkable;
                    tile.Value.TileTouch = true;
                    tile.Value.cantSelectPlayer = false;
                }
                else
                {
                    tile.Value.TileTouch = true;
                    tile.Value.TileState = TileStates.FlipAble;
                }
               
                RequiredTile = tile.Value;
            }
           
        }

        var desiredPos = mainCamera.WorldToScreenPoint(RequiredTile.transform.position);
        desiredPos.y -= 50;
        desiredPos.x += 50;
        hand.position = desiredPos;
        yield return new WaitForSeconds(delay);
        if (id >= TutorialsData.Count)
        {
            hand.gameObject.SetActive(false);
            yield break;
        }
        else
        {
            hand.gameObject.SetActive(true);
        }
    }

    public void NextTutorial()
    {
        if ( PlayerPrefs.GetInt("Tutorial")==0)
        {
            id++;
            if (id<TutorialsData.Count)
            {
                StartCoroutine(TutorialAction(TutorialsData[id].delay,TutorialsData[id].startDelay));    
            }
            else
            {
                PlayerPrefs.SetInt("Tutorial",1);
                hand.gameObject.SetActive(false);
            }
        }
        else
        {
            hand.gameObject.SetActive(false);
        }
       
        
    }
   

    public void PlayTutorial()
    {
        if (PlayerPrefs.GetInt("Tutorial") == 0)
        {
            StartCoroutine(TutorialAction(TutorialsData[id].delay,TutorialsData[id].startDelay)) ;
        }
        else
        {
            gameObject.SetActive(false);
        }
       
    }

    // Update is called once per frame

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
    public float delay;
    public float startDelay;
}
