using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using DG.Tweening;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
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
        bool _isFlipped; 
        bool _canTouch;
       

        public void SetID(int row, int col)
        {
            _id = $"{row}{col}";
            _text.SetText($"{row},{col}");
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
            _renderer.transform.localRotation = Quaternion.Euler(0, 0, z);
            if (z!=0)
            {
                _isFlipped = true;
            }
        }
       
        
        public void Flip(bool isAutoFlip,bool canSelect)
        {
            //if (isPlayer)   return;
            if (_isFlipped)
            {
               UnSelect(canSelect,0);
            }
            else
            {
                _isFlipped = true;
                transform.DOLocalMoveY(6, .25f).SetEase(Ease.Linear).OnComplete((() =>
                {
                    transform.DOLocalMoveY(0, .25f).SetEase(Ease.Linear).OnComplete((() =>
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
            _renderer.transform.DOLocalRotate(new Vector3(0, 0, Z), .25f).SetDelay(.05f).SetEase(Ease.Linear).OnStart((() =>
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
            _itemPlacement.DOScale(show?1:0, .01f).SetDelay(startDelay).SetEase(Ease.Linear).OnComplete((() =>
            {
                _item.transform.DOScale(show ? 1 : 0, .01f).SetEase(Ease.Linear);
            }));
        }
        private async void FlipWithDelay()
        {
            await Task.Delay(TimeSpan.FromSeconds(1));
            Flip(true,false);
           
        }
       
      public virtual void OnMouseDown()
        {
            if (_tileStates != TileStates.Available)return;
            if (!_canTouch)
            {
                _canTouch = true;
                
                Flip(false,true);
            }   
        }

        public Transform Transform { get=>_itemPlacement.transform; }

        public void SelectTile(ITile tile)
        {
            iGridView.MergeController.SelectTile(this);
        }

        public async void UnSelect(bool canSelect,float delay)
        {
            await Task.Delay(TimeSpan.FromSeconds(delay));
            transform.DOLocalMoveY(6f, .25f).SetEase(Ease.Linear).OnComplete((() =>
            {
                transform.DOLocalMoveY(0f, .25f).SetEase(Ease.Linear).OnComplete((() =>
                {
                    if (canSelect)
                    {
                        SelectTile(this);
                    }
                    _isFlipped = false;
                    _canTouch = false;
                }));;;
            }));
            TileRotateLogic(false,0);
        }

        public void OnMerge(ITile tile)
        {
           _tileStates = TileStates.NotAvailable;
           _item.transform.SetParent(null);
           tile.Transform.SetParent(null);
           Vector3 centerPoint = (tile.Transform.localPosition + _item.transform.localPosition) / 2;

          
           // Move each object towards its respective target position
           _item.transform.DOLocalMove(centerPoint, .5f).SetEase(Ease.Linear).OnComplete((() =>
           {
               ShowPlacement(false,0);
               tile.Transform.transform.DOScale(0, .1f).SetEase(Ease.Linear);
           }));
           tile.Transform.DOLocalMove(centerPoint, .5f);
        }

        
        public void OnMerge()
        {
            _tileStates = TileStates.NotAvailable;
           // ShowPlacement(false,0);
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