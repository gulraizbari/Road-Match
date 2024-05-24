using System.Collections;
using System.Collections.Generic;
using Features.UI.Logics;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

public class Setting : PanelBase
{
    [BoxGroup("Buttons"),SerializeField] Button _sound;
    [BoxGroup("Buttons"),SerializeField] Button _music;
    [BoxGroup("Buttons"),SerializeField] Button _haptic;
    [BoxGroup("Buttons/State"),SerializeField] Sprite _enable;
    [BoxGroup("Buttons/State"),SerializeField] Sprite _disable;

    public static int Sound { get=>PlayerPrefs.GetInt("Sound"); set=>PlayerPrefs.SetInt("Sound",value); }
    public static int Music { get=>PlayerPrefs.GetInt("Music"); set=>PlayerPrefs.SetInt("Music",value); }
    public static int Haptic { get=>PlayerPrefs.GetInt("Haptic"); set=>PlayerPrefs.SetInt("Haptic",value); }
    void Start()
    {
        _sound.image.sprite = Sound > 0 ? _disable : _enable;
        _music.image.sprite = Music > 0 ? _disable : _enable;
        _haptic.image.sprite = Haptic > 0 ? _disable : _enable;
        _sound.onClick.AddListener((() =>
        {
            SoundLogic();
            _sound.image.sprite = Sound > 0 ? _disable : _enable; 
        }));
        _music.onClick.AddListener((() =>
        {
            MusicLogic();
            _music.image.sprite = Music > 0 ? _disable : _enable;
        }));
        _haptic.onClick.AddListener((() =>
        {
            HapticLogic();
            _haptic.image.sprite = Haptic > 0 ? _disable : _enable; }));
    }

    private int SoundLogic()=>Sound = Sound is 0 ? 1 : 0;
    private int MusicLogic()=>Music = Music is 0 ? 1 : 0;
    private int HapticLogic()=>Haptic = Haptic is 0 ? 1 : 0;
    
   
}
