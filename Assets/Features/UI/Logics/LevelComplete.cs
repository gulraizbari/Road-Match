using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.UI.Logics;
using Helpers;
using Sablo.Core;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using Utilities;

public class LevelComplete : PanelBase
{
    [SerializeField] List<RectTransform> _stars;
    [SerializeField] [BoxGroup("Reference")] Money _cashToGive=new Money(20,MoneyPrefix.Empty);
    [SerializeField] [BoxGroup("Reference")] TextMeshProUGUI _cashToGiveText;
    public override void OpenPanel(float delay)
    {
        base.OpenPanel(delay);
        UpdateCash();
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
            SoundManager.Instance.Star(1);
            star.DOScale(1, .2f).SetEase(Ease.Linear);
            yield return new WaitForSeconds( Configs.GameConfig.starRevelDelay);
        }
    }

    [Button]
    private void UpdateCash()
    {
        GameController.TotalMoney += _cashToGive.ToInt();
        Money money = new Money(GameController.TotalMoney,MoneyPrefix.Empty);
        _cashToGiveText.SetText(money.ToString());

    }
    
}