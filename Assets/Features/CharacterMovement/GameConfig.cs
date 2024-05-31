
using Sirenix.OdinInspector;
using UnityEngine;

public partial class GameConfig
{
   
   [FoldoutGroup("Player")] public float playerMoveSpeed;
   [FoldoutGroup("Player")]public float playerRotationSpeed;
   [FoldoutGroup("Player")]public float JumpHeight;
   [FoldoutGroup("Player")] public float JumpDuration;
   [FoldoutGroup("Player")] public float playerYTargetOnTileMoving;
   [FoldoutGroup("Player")] public float playerYTargetOnTileMovingDuration;
  
   [FoldoutGroup("Player")] public Vector3 playerRotationOnJumpComplete;
   [FoldoutGroup("Player")] public float playerRotationOnJumpCompleteDuration;
    
}
