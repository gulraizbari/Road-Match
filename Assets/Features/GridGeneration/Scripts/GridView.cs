using System.Collections.Generic;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace Features.GridGeneration.Scripts
{
    public class GridView : MonoBehaviour, IGridView
    {
        public IGridGenerator _gridGenerator;
        GridViewDataModel _dataModel;

        [BoxGroup("References"), SerializeField]
        public GridViewReferences _gridViewReferences;

        [BoxGroup("References"), ShowInInspector]
        Dictionary<string, Tile> _tiles = new();

        [BoxGroup("References"), ShowInInspector]
        Dictionary<ItemType, List<Item>> _itemDictionary = new();

        [BoxGroup("References"), ShowInInspector]
        Dictionary<CollectableItems, Collectable> _collectables = new();

       
        [BoxGroup("References"), ShowInInspector]
        public Tile[,] tilesGrid;

        Tile tile;
        public Dictionary<string, Tile> PathData => _tiles;
        public Tile GetTile(string id)
        {
           
            if (PathData.TryGetValue(id,out Tile _tile))
            {
                tile = _tile;
            }
            else
            {
                tile = null;
            }
            return tile;
        }

        public IMergeController MergeController { get; set; }
        public IHapticController HapticHandler { get; set; }
        [FormerlySerializedAs("playerCollectible")] public PlayerGoals playerGoal;
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

            foreach (var collectable in data.collectableContainer.collectables)
            {
                _collectables.Add(collectable.collectableType,collectable);
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
                    var cellData = levelData.Matrix[row, col];
                    var tilePosition = grid[row, col].Position;
                    switch (cellData.tileType)
                    {
                        case TileType.Disable:
                        {
                            
                            _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                _gridViewReferences.playerController);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            if (cellData.tilePlacement == TilePlacements.Item)
                            {
                                _gridViewReferences.moves++;
                                DisableTile(levelData.Matrix[row, col], _tile);
                            }
                            else if (cellData.tilePlacement == TilePlacements.Hurdle)
                            {
                                _tile.TileState = TileStates.NotBreakable;
                                var hurdle = Instantiate(_gridViewReferences._prefabTileStone);
                                hurdle.transform.position = tilePosition;
                            }

                            _tiles.Add($"{row}{col}", _tile);
                            break;
                        }
                        case TileType.Walkable:
                        {
                            _tile.SetTransform(tilePosition, 180);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            if (cellData.IsPlayer)
                            {
                                _gridViewReferences.playerController.Player.lastTile = tilesGrid[row, col];
                                PlayerTile = _gridViewReferences.playerController.Player.lastTile;
                                _tile.TileState = TileStates.Walkable;
                                _gridViewReferences.player.Init(new Vector3(tilePosition.x, 1, tilePosition.z), PlayerTile);
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this, _gridViewReferences.player,
                                    _gridViewReferences.playerController);
                            }
                            else
                            {
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this, null,
                                    _gridViewReferences.playerController);
                            }

                            break;
                        }

                        case TileType.Gate:
                        {
                            _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                _gridViewReferences.playerController);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _tile.keyReq = cellData.KeyRequired;
                            _tile.requiredCollectableItems = cellData.typeOfCollectableItems;
                            
                            if (cellData.CanOpen)
                            {
                                _tile.TileState = TileStates.OpenGate;
                            }
                            else
                            {
                                _gridViewReferences.Gate.position = new Vector3(tilePosition.x, .6f, tilePosition.z);
                                _tile.TileState = TileStates.Gate;
                            }
                            break;
                        }
                        case TileType.Boosters:
                          
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            
                          
                            if (cellData.typeOfCollectableItems == CollectableItems.Key)
                            {
                                _tile.SetTransform(tilePosition, 180);
                                _tile.TileState = TileStates.Walkable;
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this,null, _gridViewReferences.playerController);
                                tilePosition.y = .6f;
                                
                                if (_collectables.TryGetValue(levelData.Matrix[row, col].typeOfCollectableItems, out Collectable collectable))
                                {
                                    var collectablePrefab = Instantiate(collectable);
                                    collectablePrefab.Init(cellData.linkedID);
                                    _tile.SetCollectable(collectablePrefab);
                                }
                            }
                            else if (cellData.typeOfCollectableItems == CollectableItems.ChestBox)
                           {
                               _tile.SetTransform(tilePosition, 0);
                               _tile.TileState = TileStates.ChestBox;
                               _tile.Init(_gridViewReferences.disable, grid[row, col], this,null, _gridViewReferences.playerController);
                               if (_collectables.TryGetValue(levelData.Matrix[row, col].typeOfCollectableItems, out Collectable collectable))
                               {
                                   var collectablePrefab = Instantiate(collectable);
                                   _tile.SetCollectable(collectablePrefab);
                               }
                           }
                            
                          
                            break;
                    }
                }
            }

            _gridViewReferences.CalculateMoves();
            _gridViewReferences.tutorialManager.PlayTutorial();
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

        public void ChangeTileMaterial(Tile _tile)
        {
            _tile.ChangeColor(_gridViewReferences.enableWithOutRotation);
        }

        public IGridGenerator GridHandler => _gridGenerator;
        public void UpdateMoves(int value)
        {
            _gridViewReferences.UpdateMoves(value);
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
            else if (data.typeOfItem == ItemType.Random)
            {
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfRandomObjects));
            }


            tile.AssignPlacement(item);
        }

      
        public Item FindItem(ItemType type, object item)
        {
            if (_itemDictionary.TryGetValue(type, out List<Item> data))
            {
                return data.Find(x =>
                    x.Fruit == (Fruits)item || x.Vegetable == (Vegetables)item || x.Animal == (Animals)item  || x.RandomObject == (RandomObjects)item);
            }
            else
            {
                return null; // Handle case when type is not found
            }
        }
        
    }
}