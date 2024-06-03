using System;
using System.Collections;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

namespace Features.UI.Logics
{
    public class PanelBase:MonoBehaviour
    {
        [BoxGroup("Reference")][SerializeField] protected UnityEvent _onCompleteAction;
        public GameObject _overlay;
        [BoxGroup("Reference")] [SerializeField]
       protected GameObject _panel;

      public virtual void  Start()
        {
            
        }

        IEnumerator ShowObjectWithDelay(float delay)
        {
            yield return new WaitForSeconds(delay);
            _overlay.SetActive(true);
            _panel.SetActive(true);
        }

        public virtual void OpenPanel(float delay)
        {
           // _overlay.SetActive(true);
            _onCompleteAction?.Invoke();
            StartCoroutine(ShowObjectWithDelay(delay));
        }
         public virtual void OpenPanel(float delay,Reason reason)
        {
           // _overlay.SetActive(true);
            _onCompleteAction?.Invoke();
            StartCoroutine(ShowObjectWithDelay(delay));
        }
         
    }
}