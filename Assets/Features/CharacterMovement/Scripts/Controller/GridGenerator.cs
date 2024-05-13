using System.Collections.Generic;
using Sablo.Gameplay.Pathfinding;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class GridGenerator : MonoBehaviour, IGridGenerator
    {
        [SerializeField] private SquareNode _cellPrefab;
        [SerializeField] private GameObject _playerPrefab;
        [SerializeField] private GameObject _gridParent;
        [SerializeField] private LevelData _levelData;
        [ShowInInspector] public Dictionary<string, Node> path = new Dictionary<string, Node>();

        private SquareNode[,] grid;

        public IInputController InputControllerHandler { get; set; }

        public SquareNode[,] GetGrid()
        {
            return grid;
        }

        private void Start()
        {
            GenerateGrid();
        }

        private void GenerateGrid()
        {
            grid = new SquareNode[_levelData.Width, _levelData.Height];
            var rows = _levelData.Width;
            var cols = _levelData.Height;
            GameObject playerInstance = null;

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    switch (_levelData.Matrix[i, j].tileType)
                    {
                        case TileType.Walkable:
                        {
                            Vector3 cellPosition = new Vector3(i, 0, j);
                            var gridCell = Instantiate(_cellPrefab, cellPosition, Quaternion.identity);
                            path.Add($"{i}{j}", gridCell);
                            gridCell.IsHurdle = false;
                            gridCell.name = $"Cell_{i}x{j}";
                            gridCell.transform.parent = _gridParent.transform;
                            gridCell.Position = cellPosition;
                            SquareNode node = new SquareNode(cellPosition, this);
                             gridCell.Init(new SquareCoordinates() { Position = cellPosition });
                            node.IsPlayerStanding = _levelData.Matrix[i, j].IsPlayer;
                            grid[i, j] = node;
                            if (node.IsPlayerStanding && !playerInstance)
                            {
                                playerInstance = Instantiate(_playerPrefab, new Vector3(i, 1, j), Quaternion.identity);
                                InputControllerHandler.SetStartNode(node);
                            }

                            break;
                        }
                        case TileType.Disable:
                        {
                            // Vector3 cellPosition = new Vector3(i, 0, j);
                            // var gridCell = Instantiate(_cellPrefab, cellPosition, Quaternion.identity);
                            // gridCell.IsHurdle = true;
                            // gridCell.name = $"Cell_{i}x{j}";
                            // gridCell.transform.parent = _gridParent.transform;
                            // gridCell.Position = cellPosition;
                            // gridCell.Init(new SquareCoords{Position = new Vector3(i, 0, j)});
                            // SquareNode node = new SquareNode(cellPosition, this);
                            // grid[i, j] = node;
                            break;
                            // continue;
                        }
                    }
                }
            }
        }

        public SquareNode GetTileAtPosition(Vector3 position)
        {
            int x = Mathf.RoundToInt(position.x);
            int z = Mathf.RoundToInt(position.z);

            if (x < 0 || x >= _levelData.Width || z < 0 || z >= _levelData.Height)
            {
                return null;
            }

            return grid[x, z];
        }
    }
}
