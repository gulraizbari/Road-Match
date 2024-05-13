using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class My_Vibration {
    public static void VibrateIt()
    {
#if UNITY_ANDROID
        Vibration.Vibrate((long)7.5f);
#endif
#if UNITY_IPHONE

            //    IOSNative.LightHapticFeedback();
          //  TapticPlugin.TapticManager.Impact(TapticPlugin.ImpactFeedback.Light);                   

#endif
    }


}
