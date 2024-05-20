
using Features;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;

public class UIController : MonoBehaviour,IUIController
{
   [SerializeField] [BoxGroup("Reference")]
   LevelComplete _levelComplete;

   public void LevelComplete()
   {
      _levelComplete.LevelWinUI(Configs.GameConfig.levelCompleteDelay);
   }

   public void LevelFail(float delay)
   {
      
   }
}
