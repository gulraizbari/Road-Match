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
    [BoxGroup("Booster")][SerializeField]  Button button;
    [BoxGroup("Booster")][SerializeField] Sprite IconLock;
    [BoxGroup("Booster")][SerializeField] Sprite IconUnlock;
    [BoxGroup("Booster")][SerializeField] Sprite bgUnlock;
    [BoxGroup("Booster")][SerializeField] Sprite bgLock;
    [BoxGroup("Booster")][SerializeField] Image IconBooster;
    [BoxGroup("Booster")][SerializeField] Image bgBooster;
    [BoxGroup("Booster")][SerializeField] MultiText availableAfterText;
    [BoxGroup("Booster")][SerializeField] MultiText unLockText;
    [BoxGroup("Booster")][SerializeField] Money price;
    [BoxGroup("Booster")] [SerializeField] GameObject unlockPlacement;
    [BoxGroup("Booster")][SerializeField] int availableAfter;
    public UnityEvent Action;


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
            unlockPlacement.SetActive(true);
            bgBooster.sprite = bgUnlock;
            IconBooster.sprite = IconUnlock;
           bgBooster.SetNativeSize();
           IconBooster.SetNativeSize();
           OnMoneyUpdate();
           availableAfterText.gameObject.SetActive(false);
           unLockText.gameObject.SetActive(true);
           unLockText.UpdateText(price.ToInt().ToString());
           button.onClick.AddListener((BoosterAction));
        }
        else
        {
            unlockPlacement.SetActive(false);
            bgBooster.sprite = bgLock;
            IconBooster.sprite = IconLock;
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

    public void EnableBoosterButton(bool enable)
    {
        if (GameController.GameCash >= price)
        {
            button.interactable = enable;
        }
        else
        {
            button.interactable = false;
        }
    }
}
