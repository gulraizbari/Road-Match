using System;
using System.Collections;
using System.Collections.Generic;
using Helpers;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Utilities;

public class Booster : MonoBehaviour
{
    [BoxGroup("Booster")][SerializeField] Button button;
    [BoxGroup("Booster")][SerializeField] GameObject IconLock;
    [BoxGroup("Booster")][SerializeField] GameObject Iconbooster;
    [BoxGroup("Booster")][SerializeField] MultiText availableAfterText;
    [BoxGroup("Booster")][SerializeField] Money price;
    [BoxGroup("Booster")][SerializeField] int availableAfter;
    public UnityAction Action;


    void OnEnable()=>EventManager._onMoneyUpdate += OnMoneyUpdate;
    void OnDisable()=>EventManager._onMoneyUpdate -= OnMoneyUpdate;

    
    private void OnMoneyUpdate()
    {
        button.interactable = GameController.GameCash>=price;
    }

    public void OnStart(int currentLevel)
    {
        if (currentLevel>=availableAfter)
        {
           Iconbooster.SetActive(true); 
           IconLock.SetActive(false);
           OnMoneyUpdate();
           availableAfterText.UpdateText(price.ToInt().ToString());
           button.onClick.AddListener((BoosterAction));
        }
        else
        {
            button.interactable = false;
            availableAfterText.UpdateText($"Level{availableAfter}");
        }
    }

    public void BoosterAction()
    {
        if (GameController.GameCash >= price)
        {
            UIController.instance.DetectMoney(price);
            Action?.Invoke();
        }
        
    }
}
