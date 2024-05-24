
using System;
using Sirenix.OdinInspector;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float distanceChecker;
   
    [SerializeField,ReadOnly]  private Transform player;
    [SerializeField] PlayerAnimator _animator;
    public float speed = 5;

    public void Init(Transform _player)
    {
        player = _player;
    }
    void Update()
    {
        if (player)
        {
            if (Vector3.Distance(transform.localPosition, player.position) < distanceChecker)
            {
                LookAt(player.position);
            }
        }
        else
        {
            transform.rotation = Quaternion.Euler(new Vector3(0,180,0));
        }
       
    }
    protected void LookAt(Vector3 target)
    {
        var lookPos = target - transform.position;
        var lookRot = Quaternion.LookRotation(lookPos, Vector3.up);
        var eulerY = lookRot.eulerAngles.y;
        var rotation = Quaternion.Euler(0, eulerY, 0);
        transform.rotation = rotation;
    }
}
