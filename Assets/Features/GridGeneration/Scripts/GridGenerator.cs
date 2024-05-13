using System.Collections.Generic;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    public class GridGenerator : MonoBehaviour, IGridGenerator
    {
        [BoxGroup("References"), SerializeField]
        DumyLevelManager _levelManager;

        [BoxGroup("References"), SerializeField]
        public GridView _gridView;

        [BoxGroup("References"), ShowInInspector]
        private Cell[,] grid;

        [FoldoutGroup("References/Values"), SerializeField] [Range(.5f, 10)]
        public float _spacingZ = 2f;

        [FoldoutGroup("References/Values"), SerializeField] [Range(.5f, 10)]
        public float _spacingX = 3f;

        [BoxGroup("References"), SerializeField]
        List<string> ad;

        public Cell cell;
        [SerializeField] LevelData _levelData;

        private void Start()
        {
            _levelData = _levelManager.GetCurrentLevel;
            GenerateGrid();
            _gridView.Init(new GridViewDataModel()
            {
                GridHandler = this,
                LevelData = _levelData,
                CellGrid = grid
            });
            _gridView.AssignItemContainer(_levelData);
            _gridView.SpawnGrid(grid, _levelData);
        }

        void GenerateGrid()
        {
            grid = new Cell[_levelData.Width, _levelData.Height];
            var startPos = Vector3.zero;
            var startX = -(_levelData.Width - 1) * _spacingX / 2f;
            var startZ = (_levelData.Height - 1) * _spacingZ * Mathf.Sqrt(3) / 2f;

            for (var row = 0; row < _levelData.Width; row++)
            {
                for (var col = 0; col < _levelData.Height; col++)
                {
                    var _x = startPos.x + startX + row * _spacingX;
                    var _z = startPos.z + startZ - col * _spacingZ * Mathf.Sqrt(3);

                    if (row % 2 != 0)
                    {
                        _z -= _spacingZ * Mathf.Sqrt(3) / 2f;
                    }

                    var hexPosition = new Vector3(_x, startPos.y, _z);
                    var prefabNew = new Cell();
                    var id = $"{row}-{col}";
                    prefabNew.Init(hexPosition, col, row, this);
                    grid[row, col] = prefabNew;
                }
            }
        }

        public Cell[,] Grid()
        {
            return grid;
        }

        public List<Cell> FindAdjacentCells(Cell cell)
        {
            int row = cell.Row;
            int col = cell.Col;
            var neighbors = new List<Cell>();

            int parity = row % 2;

            for (int direction = 0; direction < OddQDirectionDifferences[parity].Length; direction++)
            {
                OffsetCoord neighborCoord = OddQOffsetNeighbor(new OffsetCoord(col, row), direction);
                int neighborRow = neighborCoord.row;
                int neighborCol = neighborCoord.col;

                if (neighborRow >= 0 && neighborRow < _levelData.Width &&
                    neighborCol >= 0 && neighborCol < _levelData.Height)
                {
                    neighbors.Add(grid[neighborRow, neighborCol]);
                }
            }

            return neighbors;
        }

        public List<Tile> FindAdjacentCells(Tile cell)
        {
            int row = cell.r;
            int col = cell.c;
            var neighbors = new List<Tile>();

            int parity = row % 2;

            for (int direction = 0; direction < OddQDirectionDifferences[parity].Length; direction++)
            {
                OffsetCoord neighborCoord = OddQOffsetNeighbor(new OffsetCoord(col, row), direction);
                int neighborRow = neighborCoord.row;
                int neighborCol = neighborCoord.col;

                if (neighborRow >= 0 && neighborRow < _levelData.Width &&
                    neighborCol >= 0 && neighborCol < _levelData.Height)
                {
                    neighbors.Add(_gridView.tilesGrid[neighborRow, neighborCol]);
                }
            }

            return neighbors;
        }

        struct OffsetCoord
        {
            public int col;
            public int row;

            public OffsetCoord(int row, int col)
            {
                this.col = col;
                this.row = row;
            }
        }

        int[][][] OddQDirectionDifferences =
        {
            // even cols 
            new int[][]
            {
                new int[] { +1, 0 }, new int[] { +1, -1 }, new int[] { 0, -1 },
                new int[] { -1, -1 }, new int[] { -1, 0 }, new int[] { 0, +1 }
            },
            // odd cols 
            new int[][]
            {
                new int[] { +1, +1 }, new int[] { +1, 0 }, new int[] { 0, -1 },
                new int[] { -1, 0 }, new int[] { -1, +1 }, new int[] { 0, +1 }
            }
        };

        OffsetCoord OddQOffsetNeighbor(OffsetCoord hex, int direction)
        {
            int parity = hex.col & 1;
            var diff = OddQDirectionDifferences[parity][direction];
            return new OffsetCoord(hex.col + diff[0], hex.row + diff[1]);
        }
    }
}