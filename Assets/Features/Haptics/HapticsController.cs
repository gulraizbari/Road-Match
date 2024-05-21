
using Features.Haptics.Interfaces;
using Lofelt.NiceVibrations;
using UnityEngine;

public class HapticsController : MonoBehaviour,IHapticController
{

    void Start()
    {
        HapticController.Init();
    }
    float Amplitude = 0.3f;
    float Duration = 0.02f;
    //Type = Light Impact

    //For collection/park/place etc
    float C_Amplitude = 0.5f;
    float C_Duration = 0.017f;
    //Type = Light Impact.

    private void TriggerHapticFeedback(float amplitude, float frequency, float duration)
    {
        HapticController.fallbackPreset = HapticPatterns.PresetType.HeavyImpact;
        HapticPatterns.PlayConstant(amplitude, frequency, duration);
    }

    
    public void PlayHaptic()
    {
        TriggerHapticFeedback(3f,1,Duration);
    }
}
