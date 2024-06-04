using Features.CharacterMovement;
using Sablo.Gameplay.Movement;
using Sirenix.OdinInspector;
using UnityEngine;
public class PlayerAnimator : MonoBehaviour
{
    [BoxGroup("Reference")] [SerializeField]
    GameObject _slash;
    [BoxGroup("Reference")] [SerializeField]
    Animator _animator;

   [ShowInInspector] public ISFighter myFighter;
   [ShowInInspector]  public ISFighter Fighter;
    public LayerMask layer;
    public void WalkAnimation(bool isWalk)
    {
        _slash.SetActive(false);
        _animator.Play(isWalk ? "Run" : "Idle");
     
    }

    public void Idle()
    {
        WalkAnimation(false);
    }
    public void JumpAnimation()
    {
        _animator.Play("Jump");
    }

    public void WinAnimation()
    {
        _animator.Play("Win");
    }
    public void HitAnimation()
    {
     //   _animator.SetBool("Hit",true);
        _animator.Play("Hit");
    }
    
    public void Damage()
    {
        if (Fighter!=null)
        {
            SoundManager.Instance.PlaySword(1);
         var health= Fighter.GiveDamage(myFighter.HitPower);
         if (health<=0)
         {
             StopAttack();
         }
        }
    }

    public void Dead()
    {
       myFighter.Death();
    }

    public void Slash()
    {
        _slash.SetActive(true);
    }

    public void DeathAnim()
    {
        SoundManager.Instance.PlayDeathScreem(1);
        var value = Random.Range(0, 2);
        _animator.Play(value == 0 ? "Death1" : "Death2");
    }
    public void Attack()
    {
        _animator.Play("Attack");
    } 
    public void StopAttack()
    {
        _animator.Play("Idle");
    }
    
}
