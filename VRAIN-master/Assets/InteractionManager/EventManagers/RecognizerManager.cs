using Havir.Sockets.Client;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;
using UnityEngine;

public class RecognizerManager : MonoBehaviour
{
    
    public bool running;
    
    private Process serverProcess;
    private SocketClient client;
    private DialogManager dm;
    private AnimationManager am;

    void Start()
    {
        dm = new DialogManager();
        am = new AnimationManager();
        StartCoroutine("RunGame");
    }

    private void OnDestroy()
    {
        if (serverProcess != null && serverProcess.HasExited == false)
            serverProcess.Kill();
        serverProcess.Dispose();
        running = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator RunGame()
    {
        _StartServer();
        _InitClient();

        while (running)
        {
            yield return null;
        }
    }

    private void _StartServer()
    {
        ProcessStartInfo info = new ProcessStartInfo();
        //info.WindowStyle = ProcessWindowStyle.Hidden;
        info.FileName = $"{Application.dataPath}/../Havir/Havir.Main.exe";
        serverProcess = new Process();
        serverProcess.StartInfo = info;
        serverProcess.Start();
    }

    private void _InitClient()
    {
        client = new SocketClient();
        client.Connect(4224);
        client.OnRecivedMessage += OnRecivedMessageHandler;
        Task task = new Task(client.ReceiveDataFromServer);
        task.Start();
        running = true;
        UnityEngine.Debug.Log("Client strated");
    }


    private void OnRecivedMessageHandler(string messages)
    {
        foreach(var message in messages.Split('\n'))
        {
            var actions = message.Split('|');
            var audio = actions[0].Split('+');
            var animation = actions[1].Split('+');

            Dispatcher.InvokeAsync(() =>
            {
                var corutine =_Execute(audio, animation);
                StartCoroutine(corutine);
            });
        }

    }

    private IEnumerator _Execute(string[] audio, string[] animation)
    {
        var agent = GameObject.Find(audio[0]);
        var sm = agent.GetComponent<AgentStatusManager>();
        while (sm.isSpeaking == true)
        {
            yield return null;
        }

        _Speech(agent, audio[1]);
        _Animation(agent, animation[1]);
    }

    private void _Speech(GameObject agent, string audio)
    {
        var dialog = new Dialog();
        dialog.agent = agent;
        dialog.audioFileName = audio;
        dm = agent.GetComponent<DialogManager>();
        dm.Speak(dialog);
    }

    private void _Animation(GameObject agent, string animation)
    {
        var animate = new Animate();
        animate.animation = animation;
        am = agent.GetComponent<AnimationManager>();
        am.PlayAnimation(animate);
    }

}
