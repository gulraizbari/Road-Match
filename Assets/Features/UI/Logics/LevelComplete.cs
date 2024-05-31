using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.UI.Logics;
using Helpers;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

public class LevelComplete : PanelBase
{
    [SerializeField] List<RectTransform> _stars;
    [SerializeField] [BoxGroup("Reference")] Money _cashToGive=new Money(20);
    [SerializeField] [BoxGroup("Reference")] MultiText _cashToGiveText;
    [SerializeField] [BoxGroup("Reference")] MultiText _winCashText;
    [SerializeField] [BoxGroup("Reference")] Button _nextButton;


    public override void Start()
    {
        base.Start();
        _nextButton.onClick.AddListener(UpdateCash);
    }

    public override void OpenPanel(float delay)
    {
        base.OpenPanel(delay);
        OnStart();
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

    private void OnStart()
    {
        _cashToGiveText.UpdateText(_cashToGive.ToInt().ToString());
        _winCashText.UpdateText(GameController.GameCash.ToString());
    }
    [Button]
    private void UpdateCash()
    {
        UIController.instance.AddCash(_cashToGive);
    }

    private void GetX2Reward()
    {
        var value = _cashToGive.ToInt() * 2;
        _cashToGiveText.UpdateText(value.ToString());
        
    }
    
}