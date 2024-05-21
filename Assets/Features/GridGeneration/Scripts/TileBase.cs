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

namespace Features.GridGeneration.Scripts
{
    public class TileBase : MonoBehaviour, ITile
    {
        [BoxGroup("Reference"), SerializeField]
        protected string _id;

        [BoxGroup("Reference"), SerializeField]
        protected Renderer _renderer;

        [BoxGroup("Reference"), SerializeField,ReadOnly]
       protected Collectable _collectable;
        [BoxGroup("Reference"), SerializeField]
        Transform _itemPlacement;

        [BoxGroup("Reference"), SerializeField]
        TextMeshProUGUI _text;

        [BoxGroup("Reference"), SerializeField]
        GameObject _shadow;

        [BoxGroup("Reference")]
        public CollectableItems requiredCollectableItems=CollectableItems.None;

        [SerializeField] protected TileStates _tileStates;

        [BoxGroup("Reference"), ShowInInspector]
        protected HashSet<Tile> _adjacents = new HashSet<Tile>();

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
        protected Tile MyTile;
        public bool istutorial;
        public bool ignore;
        protected IPlayer _player;
        public ParticleSystem MergeParticle { get; set; }
        Item ITile.CurrentItem => _item;
        public string ID => _id;
        public Transform PlacementTransform => _itemPlacement.transform;


        public TileStates TileState
        {
            get => _tileStates;
            set => _tileStates = value;
        }

        public void SetID(int row, int col, Cell cell)
        {
            _id = $"{row}{col}";
            _text.SetText($"{row},{col}");
            CellBase = cell;
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
            TileState = TileStates.FlipAble;
            _renderer.transform.localRotation = Quaternion.Euler(0, 0, z);
            if (z != 0)
            {
                _isFlipped = true;
            }
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
                }).OnComplete((() =>
                {
                    if (isGreen)
                    {
                        ShowPlacement(true, 0);
                    }
                }));
        }

        private void ShowPlacement(bool show, float startDelay)
        {
            var config = Configs.GameConfig;
            _shadow.SetActive(show);
            _itemPlacement.DOScale(show ? config.placementMaxScale : config.placementMinScale, config.placementDuration)
                .SetDelay(startDelay).SetEase(Ease.Linear).OnComplete(() =>
                {
                    _item.transform.DOScale(show ? config.placementMaxScale : config.placementMinScale,
                        config.placementDuration).SetEase(Ease.Linear);
                });
        }

        private void FlipWithDelay()
        {
            //await Task.Delay(TimeSpan.FromSeconds(.4f));
            Flip(true, false);
        }

        public virtual void OnMouseDown()
        {
            
            if (_tileStates != TileStates.FlipAble  ) return;
          
            if (!_canTouch)
            {
                _canTouch = true;
                SoundManager.Instance.PlayTileSelect(1);
                hapticController.PlayHaptic();
                Flip(false, true);
            }
            if (istutorial)
            {
                TutorialManager.OnTutorialAction();
            }
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


        [Button]
        public void CheckAdjacents()
        {
            foreach (var cellID in iGridView.GridHandler.FindAdjacentCells(CellBase))
            {
                var id = $"{cellID.Row}{cellID.Col}";
                adjacentIDs.Add(id);
            }

            FetchFromDictionary();
        }

        private async void FetchFromDictionary()
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
            var adjacentsList = _adjacents.ToList();
            var gateTile = adjacentsList.Find(tile => tile._tileStates == TileStates.Gate);
            await Task.Delay(TimeSpan.FromSeconds(0.01f));
            if (gateTile)
            {
                if (_player is null)
                {
                    print("Player missing");
                }
                else
                {
                    
                    _player.Jump(gateTile.transform.position,gateTile.requiredCollectableItems);
                }
            }
            else
            {
                if (_collectable)
                {
                    _player.OnFoundingCollectible(_collectable);
                }
            }
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
    }
}