
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Goal : MonoBehaviour
{
    [BoxGroup("PlayerGoal")][SerializeField] CollectableItems _goalType;
    [BoxGroup("PlayerGoal")][SerializeField] BoosterType _goalSubType;
    [BoxGroup("PlayerGoal")][SerializeField] TextMeshProUGUI _goalText;
    [BoxGroup("PlayerGoal")][SerializeField] GameObject _goalComplete;
    [BoxGroup("PlayerGoal")][SerializeField] Image _goalImage;
    public int target;
    public CollectableItems GoalType => _goalType;
    public BoosterType GoalSubType => _goalSubType;

    public void Init(GoalData data)
    {
        _goalImage.sprite = data.goalUI;
        _goalType = data.itemType;
        _goalSubType = data.itemSubType;
        gameObject.name = $"{_goalType}:{_goalSubType}";
        _goalText.SetText($"{target}");
    }
    public void UpdateText(int value,bool isTarget)
    {
        
        if (isTarget)
        {
            target += value;
           // _goalTargetText.SetText($"/{target}");
        }
        else
        {
            target -= value;
            if (target<=0)
            {
                target = 0;
               Invoke(nameof(Off),.15f);
            }
        }
        _goalText.SetText($"{target}");
       
    }

    private void Off()
    {
        _goalText.gameObject.SetActive(false);
        _goalComplete.SetActive(true);
    }
}
