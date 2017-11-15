using Havir.Sockets.Client;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Threading.Tasks;
using System.Diagnostics;

public class HavirClient : MonoBehaviour
{
    private Process serverProcess;

    // Use this for initialization
    void Start()
    {
        serverProcess = new Process();
        serverProcess.StartInfo.FileName = @"D:\AppData\HAVIR\Console\Havir.Main.exe";
        serverProcess.Start();

        var client = new SocketClient();
        client.Connect("", 4224);
        client.OnRecivedMessage += OnRecivedMessageHandler;
        var task = new Task(() => client.ReceiveDataFromServer());
        task.Start();
    }

    private void OnDestroy()
    {
        serverProcess.Kill();
        serverProcess.Dispose();
    }

    private void OnRecivedMessageHandler(string message)
    {
        //VoiceManager.Stop();
        VoiceManager.AddToSpeechQueue(message.Split('|')[0]);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
