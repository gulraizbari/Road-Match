using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CharacterLevel : MonoBehaviour
{
  [SerializeField]  TextMeshPro _lvlText;

  public void UpdateLevelText(int value)
  {
    _lvlText.SetText($"{value}");
  }
}
