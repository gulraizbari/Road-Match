using System.Collections;
using System.Collections.Generic;
using Features.Haptics.Interfaces;
using TapticPlugin;
using UnityEngine;

public class HapticsController : MonoBehaviour,IHapticController
{
   
    
    
    public void PlayVibration(int value)
    {
       
#if UNITY_ANDROID
            Vibration.Vibrate((long) 5f);
#else
        TapticManager.Impact((ImpactFeedback)value);
#endif
        
    }

   

    private readonly WaitForSeconds _wait = new WaitForSeconds(0.05f);
    private IEnumerator PlayHaptic(int value)
    {
        TapticManager.Impact((ImpactFeedback) value);
        yield return _wait;
        TapticManager.Impact((ImpactFeedback) value);
        yield return _wait;
        TapticManager.Impact((ImpactFeedback) value);
        yield return _wait;
        TapticManager.Impact((ImpactFeedback) value);
        yield return _wait;
        TapticManager.Impact((ImpactFeedback) value);
        yield return _wait;
        TapticManager.Impact((ImpactFeedback) value);
    }

    public void PlayHaptic(ImpactFeedback feedback)
    {
        TapticManager.Impact(feedback);
    }
}
