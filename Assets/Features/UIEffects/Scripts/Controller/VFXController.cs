using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Features.UIEffects
{
    public class VFXController : MonoBehaviour, IVFXController
    {
        [SerializeField] private Image _chest;
        [SerializeField] private Image _key;
        [SerializeField] private Image _overlay;

        private Sequence _popUpSequence;
        public void ChestPopUpEffect()
        {
            _popUpSequence?.Kill();
            _overlay.gameObject.SetActive(true);
            _chest.gameObject.SetActive(true);
            _chest.transform.localScale = Vector3.zero;
            _popUpSequence = DOTween.Sequence();
            _popUpSequence.Append(_overlay.DOFade(0.8f, 0.4f));
            _popUpSequence.Append(_chest.transform.DOScale(1.2f, 0.4f).SetEase(Ease.OutBack));
            _popUpSequence.Append(_chest.transform.DOScale(0.8f, 0.4f).SetEase(Ease.InBack));
            _popUpSequence.Join(_chest.transform.DOMoveY(Screen.height / 2 + 80, 0.5f).SetRelative().SetEase(Ease.OutBack));
            _popUpSequence.Join(_chest.transform.DOScale(0.05f, 0.4f).SetEase(Ease.OutBack));
            _popUpSequence.OnComplete(() => 
            {
                _chest.gameObject.SetActive(false);
                _overlay.gameObject.SetActive(false);
                _chest.transform.localScale = Vector3.zero;
            });
            _popUpSequence.Play();
        }

        public void KeyPopUpEffect()
        {
            _popUpSequence?.Kill();
            _overlay.gameObject.SetActive(true);
            _key.gameObject.SetActive(true);
            _key.transform.localScale = Vector3.zero;
            _popUpSequence = DOTween.Sequence();
            _popUpSequence.Append(_overlay.DOFade(0.8f, 0.4f)); 
            _popUpSequence.Append(_key.transform.DOScale(1.2f, 0.4f).SetEase(Ease.OutBack));
            _popUpSequence.Append(_key.transform.DOScale(0.8f, 0.4f).SetEase(Ease.InBack));
            _popUpSequence.Join(_key.transform.DOMoveY(Screen.height / 2 + 80, 0.5f).SetRelative().SetEase(Ease.OutBack));
            _popUpSequence.Join(_key.transform.DOScale(0.05f, 0.4f).SetEase(Ease.OutBack));
            _popUpSequence.OnComplete(() => 
            {
                _key.gameObject.SetActive(false);
                _overlay.gameObject.SetActive(false);
                _key.transform.localScale = Vector3.zero;
            });
            _popUpSequence.Play();
        }
        
    }
}
