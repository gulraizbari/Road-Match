// using System;
// using Sirenix.OdinInspector;

// #if UNITY_EDITOR
// using Sirenix.OdinInspector.Editor;
// using Sirenix.Utilities.Editor;
// using UnityEngine;

// #if ODIN_INSPECTOR_3
// using Sirenix.OdinInspector.Editor.ValueResolvers;
// #endif

// #pragma warning disable

// public class ColoredBoxGroupDrawer : OdinGroupDrawer<ColoredBoxGroupAttribute> 
// {
    
// #if ODIN_INSPECTOR_3
//     private ValueResolver<string> labelGetter;
    
//     /// <summary>
//     /// initialize values for colors, labels, etc
//     /// </summary>
//     protected override void Initialize()
//     {
//         labelGetter = ValueResolver.GetForString(Property, Attribute.LabelText ?? Attribute.GroupName);
//     }
// #endif

    
//     /// <summary>
//     /// Draw the stuff
//     /// </summary>
//     /// <param name="label">Label string</param>
//     protected override void DrawPropertyLayout(GUIContent label)
//     {
//         GUILayout.Space(Attribute.MarginTop);

//         string headerLabel = Attribute.LabelText;

//         if (Attribute.ShowLabel)
//         {

// #if ODIN_INSPECTOR_3
//             labelGetter.DrawError();
//             headerLabel = labelGetter.GetValue();
// #endif
            
//             if (string.IsNullOrEmpty(headerLabel))
//             {
//                 headerLabel = "";
//             }
//         }

//         GUIHelper.PushColor(new Color(Attribute.R, Attribute.G, Attribute.B, Attribute.A));   
//         SirenixEditorGUI.BeginBox();
//         SirenixEditorGUI.BeginBoxHeader();
//         {
//             GUIHelper.PopColor();

//             if (Attribute.ShowLabel)
//             {
//                 if(Attribute.CenterLabel)
//                 {
//                     SirenixEditorGUI.Title(headerLabel, null, TextAlignment.Center, false, Attribute.BoldLabel);
//                 }
//                 else
//                 {
//                     SirenixEditorGUI.Title(headerLabel, null, TextAlignment.Left, false, Attribute.BoldLabel);
//                 }

//             }
//         }
//         SirenixEditorGUI.EndBoxHeader();

//         for (int i = 0; i < Property.Children.Count; i++)
//         {
//             Property.Children[i].Draw();
//         }

//         SirenixEditorGUI.EndBox();

//         GUILayout.Space(Attribute.MarginBottom);

//         GUILayout.EndArea();
//     }
// }
// #endif


// #pragma warning disable
// [AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
// [global::System.Diagnostics.Conditional("UNITY_EDITOR")]
// public class ColoredBoxGroupAttribute : BoxGroupAttribute
// {
//     public float R, G, B, A;
//     public bool BoldLabel;
//     public string LabelText;
//     public int MarginTop { get; set; }
//     public int MarginBottom { get; set; }

//     public ColoredBoxGroupAttribute(
//         string @group,
//         float r, float g, float b, float a,
//         bool showLabel = true,
//         bool centerLabel = false,
//         bool boldLabel = false,
//         float order = 0) : base(@group, showLabel, centerLabel, order)
//     {
//         R = r;
//         G = g;
//         B = b;
//         A = a;

//         BoldLabel = boldLabel;
//     }
    
//     public ColoredBoxGroupAttribute(
//         string @group,
//         string label,
//         float r, float g, float b, float a,
//         bool showLabel = true,
//         bool centerLabel = false,
//         bool boldLabel = false,
//         float order = 0) : base(@group, showLabel, centerLabel, order)
//     {
//         R = r;
//         G = g;
//         B = b;
//         A = a;

//         LabelText = label;
//         BoldLabel = boldLabel;
//     }
// }