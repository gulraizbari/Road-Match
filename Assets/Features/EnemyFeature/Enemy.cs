
using System;
using Features.CharacterMovement;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

public class Enemy : MonoBehaviour,ISFighter
{
    public float distanceChecker;
   public int power = 1;
   public int health = 1;
    [SerializeField,ReadOnly]  private Transform player;
    [SerializeField] PlayerAnimator _animator;
    public IGridView gridView;
    public float speed = 5;
    public Player playerScript;
    public bool isAttack;
    public Tile MyTile;
    public void Init(Transform _player)
    {
        player = _player;
        _animator.myFighter = this;
    }
    void Update()
    {
        
        if (player)
        {
            if (Vector3.Distance(transform.localPosition, player.position) < distanceChecker)
            {
                transform.LookAt(player);
               // LookAt(player.position);
            }
            else
            {
                if (playerScript)
                {
                    playerScript = null;
                }
                transform.localRotation = Quaternion.Euler(new Vector3(0,150,0));
            }
        }
       
       
    }
    protected void LookAt(Vector3 target)
    {
        var lookPos = target - transform.localPosition;
        var lookRot = Quaternion.LookRotation(lookPos, Vector3.up);
        var eulerY = lookRot.eulerAngles.y;
        var rotation = Quaternion.Euler(0, eulerY, 0);
        transform.localRotation = rotation;
    }
   

    public int HitPower { get=>power;
        set => power = value;
    }

    public int Health { get=>health; set=>health=value; }

    public int GiveDamage(int value)
    {
        Health -= value;
        if (Health<=0) _animator.DeathAnim();
        return Health;
    }

    public void Attack(ISFighter fighter)
    {
        print("A");
        _animator.Fighter = fighter;
        _animator.Attack();
    }

    public void Death()
    {
        
        gridView.ChangeTileMaterial(MyTile);
        MyTile.TileState = TileStates.Walkable;
        Invoke(nameof(SetOff),.3f);
    }

    private void SetOff()
    {
        gameObject.SetActive(false);
    }
}
