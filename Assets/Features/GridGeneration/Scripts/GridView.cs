using System.Collections.Generic;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class GridView:MonoBehaviour,IGridView
    {
       private IGridGenerator _gridGenerator;
        [BoxGroup("References"),SerializeField]
         Tile _prefab;

        [BoxGroup("References"), ShowInInspector]
        Dictionary<string, Tile> _tiles=new ();

        [BoxGroup("References"), SerializeField]
        Material _disable;
        [BoxGroup("References"), SerializeField]
        Material _enable;
        [BoxGroup("References"), ShowInInspector]
        Dictionary<ItemType, List<Item>> _itemDictionary = new ();

       
        Tile tile;
        public void Init(IGridGenerator generator)
        {
            _gridGenerator = generator;
        }

        public void AssignItemContainer(LevelData data)
        {
            foreach (var container in data.Containers)
            {
                _itemDictionary.Add(container.itemType,container.spawnItemContainer);
            }
        }
        public void SpawnGrid(Cell[,] grid, LevelData levelData)
        {
            for (var row = 0; row < levelData.Width; row++)
            {
                for (var col = 0; col < levelData.Height; col++)
                {
                    var tilePosition= grid[row,col].Position;
                    switch (levelData.Matrix[row, col].tileType)
                    {
                        case TileType.Disable:
                        {
                            var tile = Instantiate(_prefab, transform);
                            tile.Init(_disable,grid[row,col],this);
                            tile.SetTransform(tilePosition,0);
                            tile.SetID(row,col);
                            DisableTile(levelData.Matrix[row, col],tile);
                            _tiles.Add($"{row}{col}",tile);
                            break;
                        }
                        case TileType.Walkable:
                        {
                            var tile = Instantiate(_prefab,transform);
                            tile.Init(_enable,grid[row,col],this);
                            tile.SetTransform(tilePosition,180);
                            tile.SetID(row,col);
                            _tiles.Add($"{row}{col}",tile);
                            break;
                        }
                        case TileType.Empty:
                        {
                            break;
                        }
                        case TileType.Gift:
                            break;
                   
                    }
                }
            }
        }

        public IMergeController MergeController { get; set; }


        public Tile GetFoundTile(string id)
        {
            if (_tiles.TryGetValue(id,out Tile _tile))
            {
                tile = _tile;
            }
            return tile;
        }

        public void ChangeTileMaterial(bool isGreen,Renderer renderer)
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

        private void DisableTile(CellData data,Tile tile)
        {
            Item item = new Item();
            if (data.typeOfItem == ItemType.Fruits)
            {
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfFruit));
            }
            else  if (data.typeOfItem == ItemType.Vegetables)
            { 
                item = Instantiate(FindItem(data.typeOfItem, data.typeOfVegetables));
            }
            tile.AssignPlacement(item);
        }
        public Item FindItem(ItemType type, object item)
        {
            if (_itemDictionary.TryGetValue(type,out List<Item> data))
            {
               //var itemsOfType = _itemDictionary[type];
                return data.Find(x => x.Fruit == (Fruits)item || x.Vegetable == (Vegetables)item);
            }
            else
            {
                return null; // Handle case when type is not found
            }
        }
    }
}