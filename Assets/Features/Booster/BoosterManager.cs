
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BoosterManager : MonoBehaviour
{
    [SerializeField]Booster _hintBooster;
    [SerializeField]Booster _booster2;
    [SerializeField]Booster _booster3;
    [SerializeField] LevelManager _LevelManager;

    void Start()
    {
        _hintBooster.OnStart(_LevelManager.Level);
        _booster2.OnStart(_LevelManager.Level);
        _booster3.OnStart(_LevelManager.Level);
    }

   
}

