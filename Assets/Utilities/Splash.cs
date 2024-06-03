using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Splash : MonoBehaviour
{
   public Image loadingFill;
   public float startDelay;
   public float updateDelay;
   public float delay;
   public TextMeshProUGUI loadingText;

   void Start()
   {
      StartCoroutine(SplashScreen());
   }

   IEnumerator SplashScreen()
   {
      
      yield return new WaitForSeconds(startDelay);

      float elapsedTime = 0f;

      while (elapsedTime < updateDelay)
      {
         elapsedTime += Time.deltaTime;
         float fillAmount = Mathf.Clamp01(elapsedTime / updateDelay); // Normalized value from 0 to 1
         loadingFill.fillAmount = fillAmount;
         int valueToInt = Mathf.RoundToInt(fillAmount * 100); // Convert to integer percentage
         loadingText.text = $"{valueToInt}%";
         yield return null; // Wait for the next frame
      }

      // Ensure the fill amount and text are set to 100% at the end
      loadingFill.fillAmount = 1f;
      loadingText.text = "100%";

      yield return new WaitForSeconds(.5f);
      SceneManager.LoadScene(1);
   }

   private void Loading()
   {
      DOTween.To(x => loadingFill.fillAmount = x , loadingFill.fillAmount, 1, delay).SetEase(Ease.InQuint).OnComplete((
         () =>
         { 
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
         }));
      
   }
}
