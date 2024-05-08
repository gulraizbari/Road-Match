using System.Collections.Generic;
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
        
        Tile tile;
        public void Init(IGridGenerator generator)
        {
            _gridGenerator = generator;
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
                    // var id = $"{row}-{col}";
                    // prefabNew.Init(hexPosition, col, row);
                    // prefabNew.name = id;
                    // grid[row, col] = prefabNew;
                    // grid[row, col].transform.parent = transform;
                }
            }
        }

        
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
    }
}