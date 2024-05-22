using System.Collections;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

namespace Features.UI.Logics
{
    public class PanelBase:MonoBehaviour
    {
        [BoxGroup("Reference")][SerializeField] protected UnityEvent _onCompleteAction;

        [BoxGroup("Reference")] [SerializeField]
       protected GameObject _panel;

        IEnumerator ShowObjectWithDelay(float delay)
        {
            yield return new WaitForSeconds(delay);
            _panel.SetActive(true);
        }

        public virtual void OpenPanel(float delay)
        {
            _onCompleteAction?.Invoke();
            StartCoroutine(ShowObjectWithDelay(delay));
        }
    }
}