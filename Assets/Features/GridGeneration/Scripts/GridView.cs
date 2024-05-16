using System.Collections.Generic;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class GridView : MonoBehaviour, IGridView
    {
        private IGridGenerator _gridGenerator;
        GridViewDataModel _dataModel;

        [BoxGroup("References"), SerializeField]
        GridViewReferences _gridViewReferences;

        [BoxGroup("References"), ShowInInspector]
        Dictionary<string, Tile> _tiles = new();

        [BoxGroup("References"), ShowInInspector]
        Dictionary<ItemType, List<Item>> _itemDictionary = new();

        [BoxGroup("References"), ShowInInspector]
        public Tile[,] tilesGrid;

        Tile tile;

        public Dictionary<string, Tile> PathData
        {
            get => _tiles;
        }

        public IMergeController MergeController { get; set; }
        public IHapticController HapticHandler { get; set; }
        public Tile PlayerTile { get; set; }

        public Tile GetFoundTile(string id)
        {
            if (_tiles.TryGetValue(id, out Tile _tile))
            {
                tile = _tile;
            }

            return tile;
        }


        public void Init(GridViewDataModel model)
        {
            _gridGenerator = model.GridHandler;
        }

        public void AssignItemContainer(LevelData data)
        {
            foreach (var container in data.Containers)
            {
                _itemDictionary.Add(container.itemType, container.spawnItemContainer);
            }
        }

        public void SpawnGrid(Cell[,] grid, LevelData levelData)
        {
            tilesGrid = new Tile[levelData.Width, levelData.Height];
            for (var row = 0; row < levelData.Width; row++)
            {
                for (var col = 0; col < levelData.Height; col++)
                {
                    var _tile = Instantiate(_gridViewReferences._prefabTile, transform);
                    _tile.gameObject.SetActive(false);
                    _tile.TileState = TileStates.NotWalkable;
                    tilesGrid[row, col] = _tile;
                    var tilePosition = grid[row, col].Position;
                    switch (levelData.Matrix[row, col].tileType)
                    {
                        case TileType.Disable:
                        {
                            _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                _gridViewReferences.playerController, _gridViewReferences._gridTraversal, _gridViewReferences._colorEffect);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            if (levelData.Matrix[row, col].tilePlacement == TilePlacements.Item)
                            {
                                DisableTile(levelData.Matrix[row, col], _tile);
                            }
                            else if (levelData.Matrix[row, col].tilePlacement == TilePlacements.Hurdle)
                            {
                                _tile.TileState = TileStates.NotBreakable;
                                var hurdle = Instantiate(_gridViewReferences._prefabTileStone);
                                hurdle.transform.position = tilePosition;
                            }

                            _tiles.Add($"{row}{col}", tile);
                            break;
                        }
                        case TileType.Walkable:
                        {
                            _tile.SetTransform(tilePosition, 180);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            if (levelData.Matrix[row, col].IsPlayer)
                            {
                                PlayerTile = tilesGrid[row, col];
                                _tile.TileState = TileStates.Walkable;
                                _gridViewReferences.player.Init(new Vector3(tilePosition.x, 1, tilePosition.z), PlayerTile);
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this, _gridViewReferences.player,
                                    _gridViewReferences.playerController, _gridViewReferences._gridTraversal, _gridViewReferences._colorEffect);
                            }
                            else
                            {
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this, null,
                                    _gridViewReferences.playerController, _gridViewReferences._gridTraversal, _gridViewReferences._colorEffect);
                            }

                            break;
                        }

                        case TileType.Gate:
                        {
                            _tile.TileState = TileStates.Gate;
                            _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                _gridViewReferences.playerController, _gridViewReferences._gridTraversal,
                                _gridViewReferences._colorEffect);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _tile.TileState = TileStates.Walkable;
                            _gridViewReferences.Gate.position = new Vector3(tilePosition.x, .6f, tilePosition.z);
                            break;
                        }
                        case TileType.Gift:
                            break;
                    }
                }
            }
        }

        public void ChangeTileMaterial(bool isGreen, Renderer renderer)
        {
            if (isGreen)
            {
                renderer.material = _gridViewReferences.enable;
            }
            else
            {
                renderer.material = _gridViewReferences.disable;
            }
        }

        private void DisableTile(CellData data, Tile tile)
        {
            Item item = new Item();
            if (data.typeOfItem == ItemType.Fruits)
            {
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfFruit));
            }
            else if (data.typeOfItem == ItemType.Vegetables)
            {
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfVegetables));
            }
            else if (data.typeOfItem == ItemType.Animals)
            {
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfAnimals));
            }


            tile.AssignPlacement(item);
        }

        public Item FindItem(ItemType type, object item)
        {
            if (_itemDictionary.TryGetValue(type, out List<Item> data))
            {
                return data.Find(x =>
                    x.Fruit == (Fruits)item || x.Vegetable == (Vegetables)item || x.Animal == (Animals)item);
            }
            else
            {
                return null; // Handle case when type is not found
            }
        }
    }
}