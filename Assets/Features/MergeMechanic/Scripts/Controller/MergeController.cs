using System.Collections.Generic;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sablo.Gameplay.TilesHint;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

public class MergeController : MonoBehaviour, IMergeController
{
    [ShowInInspector] ITile selectedTile1 = null;
    [ShowInInspector] ITile selectedTile2 = null;
    [ShowInInspector] public List<ITile> oldData = new List<ITile>();
    public ParticleSystem mergeParticle;
    public ITileHintController TileHintHandler { get; set; }
    
    private bool SelectedTilesAvailable => selectedTile1 != null && selectedTile2 != null;

    private bool MergeableTiles => selectedTile1.TileState == TileStates.CanMerge && selectedTile2.TileState == TileStates.CanMerge;

    private bool TilesWithSameType => selectedTile1.CurrentItem.TypeItem == selectedTile2.CurrentItem.TypeItem;

    private bool WithSameSubType => selectedTile1.CurrentItem.GetItemObject().ToString() == selectedTile2.CurrentItem.GetItemObject().ToString();

    public void SelectTile(ITile tile)
    {
        if (oldData.Count > 0)
        {
            UnityEvent action = new UnityEvent();
            action.AddListener(CheckCompletion);
            foreach (var data in oldData)
            {
                data.UnSelect(false, 0, 0, action);
            }

            oldData.Clear();
        }

        if (selectedTile1 == null)
        {
            selectedTile1 = tile;
        }
        else
        {
            if (selectedTile1.ID == tile.ID)
            {
                selectedTile1.UnSelect(false, 0.2f, .05f, null);
                selectedTile1 = null;
            }
            else
            {
                selectedTile2 = tile;
                MergeThem();
            }
        }
    }

    private void PerformMerge()
    {
        var _selectedTransform = selectedTile1.PlacementTransform;
        var _newSelectedTransform = selectedTile2.PlacementTransform;
        _selectedTransform.SetParent(null);
        _newSelectedTransform.SetParent(null);
        var centerPoint = (_newSelectedTransform.localPosition + _selectedTransform.localPosition) / 2;
        var distance = Vector3.Distance(_selectedTransform.position, _newSelectedTransform.position);
        var delayTime = Mathf.Clamp(distance * 0.1f, 0.0f, .1f);
        selectedTile1.MergeParticle = selectedTile2.MergeParticle = mergeParticle;
        selectedTile1.OnMerge(centerPoint, delayTime);
        selectedTile2.OnMerge(centerPoint, delayTime);
        selectedTile1 = null;
        selectedTile2 = null;
        SoundManager.Instance.PlayTileMerge(1);
    }

    private void MergeThem()
    {
        if (SelectedTilesAvailable)
        {
            if (MergeableTiles)
            {
                if (TilesWithSameType)
                {
                    if (WithSameSubType)
                    {
                        PerformMerge();

                    }
                    else
                    {
                        UnSelectTiles();
                    }
                }
                else
                {
                    UnSelectTiles();
                }
            }
            else
            {
                print($"s1 {selectedTile1.TileState}, s2 {selectedTile2.TileState}");
                PerformMerge();
            }
        }
        else
        {
            print("Merge Controller Problem");
        }
    }

    private float GetMergeDurationTime(Vector3 tile2, Vector3 tile1)
    {
        var centerPoint = (tile2 + tile1) / 2;
        var distance = Vector3.Distance(tile1, tile2);
        var delayTime = Mathf.Clamp(distance * 0.1f, 0.0f, .5f);
        return delayTime;
    }

    private void UnSelectTiles()
    {
        TileHintHandler.ResetHintMatchedTiles();
        UnityEvent action = new UnityEvent();
        action.AddListener(CheckCompletion);
        selectedTile1.UnSelect(false, Configs.GameConfig.tileFlipDelay, Configs.GameConfig.tileRotateDelay, action);
        selectedTile2.UnSelect(false, Configs.GameConfig.tileFlipDelay, Configs.GameConfig.tileRotateDelay, action);
        if (oldData.Count > 0)
        {
            oldData.Clear();
        }

        oldData.Add(selectedTile1);
        oldData.Add(selectedTile2);
        selectedTile2 = selectedTile1 = null;
    }

    public void CheckCompletion()
    {
        if (oldData.Count > 0)
        {
            oldData.Clear();
        }
    }
}