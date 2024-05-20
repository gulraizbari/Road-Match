
using Features;
using Sirenix.OdinInspector;
using UnityEngine;

public class UIController : MonoBehaviour,IUIController
{
   [SerializeField] [BoxGroup("Reference")]
   LevelComplete _levelComplete;

   public void LevelComplete(float delay)
   {
      _levelComplete.LevelWinUI(delay);
   }

   public void LevelFail(float delay)
   {
      
   }
}
