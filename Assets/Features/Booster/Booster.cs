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
    [BoxGroup("Booster")][SerializeField] Sprite _hintDisable;
    [BoxGroup("Booster")][SerializeField] Sprite _hindEnable;
    [BoxGroup("Booster")][SerializeField] Sprite IconLock;
    [BoxGroup("Booster")][SerializeField] Sprite IconUnlock;
    [BoxGroup("Booster")][SerializeField] Sprite bgLock;
    [BoxGroup("Booster")][SerializeField] Image IconBooster;
    [BoxGroup("Booster")][SerializeField] Image bgBooster;
    [BoxGroup("Booster")][SerializeField] MultiText availableAfterText;
    [BoxGroup("Booster")][SerializeField] MultiText unLockText;
    [BoxGroup("Booster")][SerializeField] Money price;
    [BoxGroup("Booster")][SerializeField] int availableAfter;
    public UnityEvent Action;
    public bool stop;
    public bool available;
    void OnEnable()=>EventManager._onMoneyUpdate += OnMoneyUpdate;
    void OnDisable()=>EventManager._onMoneyUpdate -= OnMoneyUpdate;

   public int lvl;
    private void OnMoneyUpdate()
    {
        button.interactable = GameController.GameCash>=price;
    }

    public void OnStart(int currentLevel)
    {
        lvl = currentLevel+1;
        if (lvl>=availableAfter)
        {
            available = true;
            bgBooster.sprite = _hindEnable;
            IconBooster.sprite = IconUnlock;
           bgBooster.SetNativeSize();
           IconBooster.SetNativeSize();
           OnMoneyUpdate();
           availableAfterText.gameObject.SetActive(false);
           unLockText.gameObject.SetActive(true);
           unLockText.UpdateText(price.ToInt().ToString());
           button.onClick.AddListener((BoosterAction));
           EnableBoosterButton(true);
        }
        else
        {
            
            bgBooster.sprite = bgLock;
            IconBooster.sprite = IconLock;
            button.interactable = false;
            availableAfterText.UpdateText($"Level {availableAfter}");
           
        }
    }

    public void BoosterAction()
    {
        if (!stop)
        {
            if (GameController.GameCash >= price)
            {
                UIController.instance.DetectMoney(price);
                Action?.Invoke();
            }
            else
            {
                
            }
        }
        else
        {
            EnableBoosterButton(false);
        }
    }
  
    public void EnableBoosterButton(bool enable)
    {
        if (!available)return;
        if (GameController.GameCash >= price)
        {
            button.interactable = enable;
            bgBooster.sprite = enable ?  _hindEnable:_hintDisable;
        }
        else
        {
           
            // if (lvl >= availableAfter)
            // {
            //     button.interactable = true;
            //     IconBooster.sprite = IconLock;
            //     bgBooster.sprite = _hintDisable;
            //     availableAfterText.gameObject.SetActive(false);
            //     unLockText.gameObject.SetActive(true);
            // }
            // else
            {
                button.interactable = false;
               // availableAfterText.gameObject.SetActive(true);
                //unLockText.gameObject.SetActive(false);
                bgBooster.sprite = _hintDisable;
                IconBooster.sprite = IconUnlock;
            }
        }
    }
}
