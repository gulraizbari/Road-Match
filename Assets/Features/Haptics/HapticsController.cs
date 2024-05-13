using System;
using System.Collections;
using Features.Haptics.Interfaces;
using Lofelt.NiceVibrations;
using TapticPlugin;
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

    public void TriggerHapticFeedback(float amplitude, float frequency, float duration)
    {
        HapticController.fallbackPreset = HapticPatterns.PresetType.MediumImpact;
        HapticPatterns.PlayConstant(amplitude, frequency, duration);
    }

    
    public void PlayHaptic(ImpactFeedback feedback)
    {
        // TapticManager.Impact(feedback);
        TriggerHapticFeedback(.6f,1,Duration);
       
    }
}
