using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.UI.Logics;
using Sablo.Core;
using UnityEngine;

public class LevelComplete : PanelBase
{
    [SerializeField] List<RectTransform> _stars;
    
    public override void OpenPanel(float delay)
    {
        base.OpenPanel(delay);
        SoundManager.Instance.LevelComplete(1);
        StartCoroutine(ShowStars(delay));
    }

    private IEnumerator ShowStars(float delay)
    {
        yield return new WaitForSeconds(delay+.2f);
        foreach (var star in _stars)
        {
            star.localScale =Configs.GameConfig.starStartScale;
            star.gameObject.SetActive(true);
            star.DOScale(1, .2f).SetEase(Ease.Linear);
            yield return new WaitForSeconds( Configs.GameConfig.starRevelDelay);
        }
    }
    
}