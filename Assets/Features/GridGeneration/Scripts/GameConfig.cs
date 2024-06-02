
using Sirenix.OdinInspector;
using UnityEngine;

public partial class GameConfig
{
  
  [FoldoutGroup("GridRelated")]public float tileJumpHeight;
  [FoldoutGroup("GridRelated")]public float tileJumpDuration;
  [FoldoutGroup("GridRelated")]public float tileRotateDuration;
  [FoldoutGroup("GridRelated")] public float placementDuration;
  [FoldoutGroup("GridRelated")] public float placementMoveUpDuration;
  [FoldoutGroup("GridRelated")] public float placementMoveUpValue;
  [FoldoutGroup("GridRelated")]public float placementMoveDownValue;
  [FoldoutGroup("GridRelated")] public float placementMaxScale;
  [FoldoutGroup("GridRelated")] public float placementMinScale;
  [FoldoutGroup("GridRelated")] public float tileRotateDelay;
  [FoldoutGroup("GridRelated")] public float tileFlipDelay;
  [FoldoutGroup("GridRelated")] public float AutoFlipDelay;
  [FoldoutGroup("Player")] public float colorDuration;
  [FoldoutGroup("GridRelated")] public float TileDownY;
  [FoldoutGroup("GridRelated")] public Color TileDownColor;
  [FoldoutGroup("GridRelated")] public Color TileHintColor;
  [FoldoutGroup("GridRelated")] public Color TileHintOrignalColor;
  [FoldoutGroup("GridRelated")] public Color TileOrignalColor;
}
