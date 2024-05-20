using System;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.Utilities;
using Sirenix.OdinInspector;

#if UNITY_EDITOR
using UnityEditor;
#endif

[System.Serializable]
public sealed class CellData
{
    //===================================================
    // FIELDS
    //===================================================

    [SerializeField] public TileType tileType;
    [SerializeField] public TilePlacements tilePlacement;
    [SerializeField] public TypesOfHurdle typeOfHurdle;
    [SerializeField] public ItemType typeOfItem;
    [SerializeField] public Fruits typeOfFruit;
    [SerializeField] public Vegetables typeOfVegetables;
    [SerializeField] public Animals typeOfAnimals;
    [SerializeField] public RandomObjects typeOfRandomObjects;
    [SerializeField] public bool IsPlayer;
    // [SerializeField] public IngredientsProcess ingredientsProcess;
    // [SerializeField] public IngredientType ingredientType;
    // [SerializeField] public HybridStationType hybridStationType;
    // [SerializeField] public RecipeFormulas recipeFormulas;
    // [SerializeField] public int       Level        = 1;
    // [SerializeField] public Currency  RewardType   = Currency.Gold;
    // [SerializeField] public double    RewardAmount = 10d;
    // [SerializeField] public ShaftType Shaft        = ShaftType.Forge;
    // [SerializeField] public ChestData Chest        = null;
    // [SerializeField] public bool      FinalGate    = false;
    // [SerializeField] public CardType  CardType     = CardType.Common;
    // [SerializeField] public int       CardLevel    = 2;
    // [FormerlySerializedAs("_unBreakableTiles")] [SerializeField] public UnBreakableRocks _unBreakableRocks;

    //===================================================
    // METHODS
    //===================================================
    /// <summary>
    /// Default Constructor.
    /// </summary>
    public CellData()
    {
        tileType = TileType.Empty;
        tilePlacement = TilePlacements.None;
        typeOfHurdle = TypesOfHurdle.NonBreakable;
        typeOfItem = ItemType.None;
        typeOfFruit = Fruits.None;
        typeOfVegetables = Vegetables.None;
        typeOfAnimals = Animals.None;
        typeOfRandomObjects = RandomObjects.None;
        
        IsPlayer = false;
    }
}

[HideMonoScript]
[CreateAssetMenu(fileName = "Level Data", menuName = "RoadMap/Level Data", order = 0)]
public sealed class LevelData : SerializedScriptableObject
{
    //===================================================
    // FIELDS
    //===================================================

    [TitleGroup("LEVEL DATA", boldTitle: true)]
    [HorizontalGroup("LEVEL DATA/Split")]
    [VerticalGroup("LEVEL DATA/Split/Left"), LabelWidth(60)]
    [SerializeField]
    int _width = 9;

    [InlineButton(nameof(MakeGrid))] [VerticalGroup("LEVEL DATA/Split/Right"), LabelWidth(60)] [SerializeField]
    int _height = 16;

    [Space] public List<ItemContainer> Containers;

    [Space]
    [TitleGroup("GRID", boldTitle: true)]
    [TableMatrix(SquareCells = true, HideRowIndices = false, HideColumnIndices = true, RespectIndentLevel = true,
        ResizableColumns = false, DrawElementMethod = nameof(DrawCells))]
    [SerializeField]
    public CellData[,] Matrix = new CellData[5, 5];


    //===================================================
    // PROPERTIES
    //===================================================
    public int Width => Matrix?.GetLength(0) ?? 0;
    public int Height => Matrix?.GetLength(1) ?? 0;

    //===================================================
    // METHODS
    //===================================================
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
        TileType.Gate => new Color(0.25f, 0.7f, 1f, 1f),
        // TileType.ChoppingBoardStation      => new Color(0.8f, 0.3f, .5f, 1f),
        // TileType.OrderTable      => new Color(0.8f, 0.3f, .2f, 1f),
        // TileType.Stove      => new Color(0.6f, 0.4f, .5f, .5f),
        _ => Color.clear
    }; //SetColor() end

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
                else if (value.typeOfItem == ItemType.Animals)
                {
                    value.typeOfAnimals = (Animals)EditorGUILayout.EnumPopup("Type", value.typeOfAnimals);
                }
                else if (value.typeOfItem == ItemType.Random)
                {
                    value.typeOfRandomObjects = (RandomObjects)EditorGUILayout.EnumPopup("Type", value.typeOfRandomObjects);
                }
            }
        }
        else if (value.tileType.Equals(TileType.Walkable))
        {
            EditorGUIUtility.labelWidth = 50;
            value.IsPlayer = EditorGUILayout.Toggle("Player", value.IsPlayer);
            // value.ingredientType =(IngredientType)EditorGUILayout.EnumPopup("Type", value.ingredientType);
            //value.stationFace    = (StationFace)EditorGUILayout.EnumPopup("Type", value.stationFace);
            //value.ingredientsProcess= (IngredientsProcess)EditorGUILayout.EnumPopup("Type", value.ingredientsProcess);
        }

        // else if (value.tileType.Equals(TileType.ChoppingBoardStation))
        // {
        //     EditorGUIUtility.labelWidth = 50;
        //     value.stationFace    = (StationFace)EditorGUILayout.EnumPopup("Type", value.stationFace);
        // }
        // else if (value.tileType.Equals(TileType.Stove))
        // {
        //     EditorGUIUtility.labelWidth = 50;
        //     value.stationFace    = (StationFace)EditorGUILayout.EnumPopup("Type", value.stationFace);
        // }else if (value.tileType.Equals(TileType.OrderTable))
        // {
        //     EditorGUIUtility.labelWidth = 50;
        //     value.recipeFormulas     = (RecipeFormulas)EditorGUILayout.ObjectField("Recipes", value.recipeFormulas, typeof(RecipeFormulas), false);
        //     value.stationFace    = (StationFace)EditorGUILayout.EnumPopup("Type", value.stationFace);
        //     
        // }
        // {
        //     value.Shaft = (ShaftType)EditorGUILayout.EnumPopup(value.Shaft);
        //     
        //     if(value.Shaft != ShaftType.Forge)
        //     {
        //         EditorGUIUtility.labelWidth = 40;
        //         value.Level     = EditorGUILayout.IntField("Level", value.Level);
        //         value.Chest     = (ChestData)EditorGUILayout.ObjectField("Chest", value.Chest, typeof(ChestData), false);
        //         value.CardType  = (CardType)EditorGUILayout.EnumPopup(value.CardType);
        //         EditorGUIUtility.labelWidth = 65;
        //         value.CardLevel = EditorGUILayout.IntField("Card Level", value.CardLevel);
        //     }//if end
        // }//else if end
        // else if(value.Cell.Equals(Cell.Gate))
        // {
        //     EditorGUIUtility.labelWidth = 60;
        //     value.FinalGate = EditorGUILayout.Toggle("Final Gate", value.FinalGate);
        //     EditorGUIUtility.labelWidth = 40;
        //     value.Chest     = (ChestData)EditorGUILayout.ObjectField("Chest", value.Chest, typeof(ChestData), false);
        // }//else if end
        // else if(value.Cell.Equals(Cell.Chest))
        // {
        //     EditorGUIUtility.labelWidth = 40;
        //     value.Level     = EditorGUILayout.IntField("LvL", value.Level);
        //     value.MineType  = (MineType)EditorGUILayout.EnumPopup("Type", value.MineType);
        //     value.Chest     = (ChestData)EditorGUILayout.ObjectField("Chest", value.Chest, typeof(ChestData), false);
        //     EditorGUIUtility.labelWidth = 70;
        //     value.HideModel = EditorGUILayout.Toggle("Hide Chest", value.HideModel);
        // }//else if end
        // else if (value.Cell.Equals(Cell.Unbreakable))
        // {
        //     EditorGUIUtility.labelWidth = 40;
        //     value._unBreakableRocks=(UnBreakableRocks)EditorGUILayout.EnumPopup("Type", value._unBreakableRocks);
        // }
        GUILayout.EndArea();

#endif

        return value;
    }
}