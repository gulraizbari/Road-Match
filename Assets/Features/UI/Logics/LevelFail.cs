using System.Collections.Generic;
using Helpers;
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
        [BoxGroup("Reference")][SerializeField] List<int> _movesReward;
        [BoxGroup("Reference")][SerializeField] MultiText _cashText;
        [BoxGroup("Reference")][SerializeField] TextMeshProUGUI _requiredText;
        [BoxGroup("Reference")][SerializeField] MultiText _movesText;
        [BoxGroup("Reference")][SerializeField] Money _requiredCash;

        int movesCounter;


        public override void Start()
        {
            base.Start();
            _playOnButton.onClick.AddListener(PlayOn);
        }

        public override void OpenPanel(float delay)
        {
            base.OpenPanel(delay);
            OnStart();
        }

        private void OnStart()
        {
            _requiredText.SetText(_requiredCash.ToInt().ToString());
            GameController.ShowCash(_cashText);
            _movesText.UpdateText($"+{_movesReward[movesCounter]}" );
            SoundManager.Instance.LevelFail(1);
            _playOnButton.interactable = GameController.GameCash.ToInt() >= _requiredCash.ToInt();
        }

        private void PlayOn()
        {
            if (GameController.GameCash.ToInt()>=_requiredCash.ToInt())
            {
                GameController.ShowCash(_cashText);
                UIController.instance.DetectMoney(_requiredCash);
                GiveMoves();
                _panel.SetActive(false);
                _overlay.SetActive(false);
                SoundManager.Instance.PlayClick(1);
                UIController.instance.ShowPanels();
            }
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
    }
}