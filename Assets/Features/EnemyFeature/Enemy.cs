using DG.Tweening;
using Features.CharacterMovement;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

public class Enemy : MonoBehaviour,ISFighter
{
    [BoxGroup("Enemy"),SerializeField] float distanceChecker;
    [BoxGroup("Enemy"),SerializeField] int power = 1;
    [BoxGroup("Enemy"),SerializeField] int health = 1;
    [BoxGroup("Enemy"),SerializeField] PlayerAnimator _animator;
    [BoxGroup("Enemy"),SerializeField] GameObject _particle;
    public IGridView gridView;
    [HideInInspector]public Tile MyTile;
    Transform player;
    
    public void Init(Transform _player)
    {
        player = _player;
        _animator.myFighter = this;
    }
    void Update()
    {
        if (health<=0)return;
        if (player )
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
        if (health>0)
        {
            _animator.Fighter = fighter;
            _animator.Attack();
        }
       
    }

    public void Death()
    {
        MyTile._Enemy = null;
        transform.DOScale(.8f, .1f).SetEase(Ease.Linear);
        Invoke(nameof(SetOff),.5f);
    }

    private void SetOff()
    {
        _particle.transform.SetParent(null);
        _particle.SetActive(true);
        gameObject.SetActive(false);
        gridView.ChangeTileMaterial(MyTile);
        MyTile.TileState = TileStates.Walkable;
    }
}
