using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DumyLevelManager : MonoBehaviour
{
   public List<LevelData> levels;
   public Button nextButton;
   public Button dumynextButton;
   public Button resetButton;
   public Button reloadButton;
   public bool isTesting;
   public int testingLvlNumber;
   
   public LevelData GetCurrentLevel
   {
      get
      {
         LevelData data;
         if (isTesting)
         {
            data = levels[testingLvlNumber];
         }
         else
         {
            data = levels[Level];
         }

         return data;
      }
   }

   void Start()
   {
      nextButton.onClick.AddListener((NextLevel));
      dumynextButton.onClick.AddListener((NextLevel));
      resetButton.onClick.AddListener((ResetLevel));
      reloadButton.onClick.AddListener((ResetLevel));
      
   }

   public void NextLevel()
   {
      Level++;
      if (Level >= levels.Count)
      {
         Level = 0;
      }

      SceneManager.LoadScene(0);
   }

   public void ResetLevel()
   {
      SceneManager.LoadScene(0);
   }

   public int Level { get=>PlayerPrefs.GetInt("Lvl"); set=>PlayerPrefs.SetInt("Lvl",value); }

}
