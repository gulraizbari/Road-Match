using Features.GridGeneration.Scripts;
using UnityEngine;
[RequireComponent(typeof(Camera))]
public class CameraAdjuster : MonoBehaviour
{
    public Camera orthoCamera;
    public float padding = 1.0f; // Padding around the grid

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

        // Find the most left and most right cells
        float minX = float.MaxValue;
        float maxX = float.MinValue;
        float minZ = float.MaxValue;
        float maxZ = float.MinValue;

        foreach (var cell in grid)
        {
            if (cell == null) continue;
            Vector3 position = cell.Position;

            if (position.x < minX) minX = position.x;
            if (position.x > maxX) maxX = position.x;
            if (position.z < minZ) minZ = position.z;
            if (position.z > maxZ) maxZ = position.z;
        }

        // Calculate the width and height of the grid in world space
        float gridWorldWidth = maxX - minX;
        float gridWorldHeight = maxZ - minZ;

        // Calculate the total width and height including padding
        float totalWorldWidth = gridWorldWidth + padding * 2;
        float totalWorldHeight = gridWorldHeight + padding * 2;

        // Adjust the orthographic size based on the aspect ratio and grid dimensions
        float aspectRatio = orthoCamera.aspect;
        float cameraSizeByWidth = totalWorldWidth / (2 * aspectRatio);
        float cameraSizeByHeight = totalWorldHeight / 2;

        orthoCamera.orthographicSize = Mathf.Max(cameraSizeByWidth, cameraSizeByHeight);
    }
}