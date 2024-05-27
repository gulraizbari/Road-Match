using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.CharacterMovement.Scripts
{
    public class PlayerBaseClass:MonoBehaviour
    {
        [SerializeField, ReadOnly] Tile _currentTile;
        [BoxGroup("Reference")] [SerializeField]
       protected GameObject _crown;
        [BoxGroup("Reference")] [SerializeField]
        protected PlayerAnimator _playerAnimator;
        protected IEnumerator currentCoroutine;
        public List<Tile> pathToMove;
        public Tile lastTile;
        public IGridView GridViewHandler;
        public Transform Child => _playerAnimator.transform;
        public Tile CurrentTile
        {
            get => _currentTile;
            set => _currentTile = value;
        }
        public PlayerGoals playerGoalHandler{get; set; }
        public IUIController UIController { get; protected set; }
        protected void ChestBoxCase(Collectable collectable)
        {
            if (playerGoalHandler.FetchCollectible(CollectableItems.Key)>0)
            {
                playerGoalHandler.AddOrUpdateCollectible(collectable.collectableType,collectable.typeOfBooster,1);
                collectable.isDone = true;
                collectable.gameObject.SetActive(false);
            }
            else
            {
                print("Key is Missing");
            }
        }

        protected void KeyCase(Collectable collectable)
        {
            playerGoalHandler.AddOrUpdateCollectible(collectable.collectableType,collectable.typeOfBooster,1);
            collectable.gameObject.SetActive(false);
            if (collectable.CollectibleID is null)
            {
                print("No Id");
                collectable.isDone = true;
                return;
            }
            else
            {
                var Tile = GridViewHandler.GetTile(collectable.ReverseString(collectable.CollectibleID));
                print(Tile.name);
                if (Tile!=null)
                {
                    GridViewHandler.ChangeTileMaterial(Tile);
                    collectable.CheckTileLink(Tile);
                    collectable.isDone = true;
                }
            }
           
        }
        protected void JumpEffect(Vector3 position)
        {
            var configs = Configs.GameConfig;
            _playerAnimator.JumpAnimation();
            position.y = 1f;
            LookAt(position);
            transform.DOJump(position, configs.JumpHeight, 1, configs.JumpDuration).SetEase(Ease.Linear).OnComplete((() =>
            {
                _crown.SetActive(true);
                transform.DORotate(configs.playerRotationOnJumpComplete, configs.playerRotationOnJumpCompleteDuration).SetEase(Ease.Linear).OnComplete(() =>
                {
                    _playerAnimator.WinAnimation();
                });
                UIController.LevelComplete();
            }));
        }
        protected void LookAt(Vector3 target)
        {
            var lookPos = target - Child.position;
            var lookRot = Quaternion.LookRotation(lookPos, Vector3.up);
            var eulerY = lookRot.eulerAngles.y;
            var rotation = Quaternion.Euler(0, eulerY, 0);
            Child.rotation = rotation;
        }
    }
}