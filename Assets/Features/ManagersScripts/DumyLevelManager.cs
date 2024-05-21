using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DumyLevelManager : MonoBehaviour
{
   public List<LevelData> levels;
   public Button nextButton;
   public Button resetButton;

   
   public LevelData GetCurrentLevel => levels[Level];

   void Start()
   {
      nextButton.onClick.AddListener((NextLevel));
      resetButton.onClick.AddListener((ResetLevel));
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
