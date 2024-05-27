
using System;
using System.Collections.Generic;
using Features.UIEffects;
using UnityEngine;
using UnityEngine.Events;

public class PlayerGoalView : MonoBehaviour
{
   [SerializeField] List<GoalData> playerGoalsUI;
   [SerializeField] List<Goal> playerGoals;
   [SerializeField] Goal playerGoalPrefab;
   [SerializeField] VFXController _vfxController;
   public Transform parent;
   public void UpdateGoal(CollectableItems type,BoosterType goalSubType,int value,bool isTarget)
   {
      var goalFind = playerGoals.Find(_goal => _goal.GoalType == type &&
                                               _goal.GoalSubType==goalSubType);
     
      if (goalFind!=null)
      {
         if (isTarget)
         {
            goalFind.UpdateText(value,isTarget);
         }
         else
         {
            UnityEvent action = new UnityEvent();
            action.AddListener((() =>
            {
               goalFind.UpdateText(value,false);
            }));
            var goalItem = playerGoalsUI.Find(_goal => _goal.itemType == type && _goal.itemSubType==goalSubType);

            _vfxController.PopUpEffect( goalItem.goalUI,goalFind.transform,action);
         }
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
