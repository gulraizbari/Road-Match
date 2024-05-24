using System;
using DG.Tweening;
using Lean.Touch;
using UnityEngine;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragStartPosition;
    private Vector3 dragCurrentPosition;
    public float minClampZ;
    public float maxClampZ;
    public LeanDragCamera leanDragCamera;
    
    public void SetCamera(Vector3 pos,float Max,float Min)
    {
        transform.DOMoveZ(pos.z, .25f).SetEase(Ease.Linear);
        maxClampZ = Max;
        minClampZ = Min;
        leanDragCamera.zMax = maxClampZ;
        leanDragCamera.zMin = minClampZ;
    }
}
