
using DG.Tweening;
using Features.GridGeneration.Scripts;
using Features.MergeMechanic.Scripts.Interface;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

public class MergeController : MonoBehaviour,IMergeController
{
   [ShowInInspector]  ITile selectedTile = null;
   [ShowInInspector]  ITile secondTile = null;

    public void SelectTile(ITile tile)
    {
        if (selectedTile == null)
        {
            // First tile selected
            selectedTile = tile;
        }
        else
        {
            if (selectedTile.ID== tile.ID)
            {
                selectedTile = null;
            }
            else
            {
                secondTile = tile;
                Merge();
                //merge
                //MergeTiles();
            }
           
           
            // Second tile selected
            // if (selectedTile.Type == tile.Type)
            // {
            //     // Tiles are the same type, merge them
            //     MergeTiles(selectedTile, tile);
            // }
            // else
            // {
            //     // Tiles are different types, unselect both
            //     selectedTile = null;
            //     tile.Unselect();
            // }
        }
    }

    private void Merge()
    {
        if (selectedTile.CurrentItem.TypeItem == secondTile.CurrentItem.TypeItem)
        {
            if (selectedTile.CurrentItem.GetItemObject().ToString()==secondTile.CurrentItem.GetItemObject().ToString())
            {
                print("Merge");
                var _selectedTransform = selectedTile.Transform;
                var _newSelectedTransform = secondTile.Transform;
                _selectedTransform.SetParent(null);
                _newSelectedTransform.SetParent(null);
                Vector3 centerPoint = (_newSelectedTransform.localPosition + _selectedTransform.localPosition) / 2;

          
                // Move each object towards its respective target position
                _newSelectedTransform.DOLocalMove(centerPoint, .5f).SetEase(Ease.Linear).OnComplete((() =>
                {
                    _newSelectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                }));
                _selectedTransform.DOLocalMove(centerPoint, .5f).OnComplete((() =>
                {
                    _selectedTransform.DOScale(0, .1f).SetEase(Ease.Linear);
                }));
                selectedTile.OnMerge();
                secondTile.OnMerge();
                selectedTile = null;
                secondTile = null;
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

    private void UnSelectTiles()
    {
        selectedTile.UnSelect(false,.2f);
        secondTile.UnSelect(false,.2f);
        selectedTile = null;
        secondTile = null;
    }
  
   
}
