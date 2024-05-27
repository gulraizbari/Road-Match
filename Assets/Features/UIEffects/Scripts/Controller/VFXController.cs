using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Features.UIEffects
{
    public class VFXController : MonoBehaviour
    {
        [SerializeField] private Image _overlay;
        [SerializeField] private Image _goalPrefab;

        private Sequence _popUpSequence1;
        private Sequence _popUpSequence2;
        public RectTransform GoalRect => _goalPrefab.GetComponent<RectTransform>();
        public void PopUpEffect(Sprite goalImage,Transform target,UnityEvent action)
        {
            _popUpSequence1?.Kill();
            _popUpSequence2?.Kill();

            _overlay.gameObject.SetActive(true);
            GoalRect.anchoredPosition=new Vector2(0,0);
            _goalPrefab.sprite = goalImage;
            _goalPrefab.SetNativeSize();
            _goalPrefab.transform.localScale =new Vector3(0,0,0);
            _goalPrefab.gameObject.SetActive(true);
            _popUpSequence1 = DOTween.Sequence();
            _popUpSequence1.Append(_overlay.DOFade(0.8f, 0.4f));
            _popUpSequence1.Append(_goalPrefab.transform.DOScale(1.2f, 0.4f).SetEase(Ease.OutBack));
            _popUpSequence1.Append(_goalPrefab.transform.DOScale(0.8f, 0.4f).SetEase(Ease.InBack));
            _popUpSequence1.OnComplete(() =>
            {
                _overlay.gameObject.SetActive(false);
                _popUpSequence2 = DOTween.Sequence();
                var targetPosition = target.position;
                _popUpSequence2.Append(_goalPrefab.transform.DOMove(targetPosition, 0.5f).SetEase(Ease.InOutSine));
                _popUpSequence2.Join(_goalPrefab.transform.DOScale(0.35f, 0.5f).SetEase(Ease.OutBack));
                _popUpSequence2.OnComplete(() =>
                {
                    _goalPrefab.gameObject.SetActive(false);
                    action?.Invoke();
                    
                });
                _popUpSequence2.Play();
            });

            _popUpSequence1.Play();
        }
      
    }
}
