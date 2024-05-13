using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Features.GridGeneration.Scripts;
using GridGeneration.Scripts.interfaces;
using Sirenix.OdinInspector;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{

    public GridView View;
    private IGridView gridHandler;
    public float padding = 1f; // Extra padding to ensure visibility
    public Tile tileLeft,right;
    public float minDistance = 1f; // Minimum distance from the grid
   // public float screenWidthRatio = 0.9f; // Percentage of the screen width to fill with the grid

    [Button]
    public void TesttCamera()
    {
        Vector3? leftPos = null;
        Vector3? rightPos = null;

        foreach (var tile in gridHandler.PathData.Values)
        {
            if (!leftPos.HasValue || tile.transform.position.x < leftPos.Value.x)
                leftPos = tile.transform.position;
            
            if (!rightPos.HasValue || tile.transform.position.x > rightPos.Value.x)
                rightPos = tile.transform.position;
        }

        if (!leftPos.HasValue || !rightPos.HasValue)
        {
            Debug.LogError("No tiles found in the grid.");
            return;
        }

        // Calculate the width of the grid
        float gridWidth = Mathf.Abs(rightPos.Value.x - leftPos.Value.x) + padding;

        // Calculate the center of the grid
        Vector3 gridCenter = (leftPos.Value + rightPos.Value) / 2f;

        // Calculate the screen width in world units based on the camera's distance from the grid
        float cameraDistance = Vector3.Distance(transform.position, gridCenter);
        float screenWidth = 2f * Mathf.Tan(Mathf.Deg2Rad * Camera.main.fieldOfView / 2f) * cameraDistance;

        // Calculate the desired camera distance based on the desired grid width and aspect ratio
        float desiredDistance = (gridWidth / 2f) / Mathf.Tan(Mathf.Deg2Rad * Camera.main.fieldOfView / 2f);

        // Ensure the camera doesn't zoom out too far
        float distance = Mathf.Max(desiredDistance, minDistance);

        // Set camera position and look at the center of the grid
        transform.position = gridCenter - Camera.main.transform.forward * distance;
        Camera.main.transform.LookAt(gridCenter);
    }
    private void Start()
    {
        gridHandler = View;
        // Find the positions of the leftmost and rightmost tiles
       
    }
}
