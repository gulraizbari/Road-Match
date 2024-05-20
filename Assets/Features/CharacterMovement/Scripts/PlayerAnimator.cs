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
       // _animator.SetBool("Jump",true);
       
    }

    public void WinAnimation()
    {
        _animator.SetTrigger("Win");
    }
}
