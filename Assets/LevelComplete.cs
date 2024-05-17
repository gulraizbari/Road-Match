
using System.Collections;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

public class LevelComplete : MonoBehaviour
{
 [BoxGroup("Reference")][SerializeField] UnityEvent _onCompleteAction;

 [BoxGroup("Reference")] [SerializeField]
 GameObject _panel;
 public void LevelWinUI(float delay)
 {
  _onCompleteAction?.Invoke();
  StartCoroutine(ShowObjectWithDelay(delay));
 }

 IEnumerator ShowObjectWithDelay(float delay)
 {
  yield return new WaitForSeconds(delay);
  _panel.SetActive(true);
 }
}
