using System.Collections;
using System.Collections.Generic;
using Features.GridGeneration.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Sablo.Gameplay.PathFinding
{
    public class GridTraversal : MonoBehaviour
    {
        // [SerializeField] private GridGenerator _gridGenerator;
        // [ShowInInspector] private List<List<Tile>> _connectedComponents = new List<List<Tile>>();
        // [ShowInInspector] private List<Tile> _traversableTiles = new List<Tile>();
        //
        // private bool _continueBlinking = true;
        // private Tile _playerTile;
        //
        // public void TraverseGrid()
        // {
        //     var visited = new HashSet<Tile>();
        //     _connectedComponents.Clear();
        //    _playerTile = _gridGenerator._gridView.PlayerTile;
        //
        //     if (_playerTile.TileState == TileStates.Walkable)
        //     {
        //         var connectedComponent = new List<Tile>();
        //         DFS(_playerTile, visited, connectedComponent);
        //         _connectedComponents.Add(connectedComponent);
        //     }
        //
        //     _continueBlinking = true;
        //     StartBlinkingOnTraversableTiles();
        // }
        //
        // public void DFS(Tile current, HashSet<Tile> visited, List<Tile> connectedComponent)
        // {
        //     visited.Add(current);
        //     connectedComponent.Add(current);
        //     foreach (Tile neighbor in _gridGenerator.FindAdjacentCells(current))
        //     {
        //         if (!visited.Contains(neighbor) && neighbor.TileState == TileStates.Walkable)
        //         {
        //             DFS(neighbor, visited, connectedComponent);
        //         }
        //     }
        // }
        //
        // private void StartBlinkingOnTraversableTiles()
        // {
        //     _playerTile = _gridGenerator._gridView._gridViewReferences.playerController.Player.lastTile;
        //     _traversableTiles.Clear();
        //     foreach (var component in _connectedComponents)
        //     {
        //         foreach (var tile in component)
        //         {
        //             if (tile != _playerTile)
        //             {
        //                 _traversableTiles.Add(tile);
        //             }
        //         }
        //     }
        //
        //     StartCoroutine(BlinkTraversableTiles());
        // / }
        // //
        // // private IEnumerator BlinkTraversableTiles()
        // // {
        // //     while (_continueBlinking)
        // //     {
        // //         foreach (var tile in _traversableTiles)
        // //         {
        // //             tile.StartBlinking();
        // //         }
        // //
        // //         yield return new WaitForSeconds(0.75f);
        // //         foreach (var tile in _traversableTiles)
        // //         {
        // //             tile.StopBlinking();
        // //         }
        // //
        // //         yield return new WaitForSeconds(0.75f);
        // //     }
        // // }
        // //
        // // public void StopBlinkingOnTraversableTiles()
        // // {
        // //     _continueBlinking = false;
        // //     foreach (var tile in _traversableTiles)
        // //     {
        // //         tile.StopBlinking();
        // //     }
        // //
        // //     _traversableTiles.Clear();
        // // }
        //
        // public void OnTargetTileSelected()
        // {
        //     StopBlinkingOnTraversableTiles();
        // }
    }
}