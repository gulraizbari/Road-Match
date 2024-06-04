using DG.Tweening;
using Features.CharacterMovement;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;

public class Enemy : MonoBehaviour,ISFighter
{
    [BoxGroup("Enemy"),SerializeField] float distanceChecker;
    [BoxGroup("Enemy"),SerializeField] int power = 1;
    [BoxGroup("Enemy"),SerializeField] int health = 1;
    [BoxGroup("Enemy"),SerializeField] PlayerAnimator _animator;
    [BoxGroup("Enemy"),SerializeField] GameObject _particle;
    [BoxGroup("Enemy"),SerializeField] CharacterLevel _counter;
    public IGridView gridView;
    [HideInInspector]public Tile MyTile;
    Transform player;
    public PlayerController _playerController;
    Transform Child => _animator.transform;
    public void Init(Transform _player,int _health,bool isCounter)
    {
        player = _player;
        _animator.myFighter = this;
        power=health = _health;
        UpdateLevel(power);
        Child.localRotation = Quaternion.Euler(new Vector3(0,150,0));
        if (isCounter)
        {
            _counter.gameObject.SetActive(true);
        }
    }

   
    void Update()
    {
        if (health<=0)return;
        if (player )
        {
            if (Vector3.Distance(Child.position, player.position) < distanceChecker)
            {
                Child.LookAt(player,Vector3.up);
             
            }
            else
            {
                Child.localRotation = Quaternion.Euler(new Vector3(0,150,0));
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
        if (value>=HitPower)
        {
            _animator.Fighter.UpdateLevel(HitPower);
            Death();//_animator.DeathAnim();
            Health = 0;
        }
        // Health -= value;
        // if (Health<=0) {
        //    
        //     _animator.Fighter.UpdateLevel(HitPower);
        //     Death();//_animator.DeathAnim();
        //     
        // }
        return Health;
    }

    public void Attack(ISFighter fighter)
    {
        if (health>0)
        {
            _counter.gameObject.SetActive(true);
            _animator.Fighter = fighter;
            _animator.Attack();
        }
       
    }

    public void Death()
    {
        
        _playerController.CantRun = false;
        MyTile._Enemy = null;
        transform.DOScale(0f, .1f).SetEase(Ease.Linear).OnComplete((SetOff));
        SoundManager.Instance.Joy();
    }

    public void UpdateLevel(int value)
    {
        _counter.UpdateLevelText(value);
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
