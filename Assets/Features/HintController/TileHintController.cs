using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sablo.Gameplay.Movement;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Sablo.Gameplay.TilesHint
{
    public class TileHintController : MonoBehaviour, ITileHintController
    {
        [SerializeField] List<Tile> _tempFlipAbleTilesList = new List<Tile>();
        [SerializeField] List<HintPairsData> _backupHintData = new List<HintPairsData>();
        [SerializeField] HintPairsData _hintData;
        private ITile _randomTile;
        private Tile _foundTile;
        [SerializeField] Booster _booster;
        public IGridGenerator GridGenerationHandler { get; set; }
        public IPlayer SelectedPlayer { get; set; }
        public IGridView GridViewHandler;


        void Start()
        {
            _booster.Action.AddListener((IndicateSimilarTiles));
        }

        private bool TilesWithSameType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.TypeItem == selectedTile2.CurrentItem.TypeItem;

        private bool WithSameSubType(ITile selectedTile1, ITile selectedTile2) =>
            selectedTile1.CurrentItem.GetItemObject().ToString() ==
            selectedTile2.CurrentItem.GetItemObject().ToString();

        public void IndicateSimilarTiles()
        {
            if (Check())
            {
                _booster.EnableBoosterButton(false);
                return;
            }
            
            
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
                print(_randomTile);
                SearchInGrid(_randomTile);
            }
            else
            {
                print("No valid random tile found. Selecting nearest random pair.");
                SelectTwoRandomMatchingTiles();
            }

            

        }

        private bool Check()
        {
            int counter=0;
            bool condition = false;
            foreach (var VARIABLE in GridViewHandler.PathData)
            {
                if (VARIABLE.Value.TileState == TileStates.Walkable)
                {
                    counter++;
                }
               
            }

            if (counter >= GridViewHandler.PathData.Count-3)
            {
                _booster.stop = true;
                condition = true;
            }
            return condition;
        }

        private void SearchInGrid(ITile randomlySelectedTile)
        {
            _foundTile = null;
            foreach (var tileData in GridViewHandler.PathData)
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
                        print(tileData.Value.ITileHandler.CurrentItem.TypeItem);
                        print(randomlySelectedTile.CurrentItem.TypeItem);
                        var isMatching = tileData.Value.ITileHandler.CurrentItem.TypeItem ==
                                         randomlySelectedTile.CurrentItem.TypeItem;
                        print("Items are matching: " + isMatching);
                        _hintData = new HintPairsData()
                        {
                            Tile_1 = randomlySelectedTile as Tile,
                            Tile_2 = tileData.Value.ITileHandler as Tile,
                            OriginalColor = _foundTile.GetRenderer().material.color
                        };
                        _backupHintData.Add(_hintData);
                        StartBlinking(_hintData.Tile_1, _hintData.Tile_2);
                       _booster.EnableBoosterButton(false);
                        break;
                    }
                    else
                    {
                        print("Tile not found");
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
            var allTiles = GridViewHandler.PathData.Values;
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

        public void ResetHintMatchedTiles(bool isMerge)
        {
            _randomTile = null;
            _foundTile = null;

            foreach (var hintPair in _backupHintData)
            {
                if (hintPair.Tile_1.TileState == TileStates.Walkable)
                {
                    
                    print("mine merge");
                    hintPair.Tile_1.ChangeColor(Configs.GameConfig.TileOrignalColor); 
                    
                }
                else
                {
                    if (hintPair.Tile_1.TileState == TileStates.FlipAble)
                    {
                        hintPair.Tile_1.ChangeHintColor(Configs.GameConfig.TileHintOrignalColor,true); 
                    }
                  //  hintPair.Tile_1.ChangeHintColor(Configs.GameConfig.TileHintOrignalColor,true); 
                    print(" not mine merge");
                }
                if (hintPair.Tile_2.TileState == TileStates.Walkable)
                {
                    print("mine merge");
                    hintPair.Tile_2.ChangeColor(Configs.GameConfig.TileOrignalColor); 
                   
                }
                else
                {
                    print(" not mine merge");
                    if (hintPair.Tile_2.TileState == TileStates.FlipAble)
                              hintPair.Tile_2.ChangeHintColor(Configs.GameConfig.TileHintOrignalColor,true); 
                }
                
                hintPair.ResetTiles(hintPair.Tile_1, hintPair.Tile_2, t1, t2,isMerge);
            }
            //_tempFlipAbleTilesList.Clear();
            _backupHintData.Clear();
            _booster.EnableBoosterButton(!Check());
            //Check();
        }

        Tween t1, t2, h1, h2;

        private void StartBlinking(Tile tile1, Tile tile2)
        {
            tile1.ChangeHintColor(Configs.GameConfig.TileHintColor,false); 
            tile2.ChangeHintColor(Configs.GameConfig.TileHintColor,false);
            t1 = tile1.transform.DOLocalMoveY(.6f, .5f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
            t2 = tile2.transform.DOLocalMoveY(.6f, .5f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
        }
    }

    [Serializable]
    public class HintPairsData
    {
        [HideInInspector] public Tile Tile_1;
        [HideInInspector] public Tile Tile_2;
        [HideInInspector] public Color OriginalColor;

        public void ResetTiles(Tile tile1, Tile tile2, Tween t1, Tween t2,bool isMerge)
        {
            if (tile1 != null && tile2 != null)
            {
                t1?.Kill();
                t2?.Kill();
                tile1.transform.DOLocalMoveY(0, .1f);
                tile2.transform.DOLocalMoveY(0, .1f);
            }
        }
    }
}