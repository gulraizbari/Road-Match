
using Features;
using Features.UI.Logics;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;

public class UIController : MonoBehaviour,IUIController
{
   [SerializeField] [BoxGroup("Reference")] LevelComplete _levelComplete;
   [SerializeField] [BoxGroup("Reference")] LevelFail     _levelFail;

   public void LevelComplete()
   {
      GameController.SetState(GameStates.Win);
      _levelComplete.OpenPanel(Configs.GameConfig.levelCompleteDelay);
   }

   public void LevelFail(float delay)
   {
      GameController.SetState(GameStates.Lose);
      _levelFail.OpenPanel(Configs.GameConfig.levelCompleteDelay);  
   }
}
