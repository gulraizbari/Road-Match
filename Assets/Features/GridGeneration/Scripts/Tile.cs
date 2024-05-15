using System.Collections.Generic;
using Features.GridGeneration.Scripts.interfaces;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sablo.Gameplay.PathFinding;
using Sablo.Gameplay.Utilities;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class Tile : TileBase
    {
        private GridTraversal _gridTraversal;
        private PlayerController _playerController;
        private ColorEffect _colorEffect;
        private Coroutine _blinkingCoroutine;
        public int row;
        public int column;

        public void Init(Material material, ICell cell, IGridView gridView, IPlayer player, PlayerController playerController, GridTraversal gridTraversal, ColorEffect colorEffect)
        {
            iCell = cell;
            row = cell.Row;
            column = cell.Col;
            gameObject.name = $"{row},{column}";
            iGridView = gridView;
            _gridTraversal = gridTraversal;
            _colorEffect = colorEffect;
            hapticController = gridView.HapticHandler;
            _playerController = playerController;
            _renderer.material = material;
            _player = player;
            gameObject.SetActive(true);
        }

        private void FetchAdjacent(List<string> adjacentCells)
        {
            foreach (var cell in adjacentCells)
            {
                if (cell != _id) continue;
                var adjacentCell = iGridView.GetFoundTile(cell);
                _adjacents.Add(adjacentCell);
            }
        }

        public Renderer GetRenderer()
        {
            return _renderer;
        }

        [Button]
        public void CollectAdjacent()
        {
            var adjacentIDs = new List<string>();
            foreach (var cellID in iCell.GetAdjacent(this))
            {
                var id = $"{cellID.Row}{cellID.Col}";
                adjacentIDs.Add(id);
            }

            FetchAdjacent(adjacentIDs);
            FetchFromDictionary(adjacentIDs);
        }

        private void FetchFromDictionary(List<string> IdsData)
        {
            foreach (var id in IdsData)
            {
                var adjacentsCell = iGridView.GetFoundTile(id);
                if (!_adjacents.Contains(adjacentsCell) && adjacentsCell != null)
                {
                    _adjacents.Add(adjacentsCell);
                }
            }

            FlipAllAdjacent();
            _adjacents.Clear();
        }

        private void FlipAllAdjacent()
        {
            foreach (var VARIABLE in _adjacents)
            {
                VARIABLE.Flip(true, false);
            }
        }

        public void RemovePlayer()
        {
            _player = null;
        }

        public void AssignPlayer(IPlayer player)
        {
            _player = player;
        }

        public void StartBlinking()
        {
            _colorEffect.StartBlinking(this, 0.75f);
        }

        public void StopBlinking()
        {
            _colorEffect.StopBlinking();
            _renderer.material.color = GetRenderer().material.color;
        }
        
        public override void OnMouseDown()
        {
            base.OnMouseDown();
            if (_player != null)
            {
                if (_playerController.SelectedPlayer is null)
                {
                    _playerController.SelectedPlayer = _player;
                    _gridTraversal.TraverseGrid();
                }
               
            }
            else
            {
                _playerController.AssignPath(this);
                _gridTraversal.OnTargetTileSelected(); 
                if (_tileStates == TileStates.Player)
                {
                    CollectAdjacent();
                }
            }
        }
    }
}