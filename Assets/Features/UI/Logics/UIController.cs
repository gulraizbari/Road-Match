
using System;
using Features;
using Features.UI.Logics;
using Sablo.Core;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using Utilities;

public class UIController : MonoBehaviour
{
    [BoxGroup("Reference/Texts")] public MultiText _levelText;
    [BoxGroup("Reference/Texts")] public MultiText _movesText;
   
   [SerializeField] [BoxGroup("Reference")] LevelComplete _levelComplete;
   [SerializeField] [BoxGroup("Reference")] LevelFail     _levelFail;
   [SerializeField] [BoxGroup("Reference")] GameObject     _mainPanel;
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

   public void LevelComplete()
   {
      GameController.SetState(GameStates.Win);
      _mainPanel.SetActive(false);
      _levelComplete.OpenPanel(Configs.GameConfig.levelCompleteDelay);
   }

   public void LevelFail(float delay)
   {
      GameController.SetState(GameStates.Lose);
      _mainPanel.SetActive(false);
      _levelFail.OpenPanel(Configs.GameConfig.levelCompleteDelay);  
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

      return _text;
   }
}
