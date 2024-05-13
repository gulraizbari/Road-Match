using UnityEngine;

namespace Utilities
{
    public static class GameUtility
    {

        public static Vector3 CenterPoint(this Vector3 target2, Vector3 target1)
        {
            return   (target2 + target1) / 2;
        }
        
    }
}