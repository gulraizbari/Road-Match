using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using Unity.Mathematics;
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
        public Transform goldenKey;
        public GameObject goldenParticle;
        public Transform Child => _playerAnimator.transform;
        public Tile CurrentTile
        {
            get => _currentTile;
            set => _currentTile = value;
        }
        public PlayerGoals playerGoalHandler{get; set; }
      
        protected void ChestBoxCase(Collectable collectable,ITile tile)
        {
            if (playerGoalHandler.FetchCollectible(CollectableItems.Key)>0)
            {
                playerGoalHandler.AddOrUpdateCollectible(collectable.collectableType,collectable.typeOfBooster,1);
                collectable.isDone = true;
                tile.TileTouch = true;
                Destroy(collectable);
                collectable.gameObject.SetActive(false);
            }
            else
            {
                print("Key is Missing");
            }
        }

        protected void KeyCase(Collectable collectable, ITile tile)
        {
            playerGoalHandler.AddOrUpdateCollectible(collectable.collectableType,collectable.typeOfBooster,1);
            collectable.transform.SetParent(null);
           // collectable.gameObject.SetActive(false);
          
           
            if (collectable.Unlink )
            {
                print(collectable.Unlink+ "pc");
                print("No Id");
                collectable.isDone = true;
                Destroy( collectable.gameObject);
                
                return;
            }
            else
            {
                var Tile = GridViewHandler.GetTile(collectable.ReverseString(collectable.CollectibleID));
                if (Tile!=null)
                {
                    var target = Tile.transform.position;
                    target.y = .9f;
                    goldenKey.position = collectable.transform.position;
                    collectable.gameObject.SetActive(false);
                    goldenKey.gameObject.SetActive(true);
                    goldenKey.transform.transform.DORotate(new Vector3(0, 90, 0), .5f).SetEase(Ease.Linear);
                    goldenKey.transform.transform.DOJump(target,3, 1, .5f).SetEase(Ease.Linear).OnComplete((() =>
                    {
                        TweenCallback callback = (() =>
                        {
                            GridViewHandler.ChangeTileMaterial(Tile);
                            collectable.CheckTileLink(Tile);
                            collectable.isDone = true;
                            target.y += 1;
                            goldenParticle.transform.position = target;
                            tile.TileTouch = true;
                            Destroy(collectable);
                            Destroy( Tile.TileCollectible.gameObject);
                            SoundManager.Instance.PlayLock(1);
                            goldenParticle.SetActive(true);
                            goldenKey.gameObject.SetActive(false);

                        });
                        DOVirtual.DelayedCall(.15f,callback);

                    }));
                   
                }
            }
            
           // Destroy( collectable);;
        }
        protected virtual void JumpEffect(Vector3 position)
        {
           
          GameController.SetState(GameStates.Win);
            var configs = Configs.GameConfig;
            _playerAnimator.JumpAnimation();
            position.y = 1f;
            LookAt(position);
            Child.rotation=quaternion.identity;
            SoundManager.Instance.Joy();
            transform.DOJump(position, configs.JumpHeight, 1, configs.JumpDuration).SetEase(Ease.Linear).OnComplete((() =>
            {
                _crown.SetActive(true);
                transform.DORotate(configs.playerRotationOnJumpComplete, configs.playerRotationOnJumpCompleteDuration).SetEase(Ease.Linear).OnComplete(() =>
                {
                    _playerAnimator.WinAnimation();
                   // SoundManager.Instance.PlaySue(1);
                });
                UIController.instance.LevelComplete();
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