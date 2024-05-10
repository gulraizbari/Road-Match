using System.Collections.Generic;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class Tile:TileBase
    {
        public void Init( Material material,ICell cell,IGridView gridView)
        {
            iCell = cell;
            iGridView = gridView;
            _renderer.material = material;
        }

        private void FetchAdjacent(List<string> adjacentCells)
        {
            foreach (var cell in adjacentCells)
            {
                if (cell != _id) continue;
                var  adjacentCell=  iGridView.GetFoundTile(cell);
                _adjacents.Add(adjacentCell);
            }
        }
        [Button]
        public void CollectAdjacent()
        {
              var adjacentIDs=new List<string>();
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
                var  adjacentsCell=  iGridView.GetFoundTile(id);
                if (!_adjacents.Contains(adjacentsCell)&& adjacentsCell!=null)
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
                VARIABLE.Flip(true,false);
            }
        }
        public override void OnMouseDown()
        {
            base.OnMouseDown();
            if (_tileStates == TileStates.Player)
            {
                CollectAdjacent();
            }
        }

        
    }
}