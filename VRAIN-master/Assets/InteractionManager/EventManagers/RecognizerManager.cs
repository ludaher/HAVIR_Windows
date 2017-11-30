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
    private Queue<Tuple<string[], string[]>> queue;
    private AgentStatusManager currentAgentStatus;

    void Start()
    {
        dm = new DialogManager();
        am = new AnimationManager();
        queue = new Queue<Tuple<string[], string[]>>();
        currentAgentStatus = gameObject.GetComponent<AgentStatusManager>();
        RunGame();
    }

    private void OnDestroy()
    {
        if (serverProcess == null)
            return;
        if (serverProcess.HasExited == false)
            serverProcess.Kill();
        serverProcess.Dispose();
        running = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (currentAgentStatus != null && currentAgentStatus.isSpeaking == true || queue.Count == 0) return;
        var nextItem = queue.Dequeue();
        if (nextItem == null) return;
        _Speech(nextItem.Item1[0]);
        _Animation(nextItem.Item2[0]);
    }

    void RunGame()
    {
        _StartServer();
        _InitClient();
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
        UnityEngine.Debug.Log("Client strated");
    }


    private void OnRecivedMessageHandler(string messages)
    {
        foreach (var message in messages.Split('\n'))
        {
            if (string.IsNullOrEmpty(message)) continue;
            if (message.Equals("##kill"))
            {
                _Interrupt();
            }
            var actions = message.Split('|');
            if (actions.Length == 1) continue;
            var audio = actions[0].Split('+');
            var animation = actions[1].Split('+');
            queue.Enqueue(new Tuple<string[], string[]>(audio, animation));
        }

    }

    private void _Interrupt()
    {
        queue.Clear();
        currentAgentStatus.isSpeaking = false;
    }

    private void _Speech(string audio)
    {
        if (string.IsNullOrWhiteSpace(audio)) return;
        var dialog = new Dialog();
        dialog.agent = gameObject;
        dialog.audioFileName = audio;
        dm = gameObject.GetComponent<DialogManager>();
        dm.Speak(dialog);
    }

    private void _Animation(string animation)
    {
        if (string.IsNullOrWhiteSpace(animation)) return;
        var animate = new Animate();
        animate.animation = animation;
        am = gameObject.GetComponent<AnimationManager>();
        am.PlayAnimation(animate);
    }

}

