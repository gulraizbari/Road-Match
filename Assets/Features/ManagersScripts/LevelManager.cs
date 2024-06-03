using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class LevelManager : MonoBehaviour
{
   public List<LevelData> levels;
   public Button nextButton;
   public bool isTesting;
   public int currentScene;
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
   }
   [Button]
   public void NextLevel()
   {
      Level++;
      if (Level >= levels.Count)
      {
         Level = Random.Range(1,levels.Count);
      }

      SceneManager.LoadScene(currentScene);
   }

   public void ResetLevel()
   {
      SceneManager.LoadScene(currentScene);
   }

   public  int Level { get=>PlayerPrefs.GetInt("Lvl"); set=>PlayerPrefs.SetInt("Lvl",value); }

}
