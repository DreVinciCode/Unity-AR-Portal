using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class SoundManager
{
    public enum Sound
    {
        FireStart,
        FireContinuous,
        Rock_Seperate,
        Rock_Collide,
    }

    private static Dictionary<Sound, float> soundTimerDictionary;
    private static AudioSource audioSource;

    public static void Initialize()
    {
        soundTimerDictionary = new Dictionary<Sound, float>();
        soundTimerDictionary[Sound.FireContinuous] = 0f;
    }

    public static void PlaySound(Sound sound)
    {
        if (CanPlaySound(sound))
        {
            GameObject soundGameObject = new GameObject("Sound");
            audioSource = soundGameObject.AddComponent<AudioSource>();
            audioSource.PlayOneShot(GetAudioClip(sound), 0.05f);
        }
    }

    public static void StopSound()
    {
        if (audioSource != null)
        {
            audioSource.Stop();
        }
    }

    private static bool CanPlaySound(Sound sound)
    {
        switch(sound)
        {
            default: return true;

            /*
            case Sound.FireContinuous:
                if(soundTimerDictionary.ContainsKey(sound))
                {
                    float lastTimePlayed = soundTimerDictionary[sound];
                    float timerMax = 0.05f;
                    if (lastTimePlayed + timerMax < Time.time)
                    {
                        soundTimerDictionary[sound] = Time.time;
                        return true;
                    }
                    else return false;
                }
                else
                {
                    return true;
                }
            */
        }
    }

    private static AudioClip GetAudioClip(Sound sound)
    {
        foreach(GameAssets.SoundAudioClip soundAudioClip in GameAssets.i.soundAudioClipArray)
        {
            if(soundAudioClip.sound == sound)
            {
                return soundAudioClip.audioClip;
            }
        }
        return null;
    }
}

