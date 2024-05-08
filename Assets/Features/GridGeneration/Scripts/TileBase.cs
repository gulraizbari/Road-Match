using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using DG.Tweening;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class TileBase:MonoBehaviour
    {
        [BoxGroup("Reference"), SerializeField] 
       protected string _id;
        //[BoxGroup("Reference"), SerializeField]
       // protected int _col;
        //[BoxGroup("Reference"), SerializeField]
        //protected int  _row;
        [BoxGroup("Reference"), SerializeField]
       protected Renderer _renderer;

        [BoxGroup("Reference"), SerializeField]
        TextMeshProUGUI _text;
        [SerializeField] bool _isFlipped;
        [SerializeField] bool _canTouch;
        [SerializeField]
        protected bool isPlayer;
        [BoxGroup("Reference"), SerializeField]
        protected List<Tile> _adjacents;
        protected IGridView iGridView;
        protected ICell iCell;
        public void SetID(int row, int col)
        {
            _id = $"{row}{col}";
            _text.SetText($"{row},{col}");
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
       
        
        public void Flip(bool isAutoFlip)
        {
            if (isPlayer)   return;
            if (_isFlipped)
            {
                transform.DOLocalMoveY(6f, .25f).SetEase(Ease.Linear).OnComplete((() =>
                {
                    transform.DOLocalMoveY(0f, .25f).SetEase(Ease.Linear).OnComplete((() =>
                    {
                        _isFlipped = false;
                        _canTouch = false;
                    }));;;
                }));
            
                _renderer.transform.DOLocalRotate(new Vector3(0, 0, 0), .25f).SetEase(Ease.Linear).SetDelay(.05f).OnStart((() =>
                {
                  iGridView.ChangeTileMaterial(false,_renderer);
                }));
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
                        }
                       
                    }));
                }));
                _renderer.transform.DOLocalRotate(new Vector3(0, 0, -180), .25f).SetDelay(.05f).SetEase(Ease.Linear).OnStart((() =>
                {
                    iGridView.ChangeTileMaterial(true,_renderer);
                }));
            }
        }

        private async void FlipWithDelay()
        {
            await Task.Delay(TimeSpan.FromSeconds(1));
            Flip(true);
           
        }
       
      public virtual void OnMouseDown()
        {

           
            if (!_canTouch)
            {
                _canTouch = true;
                
                Flip(false);
            }   
        }
    }
}