
using System;
using DG.Tweening;
using Features;
using Features.UI.Logics;
using Helpers;
using Sablo.Core;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using Utilities;

public class UIController : MonoBehaviour
{
    [BoxGroup("Reference/Texts")] public MultiText _levelText;
    [BoxGroup("Reference/Texts")] public MultiText _movesText;
    [BoxGroup("Reference/Texts")] public MultiText _mainCashText;
  
   
   [SerializeField] [BoxGroup("Reference")] LevelComplete _levelComplete;
   [SerializeField] [BoxGroup("Reference")] LevelFail     _levelFail;
   [SerializeField] [BoxGroup("Reference")] RectTransform     _mainPanel;
   [SerializeField] [BoxGroup("Reference")] RectTransform     _bottomPanel;
   MultiText _text;

   public static UIController instance;

   void Awake()
   {
      if (!instance)
      {
         instance = this;
      }
      else
      {
         Destroy(gameObject);
      }
   }

   void Start()
   {
      ShowPanels();
      GameController.ShowCash(_mainCashText);
   }

   public void LevelComplete()
   {
      GameController.SetState(GameStates.Win);
     MainPanelMove(false);
     BottomPanelMove(true);
      _levelComplete.OpenPanel(Configs.GameConfig.levelCompleteDelay);
   }

   private void MainPanelMove(bool isDown)
   {
      if (isDown)
      {
         _mainPanel.DOAnchorPosY(-202, .5f).SetEase(Ease.Linear);
      }
      else
      {
         _mainPanel.DOAnchorPosY(200, .5f).SetEase(Ease.Linear);
      }
   } 
   private void BottomPanelMove(bool isDown)
   {
      if (isDown)
      {
         _bottomPanel.DOAnchorPosY(-180, .5f).SetEase(Ease.Linear);
      }
      else
      {
         _bottomPanel.DOAnchorPosY(130, .5f).SetEase(Ease.Linear);
      }
   }

   public void ShowPanels()
   {
      MainPanelMove(true);
      BottomPanelMove(false);
   }

   public void LevelFail(float delay)
   {
      GameController.SetState(GameStates.Lose);
     MainPanelMove(false);
     BottomPanelMove(true);
      _levelFail.OpenPanel(Configs.GameConfig.levelCompleteDelay);  
   }

   public void AddCash(Money moneyToadd)
   {
    GameController.AddCash(moneyToadd.ToInt(),GameController.GameCash.ToInt(),_mainCashText);
   }
   public void DetectMoney(Money money)
   {
      GameController.GameCash -= money;
       
      if (GameController.GameCash.ToInt()<=0)
      {
        GameController.GameCash = new Money(0);
        GameController.ShowCash(_mainCashText);
      }
      else
      {
         GameController.ShowCash(_mainCashText);
      }
    
   }  
   public MultiText Text(TextType type)
   {
      
      if (type == TextType.Level)
      {
         _text = _levelText;
      } 
      else if (type == TextType.Moves)
      {
         _text = _movesText;
      }
      else if (type == TextType.MainCash)
      {
         _text = _mainCashText;
      }
      
      return _text;
   }

   [Button]
   public void GiveCash(int amount)
   {
      GameController.AddCash(amount,GameController.GameCash.ToInt(),_mainCashText);
   }
 
}
