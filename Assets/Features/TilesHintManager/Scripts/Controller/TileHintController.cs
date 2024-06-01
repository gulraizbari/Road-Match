using System;
using System.Collections.Generic;
using DG.Tweening;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Sablo.Gameplay.TilesHint
{
    public class TileHintController : MonoBehaviour, ITileHintController
    {
        private List<Tile> _tempFlipAbleTilesList = new List<Tile>();
        private List<HintPairsData> _backupHintData = new List<HintPairsData>();
        private HintPairsData _hintData;
        private ITile _randomTile;
        private Tile _foundTile;
        private Tween _tile1; 
        private Tween _tile2;

        public IGridGenerator GridGenerationHandler { get; set; }
        public IPlayer SelectedPlayer { get; set; }

        private bool TilesWithSameType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.TypeItem == selectedTile2.CurrentItem.TypeItem;

        private bool WithSameSubType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.GetItemObject().ToString() == selectedTile2.CurrentItem.GetItemObject().ToString();

        public void IndicateSimilarTiles()
        {
            _tempFlipAbleTilesList.Clear();
            foreach (Tile neighbor in GridGenerationHandler.FindAdjacentCells(SelectedPlayer.CurrentTile))
            {
                if (neighbor.TileState == TileStates.FlipAble)
                {
                    _tempFlipAbleTilesList.Add(neighbor);
                }
            }

            _randomTile = SelectRandomFlipAbleTile(_tempFlipAbleTilesList);
            if (_randomTile != null && _randomTile.CurrentItem != null)
            {
                SearchInGrid(_randomTile);
            }
            else
            {
                print("No valid random tile found. Selecting nearest random pair.");
                SelectTwoRandomMatchingTiles();
            }
        }

        private void SearchInGrid(ITile randomlySelectedTile)
        {
            _foundTile = null;
            // Check if the hint tiles are already in backupHintData and not used
            if (_backupHintData.Count > 0)
            {
                foreach (var hintPair in _backupHintData)
                {
                    if ((hintPair.Tile_1 == randomlySelectedTile as Tile ||
                         hintPair.Tile_2 == randomlySelectedTile as Tile) &&
                        hintPair.Tile_1.TileState == TileStates.FlipAble &&
                        hintPair.Tile_2.TileState == TileStates.FlipAble &&
                        hintPair.Tile_1.ID != hintPair.Tile_2.ID)
                    {
                        print($"Using cached hint pair: Tile 1 - {hintPair.Tile_1.ID}, Tile 2 - {hintPair.Tile_2.ID}");
                        _foundTile = hintPair.Tile_1;
                        randomlySelectedTile = hintPair.Tile_2;
                        StartBlinking(hintPair.Tile_1, hintPair.Tile_2);
                        return;
                    }
                }
            }

            foreach (var tileData in GridGenerationHandler.GridView.PathData)
            {
                if (tileData.Value.ITileHandler.CurrentItem is null) continue;
                if (TilesWithSameType(tileData.Value.ITileHandler, randomlySelectedTile) &&
                    WithSameSubType(tileData.Value.ITileHandler, randomlySelectedTile) &&
                    tileData.Value.TileState == TileStates.FlipAble && 
                    randomlySelectedTile.TileState == TileStates.FlipAble &&
                    tileData.Value.ID != randomlySelectedTile.ID)
                {
                    _foundTile = tileData.Value;
                    if (_foundTile)
                    {
                        _hintData = new HintPairsData()
                        {
                            Tile_1 = randomlySelectedTile as Tile,
                            Tile_2 = tileData.Value.ITileHandler as Tile,
                            OriginalColor = _foundTile.GetRenderer().material.color
                        };
                        _backupHintData.Add(_hintData);
                        StartBlinking(_hintData.Tile_1, _hintData.Tile_2);
                        break;
                    }
                }
            }

            if (_foundTile is null)
            {
                print("No matching tile found. Selecting nearest random pair.");
                SelectTwoRandomMatchingTiles();
            }
        }

        private void SelectTwoRandomMatchingTiles()
        {
            var allTiles = GridGenerationHandler.GridView.PathData.Values;
            var matchingTilePairs = new List<(Tile, Tile)>();

            foreach (var tile1 in allTiles)
            {
                foreach (var tile2 in allTiles)
                {
                    if (tile1 != tile2 &&
                        tile1.ID != tile2.ID &&
                        tile1.ITileHandler.CurrentItem != null &&
                        tile2.ITileHandler.CurrentItem != null &&
                        tile1.TileState == TileStates.FlipAble &&
                        tile2.TileState == TileStates.FlipAble &&
                        TilesWithSameType(tile1.ITileHandler, tile2.ITileHandler) &&
                        WithSameSubType(tile1.ITileHandler, tile2.ITileHandler))
                    {
                        matchingTilePairs.Add((tile1, tile2));
                        break;
                    }
                }
            }

            if (matchingTilePairs.Count > 0)
            {
                var randomPair = matchingTilePairs[Random.Range(0, matchingTilePairs.Count)];
                print($"Random Pair Found: Tile 1 - {randomPair.Item1.ID}, Tile 2 - {randomPair.Item2.ID}");
                var hintData = new HintPairsData()
                {
                    Tile_1 = randomPair.Item1,
                    Tile_2 = randomPair.Item2
                };
                _backupHintData.Add(hintData);
                StartBlinking(hintData.Tile_1, hintData.Tile_2);
            }
            else
            {
                print("No matching pairs found in the grid.");
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

            foreach (var hintPair in _backupHintData)
            {
                hintPair.ResetTiles(hintPair.Tile_1, hintPair.Tile_2, _tile1, _tile2);
            }
        }

        private void StartBlinking(Tile tile1, Tile tile2)
        {
            _tile1 = tile1.transform.DOScale(1.1f, .5f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
            _tile2 = tile2.transform.DOScale(1.1f, .5f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
            // var tile1Material = tile1.GetRenderer().material;
            // var tile2Material = tile2.GetRenderer().material;
            // var originalColor = tile1Material.color;
            // var blinkColor = Color.white;
            //
            // var blinkingSequence = DOTween.Sequence();
            // blinkingSequence.Append(tile1Material.DOColor(blinkColor, 0.5f).SetLoops(-1, LoopType.Yoyo));
            // blinkingSequence.Join(tile2Material.DOColor(blinkColor, 0.5f).SetLoops(-1, LoopType.Yoyo));
            // blinkingSequence.Append(tile1Material.DOColor(originalColor, 0.5f).SetLoops(-1, LoopType.Yoyo));
            // blinkingSequence.Join(tile2Material.DOColor(originalColor, 0.5f).SetLoops(-1, LoopType.Yoyo));
            // blinkingSequence.Play();
        }
    }

    [Serializable]
    public class HintPairsData
    {
        [HideInInspector] public Tile Tile_1;
        [HideInInspector] public Tile Tile_2;
        [HideInInspector] public Color OriginalColor;

        public void ResetTiles(Tile tile1, Tile tile2, Tween t1, Tween t2)
        {
            if (tile1 != null && tile2 != null)
            {
                t1?.Kill();
                t2?.Kill();
                tile1.transform.localScale = Vector3.one;
                tile2.transform.localScale = Vector3.one;
                // var renderer1 = Tile_1.GetRenderer();
                // var renderer2 = Tile_2.GetRenderer();
                // if (renderer1 != null && renderer2 != null)
                // {
                //     renderer1.material.color = OriginalColor;
                //     renderer2.material.color = OriginalColor;
                // }
            }
        }
    }
}