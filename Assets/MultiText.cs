using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MultiText : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI _valueText1;
    [SerializeField] TextMeshProUGUI _valueText2;

    void Start()
    {
        if (_valueText1 is null)
        {
            _valueText1 = transform.GetComponent<TextMeshProUGUI>();
            _valueText2 = transform.GetChild(0).GetComponent<TextMeshProUGUI>();
        }
       
    }

    [ContextMenu("GetText")]
    public void AssignText()
    {
        _valueText1 = transform.GetComponent<TextMeshProUGUI>();
        _valueText2 = transform.GetChild(0).GetComponent<TextMeshProUGUI>();
    }

    public void UpdateText(string value)
    {
        _valueText1.SetText(value);
        _valueText2.SetText(value);
    }
    
}
