using System.Collections.Generic;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class Tile : TileBase
    {
        public int r, c;

        public void Init(Material material, ICell cell, IGridView gridView, IPlayer player)
        {
            iCell = cell;
            r = cell.Row;
            c = cell.Col;
            gameObject.name = $"{r},{c}";
            iGridView = gridView;
            hapticController = gridView.HapticHandler;
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

        public override void OnMouseDown()
        {
            base.OnMouseDown();
            // if (_player != null)
            // {
            //     PlayerController.instance.SelectedPlayer = _player;
            // }
            // else
            // {
            //     PlayerController.instance.AssignPath(this);
            // }

            if (_tileStates == TileStates.Player)
            {
                CollectAdjacent();
            }
        }
    }
}