using DG.Tweening;
using Features.GridGeneration.Scripts;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sablo.Core;
using Sirenix.OdinInspector;
using UnityEngine;

public class MergeController : MonoBehaviour, IMergeController
{
    [ShowInInspector] ITile selectedTile1 = null;
    [ShowInInspector] ITile selectedTile2 = null;
    [ShowInInspector] ITile OldSelectedTile1 = null;
    [ShowInInspector] ITile OldSelectedTile2 = null;

    public bool isMerging;

    public void SelectTile(ITile tile)
    {
        //if (isMerging)return;
        
        if (selectedTile1 == null)
        {
            selectedTile1 = tile;
        }
        else
        {
            if (selectedTile1.ID == tile.ID)
            {
                selectedTile1.UnSelect(false, 0.2f);
                selectedTile1 = null;
            }
            else
            {
                selectedTile2 = tile;
                Invoke(nameof(MergeThem),.15f);//MergeThem();
                //Merge(tile);
            }
        }
    }

    private void MergeThem()
    {
        if (selectedTile1.TileState == TileStates.CanMerge && selectedTile2.TileState == TileStates.CanMerge)
        {
            if (selectedTile1.CurrentItem.TypeItem == selectedTile2.CurrentItem.TypeItem)
            {
                var id1 = selectedTile1.CurrentItem.GetItemObject().ToString();
                var id2 = selectedTile2.CurrentItem.GetItemObject().ToString();
                if (id1 == id2)
                {
                    var _selectedTransform = selectedTile1.PlacementTransform;
                    var _newSelectedTransform = selectedTile2.PlacementTransform;
                    _selectedTransform.SetParent(null);
                    _newSelectedTransform.SetParent(null);
                    Vector3 centerPoint = (_newSelectedTransform.localPosition + _selectedTransform.localPosition) / 2;
                    float distance = Vector3.Distance(_selectedTransform.position, _newSelectedTransform.position);
                    float delayTime = Mathf.Clamp(distance * 0.1f, 0.0f, .1f);
                 //   centerPoint.y += Configs.GameConfig.placementMoveDownValue;
                    print($"Delay {delayTime}");
                    selectedTile1.OnMerge(centerPoint,delayTime);
                    selectedTile2.OnMerge(centerPoint,delayTime);
                    selectedTile1 = null;
                    selectedTile2 = null;
                }
                else
                {
                    UnSelectTiles();
                }
            }
            else
            {
                print("Ithe ywa");
                UnSelectTiles();
            }
        }
        else
        {
            print(selectedTile1);
            print(selectedTile2);
            print("Masla");
            print($"s1 {selectedTile1.TileState} , s2 {selectedTile2.TileState}");
        }
    }

    private float GetMergeDurationTime(Vector3 tile2,Vector3 tile1)
    {
        var centerPoint = (tile2 + tile1) / 2;
        var distance = Vector3.Distance(tile1, tile2);
        var delayTime = Mathf.Clamp(distance * 0.1f, 0.0f, .5f);
        return delayTime;
    }

    private void UnSelectTiles()
    {
        selectedTile1.UnSelect(false, .5f);
        selectedTile2.UnSelect(false, .5f);
        selectedTile2 = selectedTile1 = null;
    }
}