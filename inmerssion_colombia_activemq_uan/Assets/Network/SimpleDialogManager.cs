using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml.Serialization;
using System.IO;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;
using System.Diagnostics;
using Havir.Sockets.Client;
using System.Threading.Tasks;
using System.Linq;

public class SimpleDialogManager : MonoBehaviour
{

    public float transitionLength;
    public int eventIndex = 0;
    string response;
    public bool isSpeaking = false;
    public bool isListening = false;
    public bool isWaiting = false;
    public bool playOnAwake = false;
    public bool running;


    public Agent[] agents;
    public static string targetagent;
    // Use this for initialization
    private Process serverProcess;
    private SocketClient client;

    void Start()
    {
        StartCoroutine("RunGame");
    }

    private void OnDestroy()
    {
        if (serverProcess != null && serverProcess.HasExited == false)
            serverProcess.Kill();
        serverProcess.Dispose();
        running = false;
    }

    private void OnRecivedMessageHandler(string message)
    {
        var messages = message.Split('|');
        var audio = messages[0].Split('+');
        var animation = messages[1].Split('+');

        Dispatcher.InvokeAsync(() => {
            _Speech(audio[0], audio[1]);
            _Animation(animation[0], animation[1]);
        });

    }


    // Update is called once per frame
    void Update()
    {

    }
    IEnumerator RunGame()
    {
        ProcessStartInfo info = new ProcessStartInfo();
        info.WindowStyle = ProcessWindowStyle.Hidden;
        info.FileName = @"D:\AppData\HAVIR\Console\Havir.Main.exe";
        serverProcess = new Process();
        serverProcess.StartInfo = info;
        serverProcess.Start();

        var client = new SocketClient();
        client.Connect("", 4224);
        client.OnRecivedMessage += OnRecivedMessageHandler;
        Task task = new Task(client.ReceiveDataFromServer);
        task.Start();
        running = true;
        UnityEngine.Debug.Log("Client strated");
        while (running)
        {
            // UnityEngine.Debug.Log("Running");
            yield return null;
        }
        //client.Dispose();
    }

    public void setResponse(string str)
    {
        response = str;
        isListening = false;
    }

    private void _Speech(string agent, string audio)
    {
        UnityEngine.Debug.Log("Playing...");
        isSpeaking = true;
        SpeechControllerOVRLP thisAgent;
        if (string.IsNullOrEmpty(audio))
        {
            thisAgent = agents[0].speech;
        }
        else
        {
            thisAgent = agents.First(x => x.name.Equals(agent)).speech;
        }
        thisAgent.Speak(audio);
    }

    private void _Animation(string agent, string animation)
    {
        AnimationManager thisAgent;
        if (targetagent == null)
        {
            thisAgent = agents[0].anim;
        }
        else
        {
            thisAgent = agents.First(x => x.name.Equals(agent)).anim;
        }
        //Make sure to set the HasExitTime variable on the transitions to false;
        thisAgent.Play(animation, 0);
    }

    //IEnumerator RunGame()
    //{
    //    while (eventIndex < currentScene.@event.Length)
    //    {
    //        Debug.Log(currentScene.@event[eventIndex].GetType().ToString());

    //        //Play dialogs
    //        if (currentScene.@event[eventIndex].dialog != null)
    //        {

    //        }

    //        //Play animations
    //        if (currentScene.@event[eventIndex].animation != null)
    //        {

    //        }


    //        //Activate trigger
    //        if (currentScene.@event[eventIndex].trigger != null)
    //        {
    //            Memorize(currentScene.@event[eventIndex].id, "trigger");
    //            sceneEventTrigger trigger = currentScene.@event[eventIndex].trigger;
    //            if (trigger.Value != null)
    //            {
    //                GameObject.Find(trigger.@object).SendMessage(trigger.method, trigger.Value);
    //            }
    //            else
    //            {
    //                GameObject.Find(trigger.@object).SendMessage(trigger.method);
    //            }
    //            SetNextEventIndex(currentScene.@event[eventIndex].jump_id);
    //            continue;
    //        }

    //        //Wait
    //        if (currentScene.@event[eventIndex].wait != null)
    //        {
    //            float timeOut = currentScene.@event[eventIndex].wait.time_out;
    //            if (timeOut > 0)
    //            {
    //                Invoke("StopWaiting", timeOut);
    //            }
    //            isWaiting = true;
    //            while (isWaiting)
    //            {
    //                yield return null;
    //            }
    //            SetNextEventIndex(currentScene.@event[eventIndex].jump_id);
    //            continue;
    //        }
    //        yield return null;

    //        //Memorize
    //        if (currentScene.@event[eventIndex].memory != null)
    //        {
    //            if (CheckMemory(currentScene.@event[eventIndex].memory.Value))
    //            {
    //                Debug.Log("Yes I remember!");
    //                SetNextEventIndex(currentScene.@event[eventIndex].memory.remembered);
    //            }

    //            else
    //            {
    //                Debug.Log("No I dont remember!");
    //                SetNextEventIndex(currentScene.@event[eventIndex].memory.notRemembered);
    //            }
    //            continue;
    //        }
    //        yield return null;
    //    }

    //    if (currentScene.nextScene.Equals("none"))
    //    {
    //        Application.Quit();
    //    }
    //    else
    //    {
    //        Connection.KillConnection();
    //        //Application.LoadLevel(currentScene.nextScene);
    //    }
    //}

    public void StopWaiting()
    {
        isWaiting = false;
    }

    // Weird method to find an element in the array. Comment with a reference of how it works.
    private static bool SameName(Agent agent)
    {
        return agent.name == targetagent;
    }
}
