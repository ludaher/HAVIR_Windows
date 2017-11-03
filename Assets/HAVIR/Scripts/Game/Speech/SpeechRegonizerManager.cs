using Assets.HAVIR.Scripts.Game.Speech.Graph;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class SpeechRegonizerManager : MonoBehaviour, IDisposable
{

    private static IVoiceRecognizer _recognizer;
    private static List<Question> _graph;
    // Use this for initialization
    void Start()
    {
        if (_recognizer != null)
            return;
        //_manager = this;
        InitRecognizer(false, true);
    }

    // Update is called once per frame
    void OnDestroy()
    {
        this.Dispose();
    }

    public void Dispose()
    {
        _recognizer.Dispose();
        _recognizer = null;
    }

    #region IVoiceRecognizer actions

    public static Guid AddKeywordRecognition(List<string> keywords, KeyWordRecognized handler, bool startInmmediately = false)
    {
        var id = _recognizer.AddKeywordRecognition(keywords, startInmmediately);
        _recognizer.OnKeywordRecognized += handler;
        return id;
    }

    public static Guid AddKeywordRecognition(List<string> keywords, bool startInmmediately = false)
    {
        var id = _recognizer.AddKeywordRecognition(keywords, startInmmediately);
        return id;
    }

    //public static void AddKeyworRecognizedHandler(KeyWordRecognized handler)
    //{
    //    _recognizer.OnKeywordRecognized += handler;
    //}

    //public static void RemoveKeyworRecognizedHandler(KeyWordRecognized handler)
    //{
    //    _recognizer.OnKeywordRecognized -= handler;
    //}
    private void InitRecognizer(bool dictation, bool keywordRecognation)
    {
        if (_recognizer != null)
            return;
        _recognizer = new UnitySpeechRecognizer();
        _LoadGraphToRecognizerManager();
        //var keywordsStart = new List<string>() { "iniciar dialogo", "quiero preguntarte algo" };
        //AddKeywordRecognition(keywordsStart, StartDialogHandler);
        var keywords = new List<string>() { "hola" };
        AddKeywordRecognition(keywords, WelcomeHandler);
        //var keywords1 = new List<string>() { "Adios", "chao", "hablamos luego", "nos vemos", "suerte", "que duerma", "vemos" };
        //AddKeywordRecognition(keywords1, LeaveHandler);
        _recognizer.InitRecognizer(dictation, keywordRecognation);
    }

    private void WelcomeHandler(object obj, KeywordRecognizedArgs args)
    {
        VoiceManager.AddToSpeechQueue("Dijiste " + args.Text);
    }

    private void LeaveHandler(object obj, KeywordRecognizedArgs args)
    {
        VoiceManager.AddToSpeechQueue("Nos vemos luego");
    }

    private void StartDialogHandler(object obj, KeywordRecognizedArgs args)
    {
        var startNode = _graph.Where(x => x.Type == NodeType.Start).FirstOrDefault();
        startNode.Execute(args.Text);
    }
    private void _LoadGraphToRecognizerManager()
    {
        _graph = GraphMapper.GetGraphNodes(@"C:\Users\Lucho\Documents\En ejecución\Proyectos\UAN\HAVIR\HumanoVirtual\Assets\HAVIR\Scripts\Game\Main\GraphModel\BasicDialog.graphml");
        var keywords = new List<string>();
        foreach (var node in _graph)
        {
            foreach (var arista in node.Answer)
            {
                if (node.Type == NodeType.Decision)
                    keywords.AddRange(arista.Choices);
            }
        }
        AddKeywordRecognition(keywords);
    }

    private static void Facebook()
    {
        VoiceManager.AddToSpeechQueue("Estamos abriendo facebook");
    }

    private static void PrintAction()
    {
        VoiceManager.AddToSpeechQueue("Reconocido");
    }

    public static void RemoveKeywordRecognition(Guid id)
    {
        _recognizer.RemoveKeywordRecognition(id);
    }

    public static void StopKeywordRecognition(Guid id)
    {
        _recognizer.StopKeywordRecognition(id);
    }

    #endregion
}
