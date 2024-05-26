
using System;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGoalView : MonoBehaviour
{
   [SerializeField] List<GoalData> playerGoalsUI;
   [SerializeField] List<Goal> playerGoals;
   [SerializeField] Goal playerGoalPrefab;
   public Transform parent;
   public void UpdateGoal(CollectableItems type,BoosterType goalSubType,int value,bool isTarget)
   {
      var goalFind = playerGoals.Find(_goal => _goal.GoalType == type &&
                                               _goal.GoalSubType==goalSubType);
     
      if (goalFind!=null)
      {
         goalFind.UpdateText(value,isTarget);
      }
      else
      {
         var goal = Instantiate(playerGoalPrefab, parent);
         var goalItem = playerGoalsUI.Find(_goal => _goal.itemType == type && _goal.itemSubType==goalSubType);
         playerGoals.Add(goal);
         goal.Init(goalItem);
         goal.UpdateText(value,isTarget);
      }
   }
}

[Serializable]
public class GoalData
{
   public Sprite goalUI;
   public CollectableItems itemType;
   public BoosterType itemSubType;
}
