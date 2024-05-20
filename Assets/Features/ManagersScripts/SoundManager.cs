using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioSource audioSource;
    public List<AudioClip> Clips;

    public static SoundManager Instance;

    void Awake()
    {
        Instance = this;
    }

    private void PlayShot(int index, float volume)
    {
        audioSource.PlayOneShot(Clips[index],volume);
    }

    public void PlayTileSelect(float volume)
    {
        PlayShot(0,volume);
    }
    public void LevelComplete(float volume)
    {
        PlayShot(2,volume);
    }
    public void PlayTileMerge(float volume)
    {
        PlayShot(1,volume);
    }
}
