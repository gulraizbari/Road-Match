using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using DG.Tweening;
using Features.GridGeneration.Scripts.interfaces;
using Features.Haptics.Interfaces;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

namespace Features.GridGeneration.Scripts
{
    public class TileBase : MonoBehaviour, ITile,IPointerDownHandler,IPointerUpHandler,IDragHandler,IEndDragHandler
    {
        [BoxGroup("Reference"), SerializeField]
        protected string _id;

        [BoxGroup("Reference"), SerializeField]
        ParticleSystem flipParticle;
        [BoxGroup("Reference"), SerializeField]
        protected Renderer _renderer;

        [BoxGroup("Reference"), SerializeField,ReadOnly]
       protected Collectable _collectable;
        [BoxGroup("Reference"), SerializeField]
        Transform _itemPlacement;
        [BoxGroup("Reference"), SerializeField]
        GameObject _shadow;

        [BoxGroup("Reference")]
        public CollectableItems requiredCollectableItems=CollectableItems.None;

        [SerializeField] protected TileStates _tileStates;

        [BoxGroup("Reference"), ShowInInspector]
        protected HashSet<Tile> _adjacents = new HashSet<Tile>();
        public ITile ITileHandler => this;
        public List<string> adjacentIDs;
        public bool keyReq;
        [BoxGroup("Reference"), SerializeField, ReadOnly]
        protected Item _item;
        protected IGridView iGridView;
        protected ICell iCell;
        protected IHapticController hapticController;
        private IEnumerator coroutine;
        bool _isFlipped;
        bool _canTouch;
        public Cell CellBase;
        Tween _outerTween;
        Tween _innerTween;
        Vector3 startRotation;
        protected Tile MyTile;
        public bool istutorial;
        public bool cantSelectPlayer;
        public bool canClick;
        protected IPlayer _player;
        public ParticleSystem MergeParticle { get; set; }
        Item ITile.CurrentItem => _item;
        public string ID => _id;
        public Transform PlacementTransform => _itemPlacement.transform;

        public Collectable TileCollectible => _collectable;
        public Enemy _Enemy { get; set; }
        public bool TileTouch { get; set; }

        public TileStates TileState
        {
            get => _tileStates;
            set => _tileStates = value;
        }
        
        public void SetID(int row, int col, Cell cell)
        {
            _id = $"{row}{col}";
            CellBase = cell;
            TileTouch = true;
        }

        public void AssignPlacement(Item item)
        {
            _item = item;
            _item.transform.SetParent(_itemPlacement);
            if (_item.Is2D)
            {
                item.transform.localRotation = Quaternion.Euler(new Vector3(-55, 0, 0));
                item.transform.localPosition = Vector3.zero;
                item.transform.localPosition = new Vector3(0, .9f, -.7f);
            }
            else
            {
                item.transform.localPosition = Vector3.zero;
            }
        }

        public void SetTransform(Vector3 pos, float z)
        {
            transform.position = pos;
            //TileState = TileStates.FlipAble;
            _renderer.transform.localRotation = Quaternion.Euler(0, 0, z);
            if (z != 0)
            {
                _isFlipped = true;
            }
            startRotation=transform.eulerAngles;
        }
        public void DisableShadow()
        {
            _shadow.SetActive(false);
        }
        public void SetNonFlipAble(GameObject gameObject,Vector3 rot)
        {
            var _transform = gameObject.transform;
            PlacementTransform.localScale= Vector3.one;
            _transform.SetParent(PlacementTransform);
            _transform.localPosition = Vector3.zero;
            _transform.localRotation = Quaternion.Euler(rot);
        }
        public void Flip(bool isAutoFlip, bool canSelect)
        {
            if (_isFlipped)
            {
                UnSelect(canSelect, 0, .05f, null);
            }
            else
            {
                var configs = Configs.GameConfig;
                TileState = isAutoFlip ? TileStates.AutoFlip : TileStates.CanMerge;

                _isFlipped = true;
                transform.DOLocalMoveY(configs.tileJumpHeight, configs.tileJumpDuration).SetEase(Ease.Linear)
                    .OnComplete(() =>
                    {
                        transform.DOLocalMoveY(0, configs.tileJumpDuration).SetEase(Ease.Linear).OnComplete(() =>
                        {
                            if (isAutoFlip)
                            {
                                Invoke(nameof(FlipWithDelay), configs.AutoFlipDelay);
                            }
                            else
                            {
                                _canTouch = false;
                                if (canSelect)
                                {
                                    SelectTile(this);
                                }
                            }
                        });
                    });

                TileRotateLogic(true, -180);
            }
        }

        private void TileRotateLogic(bool isGreen, float Z)
        {
            _renderer.transform.DOLocalRotate(new Vector3(0, 0, Z), Configs.GameConfig.tileJumpDuration)
                .SetEase(Ease.Linear).OnStart(() =>
                {
                    iGridView.ChangeTileMaterial(isGreen, _renderer);
                    if (!isGreen)
                    {
                        ShowPlacement(false, 0);
                    }
                    else
                    {
                        ShowPlacement(true,Configs.GameConfig.tileJumpDuration-.25f);
                    }
                 });
        }

        private void ShowPlacement(bool show, float startDelay)
        {
            var config = Configs.GameConfig;
            if (show)
            {
                flipParticle.Play();
                //_shadow.SetActive(show);
            }
            _itemPlacement.DOScale(show ? config.placementMaxScale : config.placementMinScale, config.placementDuration)
                .SetDelay(startDelay).SetEase(Ease.Linear).OnComplete(() =>
                {
                    _shadow.SetActive(show);
                    _item.transform.DOScale(show ? config.placementMaxScale : config.placementMinScale,
                        config.placementDuration).SetEase(Ease.Linear);
                });
        }
        private void FlipWithDelay()
        {
            //await Task.Delay(TimeSpan.FromSeconds(.4f));
            Flip(true, false);
        }

        public void SelectTile(ITile tile)
        {
            iGridView.MergeController.SelectTile(this);
        }
        public void UnSelect(bool canSelect, float delay, float rotationDelay, UnityEvent action)
        {
            if (coroutine != null) StopCoroutine(coroutine);
            coroutine = unselect(delay, rotationDelay, action);
            StartCoroutine(coroutine);
        }
        IEnumerator unselect(float delay, float rotationDelay, UnityEvent action)
        {
            yield return new WaitForSeconds(delay);
            action?.Invoke();
            var config = Configs.GameConfig;
            if (_outerTween.IsActive())
            {
                _outerTween.Kill();
            }

            if (_innerTween.IsActive())
            {
                _innerTween.Kill();
            }

            _outerTween = transform.DOLocalMoveY(config.tileJumpHeight, config.tileJumpDuration).SetEase(Ease.Linear)
                .OnComplete(() =>
                {
                    _innerTween = transform.DOLocalMoveY(0f, config.tileJumpDuration).SetEase(Ease.Linear).OnComplete(
                        () =>
                        {
                            TileState = TileStates.FlipAble;
                            _isFlipped = false;
                            _canTouch = false;
                        });
                });

            yield return new WaitForSeconds(rotationDelay);
            TileRotateLogic(false, 0);
        }
        public void OnMerge(Vector3 target, float duration)
        {
            _shadow.SetActive(false);
            var configs = Configs.GameConfig;
            _tileStates = TileStates.Walkable;
            PlacementTransform.DOLocalMoveY(configs.placementMoveUpValue, configs.placementMoveUpDuration)
                .SetEase(Ease.Linear).OnComplete(() =>
                {
                    target.y = PlacementTransform.transform.position.y;
                    PlacementTransform.DOLocalMove(target, duration).SetEase(Ease.OutQuint).OnComplete(() =>
                    {
                        if (MergeParticle)
                        {
                            var particle = Instantiate(MergeParticle);
                            particle.transform.position = PlacementTransform.position;
                            particle.Play();
                        }

                        PlacementTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                    });
                });
        }
        public void CheckAdjacents(bool canFlip)
        {
            // foreach (var VARIABLE in iGridView.PathData)
            // {
            //     VARIABLE.Value.Lift(false);
            // }
            foreach (var cellID in iGridView.GridHandler.FindAdjacentCells(CellBase))
            {
                var id = $"{cellID.Row}{cellID.Col}";
                adjacentIDs.Add(id);
            }

            FetchFromDictionary(canFlip);
        }
        private async void FetchFromDictionary(bool canFlip)
        {
            foreach (var id in adjacentIDs)
            {
                var adjacentsCell = iGridView.GetFoundTile(id);
                if (adjacentsCell)
                {
                    if (adjacentsCell._id == id)
                    {
                        _adjacents.Add(adjacentsCell);
                    }
                }
            }
            var foundadjacent= _adjacents.ToList();
            Tile gateTile=new Tile();
            Tile enemyTile=new Tile();
          
             //var gateTile = foundadjacent.Find(tile => tile._tileStates == TileStates.Walkable);
             foreach (var data in foundadjacent)
             {
                 if (data.isGate)
                 {
                     gateTile = data;
                     break;
                 } 
                 else if (data._Enemy)
                 {
                     enemyTile=data;
                 }
          }
             await Task.Delay(TimeSpan.FromSeconds(0.05f));
            if (gateTile )
            {   
                print("1");
                if (_player is null)
                {
                    print("Player missing");
                }
                else
                {
                    print("2");
                    gateTile.TileState = TileStates.OpenGate;
                    _player.Jump(gateTile.transform.position);
                }
            }
            else if (enemyTile)
            {
                _player.Fighter.Attack(enemyTile._Enemy);
                enemyTile._Enemy.Attack(_player.Fighter);
            }
            else
            {
                if (canFlip)
                {
                    FlipAllAdjacent();
                }
            }
            if (_collectable && !_collectable.isDone)
            {
                _player.OnFoundingCollectible(_collectable,this);
            }
            else
            {
                _collectable = null;
            }
        }

        public void RemovePlayer()
        {
            _player = null;
           
        }
        private void ActionOnFindingDesiredTile(){}
        private void FlipAllAdjacent()
        {
            foreach (var adjancent in _adjacents)
            {
                if (adjancent.TileState == TileStates.FlipAble)
                {
                    adjancent.Flip(true, false);
                }
            }

            _adjacents.Clear();
            adjacentIDs.Clear();
        }
        private void FetchAdjacent(List<string> adjacentCells)
        {
            foreach (var cell in adjacentCells)
            {
                var adjacentCell = iGridView.GetFoundTile(cell);
                _adjacents.Add(adjacentCell);
            }
        }

        // public void Lift(bool isLift)
        // {
        //     if (isLift)
        //     {
        //         transform.DOLocalMoveY(.4f, .1f).SetEase(Ease.Linear);
        //     }
        //     else
        //     {
        //         transform.DOLocalMoveY(0f, .1f).SetEase(Ease.Linear);
        //     }
        //    
        // }
        public virtual void OnPointerDown(PointerEventData eventData)
        {
            canClick = true;
            // if (IsTouch)
            // {
            //     if (!GameController.IsState(GameStates.Play))return;
            //     if (_tileStates == TileStates.FlipAble)
            //     {
            //         if (!_canTouch)
            //         {
            //             _canTouch = true;
            //             SoundManager.Instance.PlayTileSelect(1);
            //             hapticController.PlayHaptic();
            //             iGridView.UpdateMoves(-1);
            //             Flip(false, true);
            //         }
            //         if (istutorial)
            //         {
            //             TutorialManager.OnTutorialAction();
            //         }
            //     }
            //     else
            //     {
            //         print($"{TileState}");
            //     }


            // }
        }

       public void SetMeshMaterialColorProperty(Color color)
        {
            MaterialPropertyBlock prop = new MaterialPropertyBlock();
            
            prop.SetColor("_BaseColor",     color);
            _renderer.SetPropertyBlock(prop, 0);
        }

        public void ChangeColor(Color color)
        {
            _renderer.material.DOColor(color, Configs.GameConfig.playerYTargetOnTileMovingDuration);
        }

        Tween tween;
        public void ChangeHintColor(Color color1 ,bool stop)
        {
            
            if (stop)
            {
                if (tween.IsActive())
                {
                    tween.Kill();
                    ChangeColor(color1);
                    return;
                }
            }
            tween= _renderer.material.DOColor(color1, Configs.GameConfig.colorDuration).SetEase(Ease.Linear)
                .SetLoops(-1, LoopType.Yoyo);
           
        }

        Tween rotation;

        private void LockTileAction()
        { 
            if (_tileStates == TileStates.Gate ||_tileStates == TileStates.ChestBox  )
            {
                print("Gate");
                transform.rotation=Quaternion.Euler(startRotation);
                if (rotation.IsActive())
                {
                    rotation.Kill();
                    transform.rotation=Quaternion.Euler(startRotation);
                }
                hapticController.PlayHaptic();
                transform.rotation=Quaternion.Euler(new Vector3(0, 0, -10f));
                transform.DOMoveY(.5f, .05f).SetEase(Ease.Linear).OnComplete((() =>
                {
                    transform.DOMoveY(0, .05f).SetEase(Ease.Linear);
                }));
                rotation= transform.DORotate(new Vector3(0, 0, 10f), .1f).SetEase(Ease.Linear).SetLoops(1,LoopType.Yoyo).OnComplete((
                    () =>
                    {
                        transform.rotation=Quaternion.identity;
                    }));
            }
        }
        public virtual void OnPointerUp(PointerEventData eventData)
        {
            if (!canClick)return;
           
            if (TileTouch)
            {
                if (!GameController.IsState(GameStates.Play)) return;
               LockTileAction();
                if (_tileStates == TileStates.FlipAble)
                {
                    if (!_canTouch)
                    {
                        _canTouch = true;
                        SoundManager.Instance.PlayTileSelect(1);
                        hapticController.PlayHaptic();
                        iGridView.UpdateMoves(-1);
                        Flip(false, true);
                    }

                    if (istutorial)
                    {
                        TutorialManager.OnTutorialAction();
                    }
                }
                else
                {
                   // print($"{TileState}");
                }
            }
        }

        public void OnDrag(PointerEventData eventData)
        {
            canClick = false;
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            canClick = true;
        }
    }
}