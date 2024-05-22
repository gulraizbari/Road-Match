
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;

public class Goal : MonoBehaviour
{
    [BoxGroup("PlayerGoal")][SerializeField] CollectableItems _goalType;
    [BoxGroup("PlayerGoal")][SerializeField] TextMeshProUGUI _goalText;
    [BoxGroup("PlayerGoal")][SerializeField] TextMeshProUGUI _goalTargetText;
    public int target;
    public int current;
    public CollectableItems GoalType => _goalType;
    public void UpdateText(int value,bool isTarget)
    {
        if (isTarget)
        {
            target += value;
            _goalTargetText.SetText($"/{target}");
        }
        else
        {
            current += value;
            _goalText.SetText($"{current}");
        }
       
    }
}
