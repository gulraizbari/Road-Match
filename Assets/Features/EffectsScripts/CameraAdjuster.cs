using Features.GridGeneration.Scripts;
using Lean.Touch;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class CameraAdjuster : MonoBehaviour
{
    public Camera orthoCamera;
    public float padding = 1.0f; // Padding around the grid
    public LeanDragCamera DragCamera;
    private void Awake()
    {
        if (!orthoCamera) orthoCamera = GetComponent<Camera>();
        orthoCamera.orthographic = true; // Ensure the camera is orthographic
    }

    public void AdjustCamera(Cell[,] grid)
    {
        if (grid == null || grid.Length == 0)
        {
            Debug.LogError("Grid is null or empty!");
            return;
        }

        float minX = float.MaxValue;
        float maxX = float.MinValue;
        float minY = float.MaxValue;
        float maxY = float.MinValue;;

        foreach (var cell in grid)
        {
            if (cell == null || cell.Empty) continue;
            Vector3 position = cell.Position;

            if (position.x < minX) minX = position.x;
            if (position.x > maxX) maxX = position.x;
            if (position.y < minY) minY = position.y;
            if (position.y > maxY) maxY = position.y;
        }

        // Calculate the width of the grid in world space
        float gridWorldWidth = maxX - minX;

        // Calculate the total width including padding
        float totalWorldWidth = gridWorldWidth + padding * 2;

        // Adjust the orthographic size based on the aspect ratio and grid width
        float aspectRatio = orthoCamera.aspect;
        float cameraSizeByWidth = totalWorldWidth / (2 * aspectRatio);

        orthoCamera.orthographicSize = cameraSizeByWidth;

        // Optionally, center the camera on the grid
        float gridCenterX = (minX + maxX) / 2;
        orthoCamera.transform.position = new Vector3(gridCenterX, orthoCamera.transform.position.y, orthoCamera.transform.position.z);
    }
}