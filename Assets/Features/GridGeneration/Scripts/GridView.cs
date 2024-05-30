using System.Collections.Generic;
using Features.Haptics.Interfaces;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
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
        Dictionary<string, Collectable> _collectables = new();
        [BoxGroup("References")] public IPlayerCollectible Goals;
        [BoxGroup("References")] public Transform NonInteractiveData;

       
        [BoxGroup("References"), ShowInInspector]
        public Tile[,] tilesGrid;

        Tile tile;
        public Dictionary<string, Tile> PathData => _tiles;
        public IGridGenerator GridHandler => _gridGenerator;
        public bool isTesting;
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
        public Tile PlayerTile { get; set; }
        public Tile GetFoundTile(string id)
        {
            if (_tiles.TryGetValue(id, out Tile _tile))
            {
                tile = _tile;
            }
            return tile;
        }

        public GameStates States;

        public void Init(GridViewDataModel model)
        {
            _gridGenerator = model.GridHandler;
            GameController.SetState(GameStates.Play);
            States = GameStates.Play;
        }
[Button]
        public void SetState(GameStates states)
        {
            GameController.SetState(states);
            States = states;
        }
        public void AssignItemContainer(LevelData data)
        {
            foreach (var container in data.Containers)
            {
                _itemDictionary.Add(container.itemType, container.spawnItemContainer);
            }

            foreach (var collectable in data.collectableContainer.collectables)
            {
                string id = collectable.collectableType + collectable.typeOfBooster.ToString();
                _collectables.Add(id,collectable);
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
                            if (isTesting)
                            {
                                _tile.Flip(false,false);
                            }
                           
                            _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                _gridViewReferences.playerController);
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            if (cellData.tilePlacement == TilePlacements.Item)
                            {
                                _tile.TileState = TileStates.FlipAble;
                                _gridViewReferences.moves++;
                                DisableTile(levelData.Matrix[row, col], _tile);
                            }
                            else if (cellData.tilePlacement == TilePlacements.Hurdle)
                            {
                                _tile.TileState = TileStates.NotBreakable;
                                
                                if (cellData.typeOfHurdle == TypesOfHurdle.NonBreakable)
                                {
                                    var hurdle = Instantiate(_gridViewReferences._prefabTileStone);
                                    hurdle.transform.position = tilePosition;
                                    _tile.gameObject.SetActive(false);
                                    NonInteractiveData.SetParent(hurdle.transform);
                                }
                                else if (cellData.typeOfHurdle == TypesOfHurdle.Enemys)
                                {
                                    var enemy = Instantiate(_gridViewReferences.enemy);
                                    enemy.gridView = this;
                                    enemy.MyTile = _tile;
                                    _tile.SetNonFlipAble(enemy.gameObject,Vector3.one);
                                    _tile._Enemy = enemy;
                                    enemy.Init(_gridViewReferences.player.transform,cellData.enemyHealth,levelData.IsEnemy);
                                    enemy._playerController = _gridViewReferences.playerController;
                                }
                            }
                          

                            _tiles.Add($"{row}{col}", _tile);
                            break;
                        }
                        case TileType.Walkable:
                        {
                            _tile.SetTransform(tilePosition, 180);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _tile.TileState = TileStates.Walkable;
                            if (cellData.IsPlayer)
                            {
                                _gridViewReferences.playerController.Player.lastTile = tilesGrid[row, col];
                                PlayerTile = _gridViewReferences.playerController.Player.lastTile;
                                _gridViewReferences.player.Init(new Vector3(tilePosition.x, 1, tilePosition.z), PlayerTile);
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this, _gridViewReferences.player,
                                    _gridViewReferences.playerController);
                                if (levelData.IsEnemy)
                                {
                                    _gridViewReferences.player._counter.gameObject.SetActive(true);
                                }
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
                            if (cellData.walkableGate)
                            {
                                _tile.isGate = true;
                                _tile.TileState = TileStates.Walkable;
                                _tile.Init(_gridViewReferences.enableWithOutRotation, grid[row, col], this, null,
                                    _gridViewReferences.playerController);
                            }
                            else
                            {
                                _tile.Init(_gridViewReferences.disable, grid[row, col], this, null,
                                    _gridViewReferences.playerController);
                                _tile.TileState = TileStates.Gate;
                            }
                           
                            _tile.SetTransform(tilePosition, 0);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _gridViewReferences.Gate.position = new Vector3(tilePosition.x, .6f, tilePosition.z);
                            _tile.requiredCollectableItems = cellData.typeOfCollectableItems;
                            Goals.SetGate(_tile,cellData.IsCage);
                            break;
                        }
                        case TileType.Boosters:
                        {
                            
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            if (cellData.typeOfCollectableItems == CollectableItems.Key)
                            {
                                _tile.SetTransform(tilePosition, 180);
                                _tile.TileState = TileStates.Walkable;
                                _tile.Init(_gridViewReferences.enable, grid[row, col], this,null, _gridViewReferences.playerController);
                                tilePosition.y = .6f;
                                if (_collectables.TryGetValue(levelData.Matrix[row, col].typeOfCollectableItems+levelData.Matrix[row, col].typeOfBooster.ToString(), out Collectable collectable))
                                {
                                    var collectablePrefab = Instantiate(collectable);
                                    collectablePrefab.Init(cellData.linkedID);
                                    _tile.SetCollectable(collectablePrefab);
                                }
                                Goals.AddOrUpdateGoals(CollectableItems.Key,cellData.typeOfBooster,1);
                            }
                            else if (cellData.typeOfCollectableItems == CollectableItems.ChestBox)
                           {
                               _tile.SetTransform(tilePosition, 0);
                               _tile.TileState = TileStates.ChestBox;
                               Goals.AddOrUpdateGoals(CollectableItems.ChestBox,cellData.typeOfBooster,1);
                               _tile.Init(_gridViewReferences.disable, grid[row, col], this,null, _gridViewReferences.playerController);
                               if (_collectables.TryGetValue(levelData.Matrix[row, col].typeOfCollectableItems+levelData.Matrix[row, col].typeOfBooster.ToString(), out Collectable collectable) )
                               {
                                   var collectablePrefab = Instantiate(collectable);
                                   _tile.SetCollectable(collectablePrefab);
                               }
                           }
                            else if (cellData.typeOfCollectableItems == CollectableItems.Gate)
                            {
                                _tile.SetTransform(tilePosition, 0);
                                _tile.TileState = TileStates.ChestBox;
                            //    Goals.AddOrUpdateGoals(CollectableItems.ChestBox,cellData.typeOfBooster,1);
                                _tile.Init(_gridViewReferences.disable, grid[row, col], this,null, _gridViewReferences.playerController);
                                if (_collectables.TryGetValue(levelData.Matrix[row, col].typeOfCollectableItems+levelData.Matrix[row, col].typeOfBooster.ToString(), out Collectable collectable) )
                                {
                                    var collectablePrefab = Instantiate(collectable);
                                    _tile.SetCollectable(collectablePrefab);
                                }
                            }
                            break;
                        }
                        case TileType.PowerUp:
                        {
                            _tile.SetTransform(tilePosition, 180);
                            _tile.SetID(row, col, grid[row, col]);
                            _tiles.Add($"{row}{col}", _tile);
                            _tile.TileState = TileStates.Walkable;
                            _tile.gameObject.SetActive(true);
                            var powerUp = Instantiate(_gridViewReferences.powerUp);
                            powerUp.UpdateLvl(cellData.powerUPLVL);
                            tilePosition.y = .8f;
                            powerUp.transform.position = tilePosition;
                            _tile.Init(_gridViewReferences.enable, grid[row, col], this,null, _gridViewReferences.playerController);
                            break;
                        }
                          
                            
                    }
                }
            }

            _gridViewReferences.CalculateMoves(levelData.movesMultiplier);
            _gridViewReferences.tutorialManager.PlayTutorial();
            _gridViewReferences.SetUIHandler(UIHandler);
            Goals.SetSlogan();
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

        
        public void UpdateMoves(int value)
        {
            _gridViewReferences.UpdateMoves(value);
        }

        public UIController UIHandler { get; set; }

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
                Debug.Log(data.typeOfRandomObjects.ToString());
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