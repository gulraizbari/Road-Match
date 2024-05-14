using System.Collections.Generic;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class GridView : MonoBehaviour, IGridView
    {
        private IGridGenerator _gridGenerator;
        GridViewDataModel _dataModel;

        [BoxGroup("References"), SerializeField]
        Tile _prefab;

        [BoxGroup("References"), ShowInInspector]
        Dictionary<string, Tile> _tiles = new();

        [BoxGroup("References"), SerializeField]
        Material _disable;

        [BoxGroup("References"), SerializeField]
        Material _enable;

        [BoxGroup("References"), SerializeField]
        private PlayerController _playerController;

        [BoxGroup("References"), ShowInInspector]
        Dictionary<ItemType, List<Item>> _itemDictionary = new();

        [BoxGroup("References"), ShowInInspector]
        public Tile[,] tilesGrid;

        [BoxGroup("References"), SerializeField] 
        Player _player;

        public Transform Gate;
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
                    var _tile = Instantiate(_prefab, transform);
                    _tile.gameObject.SetActive(false);
                    _tile.TileState = TileStates.NotWalkable;
                    tilesGrid[row, col] = _tile;
                    var tilePosition = grid[row, col].Position;
                    switch (levelData.Matrix[row, col].tileType)
                    {
                        case TileType.Disable:
                        {
                            //grid[row, col].IsWalkable = true;
                            // var _tile = Instantiate(_prefab, transform);
                            _tile.Init(_disable, grid[row, col], this, null, _playerController);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            if (levelData.Matrix[row, col].tilePlacement == TilePlacements.Item)
                            {
                                DisableTile(levelData.Matrix[row, col], _tile);
                            }
                            else if (levelData.Matrix[row, col].tilePlacement == TilePlacements.Hurdle)
                            {
                                _tile.TileState = TileStates.NotBreakable;
                            }

                            _tiles.Add($"{row}{col}", tile);
                            break;
                        }
                        case TileType.Walkable:
                        {
                            //var _tile = Instantiate(_prefab, transform);

                            _tile.SetTransform(tilePosition, 180);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            if (levelData.Matrix[row, col].IsPlayer)
                            {
                                PlayerTile = tilesGrid[row, col];
                                _tile.TileState = TileStates.Walkable;
                                _player.Init(new Vector3(tilePosition.x, 1, tilePosition.z), PlayerTile);
                                _tile.Init(_enable, grid[row, col], this, _player, _playerController);
                            }
                            else
                            {
                                _tile.Init(_enable, grid[row, col], this, null, _playerController);
                            }

                            break;
                        }

                        case TileType.Gate:
                        {
                            _tile.Init(_disable, grid[row, col], this, null, _playerController);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _tile.TileState = TileStates.Walkable;
                            Gate.position = new Vector3(tilePosition.x, .6f, tilePosition.z);
                            break;
                        }
                        case TileType.Gift:
                            break;
                    }
                }
            }
        }

        private Tile SpawnTile(Cell cell, Vector3 tilePosition, float zRot)
        {
            var _tile = Instantiate(_prefab, transform);
            tile.Init(_enable, cell, this, null, _playerController);
            tile.SetTransform(tilePosition, zRot);
            //  tile.SetID(cell.Row, cell.Col);
            _tiles.Add($"{cell.Row}{cell.Col}", tile);
            return _tile;
        }

        public void ChangeTileMaterial(bool isGreen, Renderer renderer)
        {
            if (isGreen)
            {
                renderer.material = _enable;
            }
            else
            {
                renderer.material = _disable;
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
                //var itemsOfType = _itemDictionary[type];
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