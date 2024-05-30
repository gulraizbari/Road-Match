
using Features;
using Features.UI.Logics;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;

public class UIController : MonoBehaviour,IUIController
{
   [SerializeField] [BoxGroup("Reference")] LevelComplete _levelComplete;
   [SerializeField] [BoxGroup("Reference")] LevelFail     _levelFail;
   [SerializeField] [BoxGroup("Reference")] GameObject     _mainPanel;

   public void LevelComplete()
   {
      GameController.SetState(GameStates.Win);
      _mainPanel.SetActive(false);
      _levelComplete.OpenPanel(Configs.GameConfig.levelCompleteDelay);
   }

   public void LevelFail(float delay)
   {
      GameController.SetState(GameStates.Lose);
      _mainPanel.SetActive(false);
      _levelFail.OpenPanel(Configs.GameConfig.levelCompleteDelay);  
   }
}
