using DG.Tweening;
using Features.GridGeneration.Scripts;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

public class MergeController : MonoBehaviour, IMergeController
{
    [ShowInInspector] ITile selectedTile1 = null;
    [ShowInInspector] ITile selectedTile2 = null;

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
                MergeThem();
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
                    var _selectedTransform = selectedTile1.Transform;
                    var _newSelectedTransform = selectedTile2.Transform;
                    _selectedTransform.SetParent(null);
                    _newSelectedTransform.SetParent(null);
                    Vector3 centerPoint = (_newSelectedTransform.localPosition + _selectedTransform.localPosition) / 2;
                    float distance = Vector3.Distance(_selectedTransform.position, _newSelectedTransform.position);
                    float delayTime = Mathf.Clamp(distance * 0.1f, 0.0f, .5f);
                    print($"Delay {delayTime}");
                    _newSelectedTransform.DOLocalMove(centerPoint, delayTime).SetEase(Ease.Linear).OnComplete((() =>
                    {
                        isMerging = false;
                        _newSelectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                    }));
                    _selectedTransform.DOLocalMove(centerPoint, delayTime).OnComplete((() =>
                    {
                        _selectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                    }));
                    selectedTile1.OnMerge();
                    selectedTile2.OnMerge();
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
                UnSelectTiles();
            }

            // selectedTile2.UnSelect(false,.2f);
            // selectedTile1.UnSelect(false,0.2f);
            // selectedTile1 = null;
            // selectedTile2 = null;
        }
        else
        {
            print(selectedTile1);
            print(selectedTile2);
            print("Masla");
            print($"s1 {selectedTile1.TileState} , s2 {selectedTile2.TileState}");
        }
    }

    private void Merge(ITile newTile)
    {
        if (selectedTile1.TileState == TileStates.CanMerge && newTile.TileState == TileStates.CanMerge)
        {
            if (selectedTile1.CurrentItem.TypeItem == newTile.CurrentItem.TypeItem)
            {
                if (selectedTile1.CurrentItem.GetItemObject().ToString() ==
                    newTile.CurrentItem.GetItemObject().ToString())
                {
                    isMerging = true;
                    print("Merge");
                    var _selectedTransform = selectedTile1.Transform;
                    var _newSelectedTransform = newTile.Transform;
                    _selectedTransform.SetParent(null);
                    _newSelectedTransform.SetParent(null);
                    Vector3 centerPoint = (_newSelectedTransform.localPosition + _selectedTransform.localPosition) / 2;


                    // Move each object towards its respective target position
                    _newSelectedTransform.DOLocalMove(centerPoint, .5f).SetEase(Ease.Linear).OnComplete((() =>
                    {
                        isMerging = false;
                        _newSelectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                    }));
                    _selectedTransform.DOLocalMove(centerPoint, .5f).OnComplete((() =>
                    {
                        _selectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                    }));
                    selectedTile1.OnMerge();
                    newTile.OnMerge();
                    selectedTile1 = null;
                }
                else
                {
                    print("diff sub Type");
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
            UnSelectTiles();
        }
    }

    private void UnSelectTiles()
    {
        selectedTile1.UnSelect(false, .5f);
        selectedTile2.UnSelect(false, .5f);
        selectedTile2 = selectedTile1 = null;
    }
}