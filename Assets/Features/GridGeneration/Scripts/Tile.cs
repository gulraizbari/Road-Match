using Features.GridGeneration.Scripts.interfaces;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class Tile : TileBase
    {
       // private GridTraversal _gridTraversal;
        private PlayerController _playerController;
        
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
                Invoke(nameof(CheckAdjacents),0.5f);
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
        
        public override void OnMouseDown()
        {
            base.OnMouseDown();
            if (!GameController.IsState(GameStates.Play))return;
            if (ignore)return;
            if (_player is null)
            {
                _playerController.AssignPath(this);
               // _gridTraversal.OnTargetTileSelected(); 
                if (istutorial)
                {
                    TutorialManager.OnTutorialAction();
                }
            }
            // if (_player != null)
            // {
            //     if (_playerController.SelectedPlayer is null)
            //     {
            //         _playerController.SelectedPlayer = _player;
            //         _gridTraversal.TraverseGrid();
            //         if (istutorial)
            //         {
            //             TutorialManager.OnTutorialAction();
            //         }
            //     }
            // }
            // else
            // {
            //     _playerController.AssignPath(this);
            //     _gridTraversal.OnTargetTileSelected(); 
            //     if (istutorial)
            //     {
            //         TutorialManager.OnTutorialAction();
            //     }
            //     // if (_tileStates == TileStates.Player)
            //     // {
            //     //     CollectAdjacent();
            //     // }
            // }
        }
    }
}