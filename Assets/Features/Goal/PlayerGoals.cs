
using System;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

public class PlayerGoals : MonoBehaviour,IPlayerCollectible
{
    [BoxGroup("Reference"), ReadOnly, ShowInInspector] Dictionary<CollectableItems, int> collectiblesOfPlayer=new();
    [BoxGroup("Reference"), ReadOnly, ShowInInspector] Dictionary<CollectableItems, PlayerTask > tasksOfPlayer=new();
    [BoxGroup("Reference"), ReadOnly, ShowInInspector]
    [SerializeField] Tile _gate;

    [BoxGroup("Reference"),  SerializeField]
    List<string> _slogans;

    [BoxGroup("Reference"), SerializeField]
    Color qouateColor;
    [BoxGroup("Reference"), SerializeField]
    TextMeshProUGUI _sloganText;
    [BoxGroup("Reference"), SerializeField,]
    PlayerGoalView _goalView;
    public IGridView gridView;


  

    public void AddOrUpdateCollectible(CollectableItems item,BoosterType itemSubType, int count)
    {
        if (collectiblesOfPlayer.ContainsKey(item ))
        {
            collectiblesOfPlayer[item] += count;
            _goalView.UpdateGoal(item,itemSubType,count,false);
        }
        else
        {
            collectiblesOfPlayer.TryAdd(item, 1);
            _goalView.UpdateGoal(item,itemSubType,count,false);
        }
        CheckTasks(item);
    }

    public void AddOrUpdateGoals(CollectableItems item,BoosterType itemSubType, int count)
    {
        if (tasksOfPlayer.TryGetValue(item, out var existingTask))
        {
            existingTask.target += count;
            _goalView.UpdateGoal(item,itemSubType,count,true);
        }
        else
        {
            var newTask = new PlayerTask
            {
                target = count,
                State = false 
            };
            tasksOfPlayer.Add(item, newTask);
            _goalView.UpdateGoal(item,itemSubType,count,true);
        }
    }


    public int FetchCollectible(CollectableItems item)
    {
        int value = 0;
        if (collectiblesOfPlayer.TryGetValue(item, value: out var value1))
        {
          value= value1 ;
        }

        return value;
    }

    public int FetchGoals()=>tasksOfPlayer.Count;
    

    public void DeleteCollectible(CollectableItems item,int count)
    {
        if (collectiblesOfPlayer.ContainsKey(item))
        {
            collectiblesOfPlayer[item] -= count;
            if (collectiblesOfPlayer[item] <= 0)
            {
                collectiblesOfPlayer.Remove(item);
            }
        }
    }

    public void SetGate(Tile tile)
    {
        _gate = tile;
    }

    public bool TaskComplete { get; set; }

    private void CheckTasks(CollectableItems collectableItems)
    {
        if (collectiblesOfPlayer.TryGetValue(collectableItems,out  int value))
        {
            if (tasksOfPlayer.TryGetValue(collectableItems,out PlayerTask task))
            {
                if (value==task.target)
                {
                    task.State = true;
                }
            }
        }

        TaskComplete = false;
        foreach (var task in tasksOfPlayer)
        {
            if (task.Value.State)
            {
                TaskComplete = true;
            }
            else
            {
                TaskComplete = false;
            }
        }

        if (TaskComplete)
        {
            _gate.isGate = true;
            _gate.TileState = TileStates.Walkable;
            gridView.ChangeTileMaterial(_gate);
        }
     //SetSlogan();   
    }

    public void SetSlogan()
    {
        if (tasksOfPlayer.Count is 0)
        {
            _sloganText.gameObject.SetActive(true);
            var slogan = _slogans[Random.Range(0, _slogans.Count)];
            _sloganText.SetText(ColorizeString(slogan));
        }
        else
        {
            _sloganText.gameObject.SetActive(false);
        }
        
    }
    string ColorizeString(string text)
    {
        // Convert the color to a hex string
        string hexColor = ColorUtility.ToHtmlStringRGBA(qouateColor);
        // Return the string wrapped with color tags
        return $"<color=#{hexColor}>{text}</color>";
    }
}

[Serializable]
public class PlayerTask
{
    public int target;
    public bool State;
}