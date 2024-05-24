using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class KeyAnimEffect : MonoBehaviour
{
    
    public float radius = 1.0f;    // Radius of the circle
    private Vector3 initialPosition;  // Initial local position of the object
    private float angle;              // Current angle for the circular motion
    public float duration = 2.0f;
    public  Transform child;
    void Start()
    {
        // Store the initial local position of the object
        initialPosition = transform.localPosition;
        AnimateCircularMotion();
    }

    void Update()
    {
        // // Calculate the new angle based on the speed and time
        // angle += speed * Time.deltaTime;
        //
        // // Ensure the angle stays within 0 to 2 * PI range
        // angle = angle % (2 * Mathf.PI);
        //
        // // Calculate the new local position
        // float x = Mathf.Cos(angle) * radius;
        // float y = Mathf.Sin(angle) * radius;
        //
        // // Apply the new position while keeping the initial Z position
        // transform.localPosition = new Vector3(x, y, initialPosition.z);
    }
    void AnimateCircularMotion()
    {
        // Use a DOTween sequence for smooth circular motion
        Sequence circleSequence = DOTween.Sequence();

        circleSequence.Append(DOTween.To(
                () => 0f, 
                angle => 
                {
                    float x = Mathf.Cos(angle) * radius;
                    float y = Mathf.Sin(angle) * radius;
                    child.localPosition = new Vector3(x, y, initialPosition.z) + initialPosition;
                },
                Mathf.PI * 2,
                duration
            ).SetEase(Ease.Linear))
            .SetLoops(-1, LoopType.Restart);
       // transform.DOScale(0.9f, duration/2).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
        //transform.DOLocalMoveY(1f, duration/2).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
    }
    }

