using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoiceManager : MonoBehaviour, IDisposable
{
    private static ISpeakable _Voice;
    private static VoiceManager _VoiceManager;


    // Use this for initialization
    void Start()
    {
        if (_VoiceManager != null)
            return;
        _VoiceManager = this;
        Init();
    }

    /// <summary>
    /// Inicializa las variables necesarias para el control de vos
    /// </summary>
    private void Init()
    {
        _Voice = new WindowsVoice();
        _Voice.AddToSpeechQueue("Buenos días señor, en que le puedo ayudar");
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnDestroy()
    {
        Dispose();
    }

    public static void AddToSpeechQueue(string msg)
    {
        _Voice.AddToSpeechQueue(msg);
    }

    public static void Pause()
    {
        _Voice.Pause();
    }

    public static void Stop()
    {
        _Voice.Stop();
    }

    public static void Continue()
    {
        _Voice.Continue();
    }

    public void Dispose()
    {
        _Voice.Dispose();
        _VoiceManager = null;
    }
}
