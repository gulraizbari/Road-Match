using System.Collections.Generic;
using Helpers;
using Sablo.Analytics;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;

using UnityEngine.UI;
using Utilities;

namespace Features.UI.Logics
{
    public class LevelFail:PanelBase
    {
        
        [BoxGroup("Reference")][SerializeField] Button _playOnButton;
        [BoxGroup("Reference")][SerializeField] Button _resumeButton;
        [BoxGroup("Reference")][SerializeField] Button _retryButton;
        [BoxGroup("Reference")][SerializeField] List<int> _movesReward;
        [BoxGroup("Reference")][SerializeField] MultiText _cashText;
        [BoxGroup("Reference")][SerializeField] TextMeshProUGUI _requiredText;
        [BoxGroup("Reference")][SerializeField] MultiText _movesText;
        [BoxGroup("Reference")][SerializeField] Money _requiredCash;
        [BoxGroup("Reference")][SerializeField] Sprite _grayButton;
         [BoxGroup("Reference")][SerializeField] Sprite _greenButton;
          [BoxGroup("Reference")][SerializeField] Sprite _purpleButton;
          [BoxGroup("Reference")]public Reason reasonOfFail;
          [BoxGroup("Reference")] [SerializeField]GameObject _movesPart;
          [BoxGroup("Reference")] [SerializeField]GameObject _DeathPart;
        int movesCounter;


        public override void Start()
        {
            base.Start();
            _playOnButton.onClick.AddListener(PlayOn);
            _resumeButton.onClick.AddListener(RevivePlayer);
            _retryButton.onClick.AddListener(TryAgain);
        }

        public override void OpenPanel(float delay,Reason reason)
        {
            base.OpenPanel(delay);
            reasonOfFail = reason;
            OnStart(reason);
        }

        private void OnStart(Reason reason)
        {
            _requiredText.SetText(_requiredCash.ToInt().ToString());
            GameController.ShowCash(_cashText);
            _movesText.UpdateText($"+{_movesReward[movesCounter]}" );
            SoundManager.Instance.LevelFail(1);
            if(reason == Reason.OutOfMoves)
            {
                _playOnButton.gameObject.SetActive(true);
                _resumeButton.gameObject.SetActive(false);
                _playOnButton.interactable = GameController.GameCash.ToInt() >= _requiredCash.ToInt();
                _playOnButton.image.sprite = GameController.GameCash.ToInt() <=0? _grayButton:_greenButton ;
                _movesPart.SetActive(true);
                _DeathPart.SetActive(false);
            }
            else
            {
                 _playOnButton.gameObject.SetActive(false);
                 _resumeButton.gameObject.SetActive(true);
                 _resumeButton.interactable = GameController.GameCash.ToInt() >= _requiredCash.ToInt();
                 _resumeButton.image.sprite = GameController.GameCash.ToInt() <=0? _grayButton:_purpleButton ;
                 _movesPart.SetActive(false);
                 _DeathPart.SetActive(true);
              }
            
           
        }

        private void PlayOn()
        {
            if (GameController.GameCash.ToInt()>=_requiredCash.ToInt())
            {
                GameController.ShowCash(_cashText);
                UIController.instance.DetectMoney(_requiredCash);
                GiveMoves();
                OffPanel();
               
               
            }
        }

        private void RevivePlayer()
        {
            if (GameController.GameCash.ToInt()>=_requiredCash.ToInt())
            {
                GameController.ShowCash(_cashText);
                UIController.instance.DetectMoney(_requiredCash);
                GiveMoves();
                OffPanel();
                UIController.instance.gridView.RevivePlayer();
            }
        }

        private void OffPanel()
        {
            SoundManager.Instance.PlayClick(1);
            UIController.instance.ShowPanels();
            _panel.SetActive(false);
            _overlay.SetActive(false);
        }
        private void GiveMoves()
        {
            EventManager.UpdateMoves(_movesReward[movesCounter]);
            movesCounter++;
            if (movesCounter>=_movesReward.Count)
            {
                movesCounter = _movesReward.Count - 1;
            }
        }

        public  void TryAgain()
        {
            LionAnalyticEvents.OnLevelFail(UIController.instance.levelManager.LevelCounter+1,reasonOfFail.ToString());
            UIController.instance.levelManager.ResetLevel();
        }
    }
}