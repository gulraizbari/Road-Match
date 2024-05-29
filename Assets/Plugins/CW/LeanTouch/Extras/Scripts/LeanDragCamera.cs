// using System;
// using UnityEngine;
// using Lean.Common;
// using CW.Common;
// using DG.Tweening;
//
// namespace Lean.Touch
// {
//     /// <summary>This component allows you to move the current GameObject (e.g. Camera) based on finger drags and the specified ScreenDepth.</summary>
//     [HelpURL(LeanTouch.HelpUrlPrefix + "LeanDragCamera")]
//     [AddComponentMenu(LeanTouch.ComponentPathPrefix + "Drag Camera")]
//     public class LeanDragCamera : MonoBehaviour
//     {
//         /// <summary>The method used to find fingers to use with this component. See LeanFingerFilter documentation for more information.</summary>
//         public LeanFingerFilter Use = new LeanFingerFilter(true);
//
//         /// <summary>The method used to find world coordinates from a finger. See LeanScreenDepth documentation for more information.</summary>
//         public LeanScreenDepth ScreenDepth = new LeanScreenDepth(LeanScreenDepth.ConversionType.DepthIntercept);
//
//         /// <summary>The movement speed will be multiplied by this.
//         /// -1 = Inverted Controls.</summary>
//         public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;
//
//         /// <summary>If you want this component to change smoothly over time, then this allows you to control how quick the changes reach their target value.
//         /// -1 = Instantly change.
//         /// 1 = Slowly change.
//         /// 10 = Quickly change.</summary>
//         public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;
//
//         /// <summary>This allows you to control how much momentum is retained when the dragging fingers are all released.
//         /// NOTE: This requires <b>Damping</b> to be above 0.</summary>
//         public float Inertia { set { inertia = value; } get { return inertia; } } [SerializeField] [Range(0.0f, 1.0f)] private float inertia;
//
//         [SerializeField]
//         private Vector3 remainingDelta;
//
//         /// <summary>This method moves the current GameObject to the center point of all selected objects.</summary>
//         [ContextMenu("Move To Selection")]
//         public virtual void MoveToSelection()
//         {
//             var center = default(Vector3);
//             var count  = 0;
//
//             foreach (var selectable in LeanSelectable.Instances)
//             {
//                 if (selectable.IsSelected == true)
//                 {
//                     center += selectable.transform.position;
//                     count  += 1;
//                 }
//             }
//
//             if (count > 0)
//             {
//                 var oldPosition = transform.localPosition;
//
//                 transform.position = center / count;
//
//                 remainingDelta += transform.localPosition - oldPosition;
//
//                 transform.localPosition = oldPosition;
//             }
//         }
//
//         [SerializeField] public float zMax, zMin;
//         [SerializeField] public float xMax, xMin;
//         public bool StopMovement;
//
//         /// <summary>If you've set Use to ManuallyAddedFingers, then you can call this method to manually add a finger.</summary>
//         public void AddFinger(LeanFinger finger)
//         {
//             Use.AddFinger(finger);
//         }
//
//         public void SetCamera(Vector3 pos, float zMax, float zMin, float xMax, float xMin)
//         {
//             transform.DOMove(pos, .25f).SetEase(Ease.Linear);
//             this.zMax = zMax;
//             this.zMin = zMin;
//             this.xMax = xMax;
//             this.xMin = xMin;
//         }
//
//         public void SetCamera(float posZ, float zMax, float zMin, float posX, float xMax, float xMin)
//         {
//             transform.DOMove(new Vector3(posX, transform.position.y, posZ), .25f).SetEase(Ease.Linear);
//             this.zMax = zMax;
//             this.zMin = zMin;
//             this.xMax = xMax;
//             this.xMin = xMin;
//         }
//
//         /// <summary>If you've set Use to ManuallyAddedFingers, then you can call this method to manually remove a finger.</summary>
//         public void RemoveFinger(LeanFinger finger)
//         {
//             Use.RemoveFinger(finger);
//         }
//
//         /// <summary>If you've set Use to ManuallyAddedFingers, then you can call this method to manually remove all fingers.</summary>
//         public void RemoveAllFingers()
//         {
//             Use.RemoveAllFingers();
//         }
//
// #if UNITY_EDITOR
//         protected virtual void Reset()
//         {
//             Use.UpdateRequiredSelectable(gameObject);
//         }
// #endif
//
//         protected virtual void Awake()
//         {
//             Use.UpdateRequiredSelectable(gameObject);
//         }
//
//         protected virtual void LateUpdate()
//         {
//             if (StopMovement) return;
//
//             // Get the fingers we want to use
//             var fingers = Use.UpdateAndGetFingers();
//
//             // Get the last and current screen point of all fingers
//             var lastScreenPoint = LeanGesture.GetLastScreenCenter(fingers);
//             var screenPoint     = LeanGesture.GetScreenCenter(fingers);
//
//             // Get the world delta of them after conversion
//             var worldDelta = ScreenDepth.ConvertDelta(lastScreenPoint, screenPoint, gameObject);
//
//             // Store the current position
//             var oldPosition = transform.localPosition;
//
//             // Pan the camera based on the world delta
//             transform.position -= worldDelta * sensitivity;
//
//             // Add to remainingDelta
//             remainingDelta += transform.localPosition - oldPosition;
//
//             // Get t value
//             var factor = CwHelper.DampenFactor(damping, Time.deltaTime);
//
//             // Dampen remainingDelta
//             var newRemainingDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);
//
//             // Shift this position by the change in delta
//             var desiredPos = oldPosition + remainingDelta - newRemainingDelta;
//             desiredPos.x = Mathf.Clamp(desiredPos.x, xMin, xMax);
//             desiredPos.z = Mathf.Clamp(desiredPos.z, zMin, zMax);
//             transform.localPosition = desiredPos;
//
//             if (fingers.Count == 0 && inertia > 0.0f && damping > 0.0f)
//             {
//                 newRemainingDelta = Vector3.Lerp(newRemainingDelta, remainingDelta, inertia);
//             }
//
//             // Update remainingDelta with the dampened value
//             remainingDelta = newRemainingDelta;
//         }
//     }
// }
//
// #if UNITY_EDITOR
// namespace Lean.Touch.Editor
// {
//     using UnityEditor;
//     using TARGET = LeanDragCamera;
//
//     [CanEditMultipleObjects]
//     [CustomEditor(typeof(TARGET), true)]
//     public class LeanDragCamera_Editor : CwEditor
//     {
//         protected override void OnInspector()
//         {
//             TARGET tgt; TARGET[] tgts; GetTargets(out tgt, out tgts);
//
//             Draw("Use");
//             Draw("ScreenDepth");
//             Draw("sensitivity", "The movement speed will be multiplied by this.\n\n-1 = Inverted Controls.");
//             Draw("damping", "If you want this component to change smoothly over time, then this allows you to control how quick the changes reach their target value.\n\n-1 = Instantly change.\n\n1 = Slowly change.\n\n10 = Quickly change.");
//             Draw("inertia", "This allows you to control how much momentum is retained when the dragging fingers are all released.\n\nNOTE: This requires <b>Damping</b> to be above 0.");
//             Draw("zMax");
//             Draw("zMin");
//             Draw("xMax");
//             Draw("xMin");
//         }
//     }
// }
// #endif
using System;
using UnityEngine;
using Lean.Common;
using CW.Common;
using DG.Tweening;

namespace Lean.Touch
{
    /// <summary>This component allows you to move the current GameObject (e.g. Camera) based on finger drags and the specified ScreenDepth.</summary>
    [HelpURL(LeanTouch.HelpUrlPrefix + "LeanDragCamera")]
    [AddComponentMenu(LeanTouch.ComponentPathPrefix + "Drag Camera")]
    public class LeanDragCamera : MonoBehaviour
    {
        /// <summary>The method used to find fingers to use with this component. See LeanFingerFilter documentation for more information.</summary>
        public LeanFingerFilter Use = new LeanFingerFilter(true);

        /// <summary>The method used to find world coordinates from a finger. See LeanScreenDepth documentation for more information.</summary>
        public LeanScreenDepth ScreenDepth = new LeanScreenDepth(LeanScreenDepth.ConversionType.DepthIntercept);

        /// <summary>The movement speed will be multiplied by this.
        /// -1 = Inverted Controls.</summary>
        public float Sensitivity { set { sensitivity = value; } get { return sensitivity; } } [SerializeField] private float sensitivity = 1.0f;

        /// <summary>If you want this component to change smoothly over time, then this allows you to control how quick the changes reach their target value.
        /// -1 = Instantly change.
        /// 1 = Slowly change.
        /// 10 = Quickly change.</summary>
        public float Damping { set { damping = value; } get { return damping; } } [SerializeField] private float damping = -1.0f;

        /// <summary>This allows you to control how much momentum is retained when the dragging fingers are all released.
        /// NOTE: This requires <b>Damping</b> to be above 0.</summary>
        public float Inertia { set { inertia = value; } get { return inertia; } } [SerializeField] [Range(0.0f, 1.0f)] private float inertia;

        [SerializeField]
        private Vector3 remainingDelta;

        [SerializeField] public float zMax, zMin;
        [SerializeField] public float xMax, xMin;
        public bool StopMovement;

        [SerializeField] private float dragThreshold = 10f; // Threshold distance in pixels
        [SerializeField] private float clickTimeThreshold = 0.2f; // Time in seconds to distinguish between click and drag

        private Vector2 initialTouchPosition;
        private float touchStartTime;
        private bool isDragging;

        /// <summary>This method moves the current GameObject to the center point of all selected objects.</summary>
        [ContextMenu("Move To Selection")]
        public virtual void MoveToSelection()
        {
            var center = default(Vector3);
            var count  = 0;

            foreach (var selectable in LeanSelectable.Instances)
            {
                if (selectable.IsSelected == true)
                {
                    center += selectable.transform.position;
                    count  += 1;
                }
            }

            if (count > 0)
            {
                var oldPosition = transform.localPosition;

                transform.position = center / count;

                remainingDelta += transform.localPosition - oldPosition;

                transform.localPosition = oldPosition;
            }
        }

        public void AddFinger(LeanFinger finger)
        {
            Use.AddFinger(finger);
        }

        public void SetCamera(Vector3 pos, float zMax, float zMin, float xMax, float xMin)
        {
            transform.DOMove(pos, .25f).SetEase(Ease.Linear);
            this.zMax = zMax;
            this.zMin = zMin;
            this.xMax = xMax;
            this.xMin = xMin;
        }

        public void SetCamera(float posZ, float zMax, float zMin, float posX, float xMax, float xMin)
        {
            transform.DOMove(new Vector3(posX, transform.position.y, posZ), .25f).SetEase(Ease.Linear);
            this.zMax = zMax;
            this.zMin = zMin;
            this.xMax = xMax;
            this.xMin = xMin;
        }

        public void RemoveFinger(LeanFinger finger)
        {
            Use.RemoveFinger(finger);
        }

        public void RemoveAllFingers()
        {
            Use.RemoveAllFingers();
        }

#if UNITY_EDITOR
        protected virtual void Reset()
        {
            Use.UpdateRequiredSelectable(gameObject);
        }
#endif

        protected virtual void Awake()
        {
            Use.UpdateRequiredSelectable(gameObject);
        }

        protected virtual void LateUpdate()
        {
            // Get the fingers we want to use
            var fingers = Use.UpdateAndGetFingers();

            if (fingers.Count > 0)
            {
                var finger = fingers[0];

                if (finger.Down)
                {
                    // Capture initial touch position and time
                    initialTouchPosition = finger.ScreenPosition;
                    touchStartTime = Time.time;
                    isDragging = false;
                }
                else if (finger.Up)
                {
                    if (!isDragging)
                    {
                        // This was a click, flip the tile
                        FlipTile();
                    }
                }
                else
                {
                    // Calculate the distance moved
                    float distance = Vector2.Distance(finger.ScreenPosition, initialTouchPosition);

                    // Check if the touch has been held for more than the click threshold time and moved beyond the drag threshold
                    if (Time.time - touchStartTime > clickTimeThreshold && distance > dragThreshold)
                    {
                        isDragging = true;
                    }
                }
            }

            if (isDragging && !StopMovement)
            {
                // Get the last and current screen point of all fingers
                var lastScreenPoint = LeanGesture.GetLastScreenCenter(fingers);
                var screenPoint = LeanGesture.GetScreenCenter(fingers);

                // Get the world delta of them after conversion
                var worldDelta = ScreenDepth.ConvertDelta(lastScreenPoint, screenPoint, gameObject);

                // Store the current position
                var oldPosition = transform.localPosition;

                // Pan the camera based on the world delta
                transform.position -= worldDelta * sensitivity;

                // Add to remainingDelta
                remainingDelta += transform.localPosition - oldPosition;

                // Get t value
                var factor = CwHelper.DampenFactor(damping, Time.deltaTime);

                // Dampen remainingDelta
                var newRemainingDelta = Vector3.Lerp(remainingDelta, Vector3.zero, factor);

                // Shift this position by the change in delta
                var desiredPos = oldPosition + remainingDelta - newRemainingDelta;
                desiredPos.x = Mathf.Clamp(desiredPos.x, xMin, xMax);
                desiredPos.z = Mathf.Clamp(desiredPos.z, zMin, zMax);
                transform.localPosition = desiredPos;

                if (fingers.Count == 0 && inertia > 0.0f && damping > 0.0f)
                {
                    newRemainingDelta = Vector3.Lerp(newRemainingDelta, remainingDelta, inertia);
                }

                // Update remainingDelta with the dampened value
                remainingDelta = newRemainingDelta;
            }
        }

        private void FlipTile()
        {
            // Implement your tile flip logic here
            Debug.Log("Tile flipped!");
        }
    }
}

#if UNITY_EDITOR
namespace Lean.Touch.Editor
{
    using UnityEditor;
    using TARGET = LeanDragCamera;

    [CanEditMultipleObjects]
    [CustomEditor(typeof(TARGET), true)]
    public class LeanDragCamera_Editor : CwEditor
    {
        protected override void OnInspector()
        {
            TARGET tgt; TARGET[] tgts; GetTargets(out tgt, out tgts);

            Draw("Use");
            Draw("ScreenDepth");
            Draw("sensitivity", "The movement speed will be multiplied by this.\n\n-1 = Inverted Controls.");
            Draw("damping", "If you want this component to change smoothly over time, then this allows you to control how quick the changes reach their target value.\n\n-1 = Instantly change.\n\n1 = Slowly change.\n\n10 = Quickly change.");
            Draw("inertia", "This allows you to control how much momentum is retained when the dragging fingers are all released.\n\nNOTE: This requires <b>Damping</b> to be above 0.");
            Draw("zMax");
            Draw("zMin");
            Draw("xMax");
            Draw("xMin");
        }
    }
}
#endif
