using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class SoundManager : MonoBehaviour
{
    public AudioSource audioSource;
    public AudioSource audioSourceBG;
    public List<AudioClip> Clips;

    public static SoundManager Instance;

    void Awake()
    {
        Instance = this;
    }

    private void PlayShot(int index, float volume)
    {
        if (Setting.Music is 0)audioSource.PlayOneShot(Clips[index],volume);
    }

    public void PlayTileSelect(float volume)
    {
        PlayShot(0,volume);
    }
    public void LevelComplete(float volume)
    {
        PlayShot(2,volume);
    }
    public void LevelFail(float volume)
    {
        PlayShot(3,volume);
    }
    public void PlayTileMerge(float volume)
    {
        PlayShot(1,volume);
    } 
    public void PlayDeathScreem(float volume)
    {
        PlayShot(4,volume);
    }
    public void PlaySword(float volume)
    {
        PlayShot(5,volume);
    }
    public void PlayClick(float volume)
    {
        PlayShot(6,volume);
    }  public void PlayChest(float volume)
    {
        PlayShot(7,volume);
        Joy();
    }  public void PlayKey(float volume)
    {
        PlayShot(8,volume);
        Joy();
    }

    public void Joy()
    {
        var valud = Random.Range(9, 12);
        PlayShot(valud,.7f);
    }
}
