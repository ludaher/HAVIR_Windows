using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Windows.Speech;

/// <summary>
/// Clase que maneja el reconocedor de palabras claves y las acciones que debe ejecutar
/// </summary>
public class UnityKeywordRecognizerController:IDisposable {

    private KeywordRecognizer _recognizer;
    private Dictionary<string, Action<string>> _keywords;

    public KeywordRecognizer Recognizer { get { return _recognizer; } }

    public UnityKeywordRecognizerController(Dictionary<string, Action<string>> keywords)
    {
        _recognizer = new KeywordRecognizer(keywords.Keys.ToArray());
        _recognizer.OnPhraseRecognized += OnPhraseRecognizedHandler;
        _keywords = keywords;
    }

    /// <summary>
    /// Manejador de enventos del reconocedor de palabras clave.
    /// Ejecuta las acciones dependiendo lo reconocido.
    /// </summary>
    /// <param name="args"></param>
    private void OnPhraseRecognizedHandler(PhraseRecognizedEventArgs args)
    {
        Action<string> keywordAction;
        if(_keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke(args.text);
        }

    }

    public void Dispose()
    {
        _recognizer.Stop();
        _recognizer.Dispose();
    }
}
