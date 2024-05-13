using System;

using System.Collections.Generic;
using System.Threading.Tasks;
using DG.Tweening;
using Features.Haptics.Interfaces;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sirenix.OdinInspector;
using TapticPlugin;
using TMPro;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class TileBase:MonoBehaviour,ITile
    {
        [BoxGroup("Reference"), SerializeField] 
       protected string _id;
        [BoxGroup("Reference"), SerializeField]
       protected Renderer _renderer;
        [BoxGroup("Reference"), SerializeField]
        Transform _itemPlacement;
        [BoxGroup("Reference"), SerializeField]
        TextMeshProUGUI _text;

        [SerializeField] protected TileStates _tileStates;
        //protected bool isPlayer;
        [BoxGroup("Reference"), SerializeField]
        protected List<Tile> _adjacents;
        [BoxGroup("Reference"), SerializeField,ReadOnly]
        protected Item _item;
        protected IGridView iGridView;
        protected ICell iCell;
        protected IHapticController hapticController;
        bool _isFlipped; 
        bool _canTouch;
        public Cell CellBase;
        Tween _outerTween;
        Tween _innerTween;
        //Tween _innerTween;
        public void SetID(int row, int col,Cell cell)
        {
            _id = $"{row}{col}";
            _text.SetText($"{row},{col}");
            CellBase = cell;
        }

        public void AssignPlacement(Item item)
        {
            _item = item;
            _item.transform.SetParent(_itemPlacement);
            item.transform.localPosition=Vector3.zero;
            
        }
        public void SetTransform(Vector3 pos, float z)
        {
            transform.position = pos;
            TileState = TileStates.FlipAble;
            _renderer.transform.localRotation = Quaternion.Euler(0, 0, z);
            if (z!=0)
            {
                _isFlipped = true;
            }
        }
       
        
        public void Flip(bool isAutoFlip,bool canSelect)
        {
            if (_isFlipped)
            {
               UnSelect(canSelect,0);
            }
            else
            {
              var configs= Configs.GameConfig;
                TileState = isAutoFlip ? TileStates.AutoFlip : TileStates.CanMerge;
               
                _isFlipped = true;
                transform.DOLocalMoveY(configs.tileJumpHeight, configs.tileJumpDuration).SetEase(Ease.Linear).OnComplete((() =>
                {
                    transform.DOLocalMoveY(0, configs.tileJumpDuration).SetEase(Ease.Linear).OnComplete((() =>
                    {
                        if (isAutoFlip)
                        {
                            FlipWithDelay();
                        }
                        else
                        {
                            _canTouch = false;
                            if (canSelect)
                            {
                                SelectTile(this);
                            }
                        }
                    }));
                }));
                TileRotateLogic(true,-180);
            }
        }

        private void TileRotateLogic(bool isGreen,float Z)
        {
            _renderer.transform.DOLocalRotate(new Vector3(0, 0, Z), Configs.GameConfig.tileJumpDuration).SetDelay(.05f).SetEase(Ease.Linear).OnStart((() =>
            {
                iGridView.ChangeTileMaterial(isGreen,_renderer);
                if (!isGreen)
                {
                    ShowPlacement(false,0);
                }
            })).OnComplete((() =>
            {
                if (isGreen)
                {
                    ShowPlacement(true,0);
                }
            } ));
        }

        private void ShowPlacement(bool show,float startDelay)
        {
            var config = Configs.GameConfig;
            _itemPlacement.DOScale(show?config.placementMaxScale:config.placementMinScale, config.placementDuration).SetDelay(startDelay).SetEase(Ease.Linear).OnComplete((() =>
            {
                _item.transform.DOScale(show?config.placementMaxScale:config.placementMinScale, config.placementDuration).SetEase(Ease.Linear);
            }));
        }
        private async void FlipWithDelay()
        {
            await Task.Delay(TimeSpan.FromSeconds(1));
            Flip(true,false);
           
        }
       
      public virtual void OnMouseDown()
        {
            if (_tileStates != TileStates.FlipAble)return;
            if (!_canTouch)
            {
                _canTouch = true;
                hapticController.PlayHaptic(ImpactFeedback.Heavy);
                Flip(false,true);
            }   
        }

        public Transform PlacementTransform { get=>_itemPlacement.transform; }
        public TileStates TileState { get=>_tileStates; set=>_tileStates=value; }

        public void SelectTile(ITile tile)
        {
            iGridView.MergeController.SelectTile(this);
        }

        public  async void UnSelect(bool canSelect,float delay)
        {
            await Task.Delay(TimeSpan.FromSeconds(delay));
            var config = Configs.GameConfig;
          _outerTween  =  transform.DOLocalMoveY(config.tileJumpHeight, config.tileJumpDuration).SetEase(Ease.Linear).OnComplete((() =>
            {
              _innerTween =   transform.DOLocalMoveY(0f, config.tileJumpDuration).SetEase(Ease.Linear).OnComplete((() =>
                {
                    TileState = TileStates.FlipAble;
                    _isFlipped = false;
                    _canTouch = false;
                }));;;
            }));
            TileRotateLogic(false,0);
        }
        
        public void OnMerge(Vector3 target,float duration)
        {
            var configs = Configs.GameConfig;
            _tileStates = TileStates.Walkable;
            CellBase.IsWalkable = true;
            PlacementTransform.DOLocalMoveY(configs.placementMoveUpValue, configs.placementMoveUpDuration).SetEase(Ease.Linear).OnComplete((() =>
            {
                target.y = PlacementTransform.position.y;
                PlacementTransform.DOLocalMove(target, duration).SetEase(Ease.InQuint).OnComplete((() =>
                {
                    PlacementTransform.DOScale(configs.placementMinScale, .1f).SetEase(Ease.Linear);
                }));
            }));
        }

        Item ITile.CurrentItem
        {
            get => _item;
          
        }

        public string ID
        {
            get => _id;
        }
    }
}