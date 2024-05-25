using DG.Tweening;
using Features.CharacterMovement;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
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
    [HideInInspector]public Tile MyTile;
    public void Init(Transform _player)
    {
        player = _player;
        _animator.myFighter = this;
    }
    void Update()
    {
        
        if (player)
        {
            if (Vector3.Distance(transform.position, player.position) < distanceChecker)
            {
                transform.LookAt(player,Vector3.up);
             
            }
            else
            {
                transform.localRotation = Quaternion.Euler(new Vector3(0,150,0));
            }
        }
       
       
    }
    public int HitPower { get=>power;
        set => power = value;
    }

    public Transform _Transform => transform;
    public int Health { get=>health; set=>health=value; }

    public int GiveDamage(int value)
    {
        Health -= value;
        if (Health<=0) _animator.DeathAnim();
        return Health;
    }

    public void Attack(ISFighter fighter)
    {
        _animator.Fighter = fighter;
        _animator.Attack();
    }

    public void Death()
    {
        MyTile._Enemy = null;
        gridView.ChangeTileMaterial(MyTile);
        MyTile.TileState = TileStates.Walkable;
        transform.DOScale(.8f, .1f).SetEase(Ease.Linear);
        Invoke(nameof(SetOff),.35f);
    }

    private void SetOff()
    {
        gameObject.SetActive(false);
    }
}
