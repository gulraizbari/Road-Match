using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class LevelManager : MonoBehaviour
{
   public List<LevelData> levels;
  
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

   
   public void NextLevel()
   {
      Level++;
      LevelCounter ++;
      if (Level >= levels.Count)
      {
         Level = Random.Range(20,levels.Count);
      }      
   } 

   public void NextScene()
   {
      SceneManager.LoadScene(currentScene);
   }
   public void Next()
   {
      NextLevel();
      SceneManager.LoadScene(currentScene);
   }

   public void ResetLevel()
   {
      SceneManager.LoadScene(currentScene);
   }

   public  int Level { get=>PlayerPrefs.GetInt("Lvl"); set=>PlayerPrefs.SetInt("Lvl",value); }
   public  int LevelCounter { get=>PlayerPrefs.GetInt("LvlCounter"); set=>PlayerPrefs.SetInt("LvlCounter",value); }

}
