
using System.Collections.Generic;
using UnityEngine;

public class PlayerGoalView : MonoBehaviour
{
   [SerializeField] List<Goal> playerGoalsUI;

   public void UpdateGoal(CollectableItems type,int value,bool isTarget)
   {
      var findItem = playerGoalsUI.Find(goal => goal.GoalType == type);
      if (findItem!=null)
      {
         findItem.gameObject.SetActive(true);
         findItem.UpdateText(value,isTarget);
      }
   }
}
