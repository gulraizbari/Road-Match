

using UnityEngine;

public class SafeArea : MonoBehaviour
{
   
   private RectTransform       _rectTransform;
   private Rect                _safeArea;
   private Vector2             _anchorMin;
   private Vector2             _anchorMax;


   private void Start()
    {
        ApplySafeArea();
    }

   private void ApplySafeArea()
    {
       _rectTransform = GetComponent<RectTransform>();
              _safeArea = Screen.safeArea;
              _anchorMin = _safeArea.position;
              _anchorMax = _anchorMin + _safeArea.size;
              _anchorMin.x /= Screen.width;
              _anchorMin.y /= Screen.height;
              _anchorMax.x /= Screen.width;
              _anchorMax.y /= Screen.height;
              _rectTransform.anchorMin = _anchorMin;
              _rectTransform.anchorMax = _anchorMax;

    }
   
}
