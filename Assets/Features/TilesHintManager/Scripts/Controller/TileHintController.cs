using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using UnityEngine;

namespace Sablo.Gameplay.TilesHint
{
    public class TileHintController : MonoBehaviour, ITileHintController
    {
        private List<Tile> _tempFlipAbleTilesList = new List<Tile>();
        private ITile _randomTile;
        private Tile _foundTile;

        public IGridGenerator GridGenerationHandler { get; set; }
        public IPlayer SelectedPlayer { get; set; }

        private bool TilesWithSameType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.TypeItem == selectedTile2.CurrentItem.TypeItem;

        private bool WithSameSubType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.GetItemObject().ToString() == selectedTile2.CurrentItem.GetItemObject().ToString();

        public void IndicateSimilarTiles()
        {
            foreach (Tile neighbor in GridGenerationHandler.FindAdjacentCells(SelectedPlayer.CurrentTile))
            {
                if (neighbor.TileState == TileStates.FlipAble)
                {
                    _tempFlipAbleTilesList.Add(neighbor);
                }
            }

            _randomTile = SelectRandomFlipAbleTile(_tempFlipAbleTilesList);
            print(_randomTile);
            SearchInGrid(_randomTile);
        }

        private void SearchInGrid(ITile randomlySelectedTile)
        {
            if (_randomTile is null) return;
            if (_randomTile.CurrentItem is null) return;
            foreach (var tileData in GridGenerationHandler.GridView.PathData)
            {
                if (tileData.Value.ITileHandler.CurrentItem is null) continue;
                if (tileData.Value.TileState == TileStates.FlipAble)
                {
                    if (TilesWithSameType(tileData.Value.ITileHandler, randomlySelectedTile))
                    {
                        if (WithSameSubType(tileData.Value.ITileHandler, randomlySelectedTile))
                        {
                            if (tileData.Value.ID == _randomTile.ID)
                            {
                                continue;
                            }

                            _foundTile = tileData.Value;
                            if (_foundTile)
                            {
                                print(tileData.Value.ITileHandler.CurrentItem.TypeItem);
                                print(randomlySelectedTile.CurrentItem.TypeItem);
                                var isMatching = tileData.Value.ITileHandler.CurrentItem.TypeItem == randomlySelectedTile.CurrentItem.TypeItem;
                                print("Items are matching: " + isMatching);
                                break;
                            }
                            else
                            {
                                print("Tile not found");
                            }
                        }
                    }
                }
            }

            if (_foundTile is null)
            {
                print("Restart Process");
                IndicateSimilarTiles();
            }
        }

        private Tile SelectRandomFlipAbleTile(List<Tile> flipableTiles)
        {
            if (flipableTiles.Count == 0) return null;
            return flipableTiles[Random.Range(0, flipableTiles.Count)];
        }

        public void ResetHintMatchedTiles()
        {
            _randomTile = null;
            _foundTile = null;
        }
    }
}