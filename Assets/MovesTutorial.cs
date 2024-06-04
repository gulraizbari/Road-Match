using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MovesTutorial : MonoBehaviour
{
    public GameObject moveTutorial;
   // public Image bgImage;

    public void ShowTutorial()
    {
        GameController.SetState(GameStates.Pause);
        Invoke(nameof(Show),.75f);
       
    }

    private void Show()
    {
       
        moveTutorial.SetActive(true);
    }

    public void Off()
    {
        GameController.SetState(GameStates.Play);
        moveTutorial.SetActive(false);
    }
}
