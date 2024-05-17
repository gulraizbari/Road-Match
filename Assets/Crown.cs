using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Crown : MonoBehaviour
{
    [SerializeField] Transform crown;
    void Start()
    {
        transform.DOLocalRotate(new Vector3(0, 180, 0), 2).SetEase(Ease.Linear).SetLoops(-1, LoopType.Incremental);
        transform.DOLocalMoveY(1, 2).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo).SetRelative();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
