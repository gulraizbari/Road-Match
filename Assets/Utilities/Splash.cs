using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Splash : MonoBehaviour
{
   public Image loadingFill;
   public float startDelay;
   public float updateDelay;
   public TextMeshProUGUI loadingText;

   void Start()
   {
      StartCoroutine(SplashScreen());
   }

   IEnumerator SplashScreen()
   {
      yield return new WaitForSeconds(startDelay);
      while (loadingFill.fillAmount!=1)
      {
         yield return new WaitForSeconds(updateDelay);
         loadingFill.fillAmount += .1f;
         var value = loadingFill.fillAmount * 100;
         var ValueToInt = (int)value;
         loadingText.SetText($"{ValueToInt}%");
         
      }
      gameObject.SetActive(false);
   }
}
