using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapticPlugin;

public class vibrationManager : MonoBehaviour
{
    public static vibrationManager instance;
    void Awake()
    {
        if(instance==null)
        {
            instance = this;
        }
    }


    public void OnImpactClick(int index)
    {
        TapticManager.Impact((ImpactFeedback)index);
        // Debug.LogFormat("impact {0}", index);
    }

    public void OnNotificationClick(int index)
    {
        TapticManager.Notification((NotificationFeedback)index);
    }


    public void vibration()
    {
#if UNITY_ANDROID
        Vibration.Vibrate((long)5f);
#else
        OnImpactClick(1);
#endif
    }



}//Class
