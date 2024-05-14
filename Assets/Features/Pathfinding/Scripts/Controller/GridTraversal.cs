using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.PathFinding
{
    public class GridTraversal : MonoBehaviour
    {
        [SerializeField] private GridGenerator _gridGenerator;
        [ShowInInspector] private List<List<Tile>> _connectedComponents = new List<List<Tile>>();
        private List<Tile> _traversableTiles = new List<Tile>();

        public void TraverseGrid()
        {
            var visited = new HashSet<Tile>();
            foreach (Tile tile in _gridGenerator._gridView.tilesGrid)
            {
                if (!visited.Contains(tile) && tile.TileState == TileStates.Walkable)
                {
                    var connectedComponent = new List<Tile>();
                    DFS(tile, visited, connectedComponent);
                    _connectedComponents.Add(connectedComponent);
                }
            }
            StartBlinkingOnTraversableTiles();
        }

        private void DFS(Tile current, HashSet<Tile> visited, List<Tile> connectedComponent)
        {
            visited.Add(current);
            connectedComponent.Add(current);
            foreach (Tile neighbor in _gridGenerator.FindAdjacentCells(current))
            {
                if (!visited.Contains(neighbor) && neighbor.TileState == TileStates.Walkable)
                {
                    DFS(neighbor, visited, connectedComponent);
                }
            }
        }
        
        private void StartBlinkingOnTraversableTiles()
        {
            foreach (var component in _connectedComponents)
            {
                foreach (var tile in component)
                {
                    _traversableTiles.Add(tile);
                    tile.StartBlinking();
                }
            }
        }

        public void StopBlinkingOnTraversableTiles()
        {
            foreach (var tile in _traversableTiles)
            {
                tile.StopBlinking();
            }
            _traversableTiles.Clear();
        }

        public void OnTargetTileSelected()
        {
            StopBlinkingOnTraversableTiles();
        }
    }
}