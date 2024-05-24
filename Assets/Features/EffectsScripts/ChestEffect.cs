using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Unity.Mathematics;
using UnityEngine;

public class ChestEffect : MonoBehaviour
{
    public Vector3 rot;

    void Start()
    {
       MoveUP();

        // Update is called once per frame
    }

    private void MoveDown()
    {
        transform.DOLocalMoveY(0, .75f).SetEase(Ease.OutExpo).OnComplete((() =>
        {
           MoveUP();
        }));
    } private void MoveUP()
    {
        transform.DOLocalMoveY(1, .75f).SetEase(Ease.OutExpo).OnStart((() =>
        {
            transform.DORotate(new Vector3(0, 0, -9), .15f).SetDelay(.25f);
           // transform.localRotation=Quaternion.Euler(new Vector3(0,0,-9));
            transform.DORotate(rot, .25f).SetDelay(.4f).SetEase(Ease.Linear).SetLoops(1, LoopType.Yoyo).OnComplete((() =>
            {
                transform.DORotate(new Vector3(0, 0, 0), .25f);
                MoveDown();
            }));
        }));
    }
}
