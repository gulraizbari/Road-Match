using System;
using UnityEngine;
using Sirenix.Utilities;
using Sirenix.OdinInspector;

#if UNITY_EDITOR
using UnityEditor;
#endif

[System.Serializable]
public sealed class CellData
{
    [SerializeField] public TileType tileType;
    [SerializeField] public TilePlacements tilePlacement;
    [SerializeField] public TypesOfHurdle typeOfHurdle;
    [SerializeField] public ItemType typeOfItem;
    [SerializeField] public Fruits typeOfFruit;
    [SerializeField] public Vegetables typeOfVegetables;
    [SerializeField] public bool IsPlayer = false;

    public CellData()
    {
        tileType = TileType.Empty;
        tilePlacement = TilePlacements.None;
        typeOfHurdle = TypesOfHurdle.NonBreakable;
        typeOfItem = ItemType.None;
        typeOfFruit = Fruits.None;
        typeOfVegetables = Vegetables.None;
        IsPlayer = false;
    }
}

[HideMonoScript]
[CreateAssetMenu(fileName = "Level Data", menuName = "RoadMap/Level Data", order = 0)]
public sealed class LevelData : SerializedScriptableObject
{
    [TitleGroup("LEVEL DATA", boldTitle: true)]
    [HorizontalGroup("LEVEL DATA/Split")]
    [VerticalGroup("LEVEL DATA/Split/Left"), LabelWidth(60)]
    [SerializeField]
    int _width = 9;

    [InlineButton(nameof(MakeGrid))] [VerticalGroup("LEVEL DATA/Split/Right"), LabelWidth(60)] [SerializeField]
    int _height = 16;

    [TitleGroup("GRID", boldTitle: true)]
    [TableMatrix(SquareCells = true, HideRowIndices = false, HideColumnIndices = true, RespectIndentLevel = true,
        ResizableColumns = false, DrawElementMethod = nameof(DrawCells))]
    [SerializeField]
    public CellData[,] Matrix = new CellData[5, 5];


    public int Width => Matrix?.GetLength(0) ?? 0;
    public int Height => Matrix?.GetLength(1) ?? 0;

    private void MakeGrid()
    {
#if UNITY_EDITOR
        if (UnityEditor.EditorUtility.DisplayDialog("LEVEL DATA",
                "Are you sure you want generate a new grid?\n\nWARNING\nGenerating a new grid will reset all current cells.",
                "Yes", "No"))
        {
            Matrix = new CellData[_width, _height];
            for (int x = 0; x < _width; x++)
            {
                for (int y = 0; y < _height; y++)
                    Matrix[x, y] = new CellData();
            }
        }
#endif
    }

    public static Color GetColor(TileType tileType) => tileType switch
    {
        TileType.Empty => new Color(1f, .3f, .1f, .6f),
        TileType.Disable => Color.gray,
        TileType.Walkable => new Color(0.3f, 0.5f, 0f, 1f),
        TileType.Gift => new Color(0.7f, 0.5f, 0f, 1f),
        _ => Color.clear
    };

    private static CellData DrawCells(Rect rect, CellData value)
    {
        if (Application.isEditor is false)
            return value;

#if UNITY_EDITOR

        if (value == null)
            value = new CellData();

        EditorGUI.DrawRect(rect.Padding(1f), GetColor(value.tileType));
        GUILayout.BeginArea(rect);

        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontStyle = FontStyle.Bold;

        if (GUILayout.Button(value.tileType.ToString(), style))
        {
            value.tileType++;

            if (((int)value.tileType) >= Enum.GetNames(typeof(TileType)).Length)
                value.tileType = 0;

            GUI.changed = true;
        }

        EditorGUILayout.BeginHorizontal();
        EditorGUIUtility.labelWidth = 30;
        EditorGUILayout.EndHorizontal();

        if (value.tileType.Equals(TileType.Disable))
        {
            EditorGUIUtility.labelWidth = 50;
            value.tilePlacement = (TilePlacements)EditorGUILayout.EnumPopup("Type", value.tilePlacement);
            if (value.tilePlacement == TilePlacements.Hurdle)
            {
                value.typeOfHurdle = (TypesOfHurdle)EditorGUILayout.EnumPopup("Type", value.typeOfHurdle);
            }
            else if (value.tilePlacement == TilePlacements.Item)
            {
                value.typeOfItem = (ItemType)EditorGUILayout.EnumPopup("Type", value.typeOfItem);
                if (value.typeOfItem == ItemType.Fruits)
                {
                    value.typeOfFruit = (Fruits)EditorGUILayout.EnumPopup("Type", value.typeOfFruit);
                }
                else if (value.typeOfItem == ItemType.Vegetables)
                {
                    value.typeOfVegetables = (Vegetables)EditorGUILayout.EnumPopup("Type", value.typeOfVegetables);
                }
            }
        }
        else if (value.tileType.Equals(TileType.Walkable))
        {
            EditorGUIUtility.labelWidth = 50;
            value.IsPlayer = EditorGUILayout.Toggle("Player", value.IsPlayer);
        }

        GUILayout.EndArea();

#endif

        return value;
    }
}