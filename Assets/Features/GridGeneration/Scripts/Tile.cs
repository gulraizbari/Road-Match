using DG.Tweening;
using Features.GridGeneration.Scripts.interfaces;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Features.GridGeneration.Scripts
{
    public class Tile : TileBase
    {
       // private GridTraversal _gridTraversal;
        private PlayerController _playerController;
        public bool isGate;
        public int row;
        public int column;


        public void SetCollectable(Collectable collectable)
        {
            _collectable = collectable;
            PlacementTransform.localScale=Vector3.one;
            collectable.transform.SetParent(PlacementTransform);
            collectable.transform.localPosition=Vector3.zero;
            
        }

        public void ChangeColor(Material mat)
        {
            _renderer.material = mat;
        }
        public void Init(Material material, ICell cell, IGridView gridView, IPlayer player, PlayerController playerController)
        {
            MyTile = this;
            iCell = cell;
            row = cell.Row;
            column = cell.Col;
            gameObject.name = $"{row},{column}";
            iGridView = gridView;
            hapticController = gridView.HapticHandler;
            _playerController = playerController;
            _renderer.material = material;
            _player = player;
            gameObject.SetActive(true);
            
            if (_player!=null)
            {
                
                //Invoke(nameof(CheckAdjacents),0.5f);
                var tween = new TweenCallback((() =>
                {
                    CheckAdjacents(true);
                }));
                DOVirtual.DelayedCall(.5f,tween);
            }
        }

        public Renderer GetRenderer()
        {
            return _renderer;
        }

        public void RemovePlayer()
        {
            _player = null;
        }

        public void AssignPlayer(IPlayer player)
        {
            _player = player;
        }

        // public void StartBlinking()
        // {
        //     _colorEffect.StartBlinking(this, 0.75f);
        // }
        //
        // public void StopBlinking()
        // {
        //     _colorEffect.StopBlinking();
        //     _renderer.material.color = GetRenderer().material.color;
        // }

        public override void OnPointerDown(PointerEventData eventData)
        {
            base.OnPointerDown(eventData);
            if (!isTouch) return;
            
            if (!GameController.IsState(GameStates.Play))return;
            if (ignore)return;
            if (_player is null)
            {
                if(TileState != TileStates.Walkable )return;
                _playerController.AssignPath(this);
                if (istutorial)
                {
                    TutorialManager.OnTutorialAction();
                }
            }
        }
    }
}