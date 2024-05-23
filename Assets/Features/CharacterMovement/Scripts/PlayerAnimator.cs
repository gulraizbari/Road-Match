using Sirenix.OdinInspector;
using UnityEngine;
public class PlayerAnimator : MonoBehaviour
{
    [BoxGroup("Reference")] [SerializeField]
    Animator _animator;

    public void WalkAnimation(bool isWalk)
    {
        _animator.SetBool("Walk",isWalk);
    }

    public void JumpAnimation()
    {
        WalkAnimation(false);
    }

    public void WinAnimation()
    {
        _animator.SetTrigger("Win");
    }

    public void Attack()
    {
        _animator.SetTrigger("Attack");
    }
}
