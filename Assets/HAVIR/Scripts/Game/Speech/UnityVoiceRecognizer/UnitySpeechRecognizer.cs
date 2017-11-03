using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Windows.Speech;

public class UnitySpeechRecognizer : IVoiceRecognizer
{

    #region Private parameters

    private DictationRecognizer _dictationRecognizer;
    private Dictionary<Guid, KeywordRecognizer> _recognizerDictionary;
    private List<string> _keywords;
    #endregion

    #region OnRecognized event
    public event KeyWordRecognized OnKeywordRecognized;

    private void KeywordRecognizedHandler(PhraseRecognizedEventArgs args)
    {
        Debug.Log("Reconocido: " + args.text);
        if (OnKeywordRecognized != null)
        {
            var keywordArgs = new KeywordRecognizedArgs(args.text);
            OnKeywordRecognized(this, keywordArgs);
        }
    }
    #endregion

    public UnitySpeechRecognizer()
    {
        _recognizerDictionary = new Dictionary<Guid, KeywordRecognizer>();
        _dictationRecognizer = new DictationRecognizer();
        _keywords = new List<string>();
    }

    #region IVoiceRecognizer implementation

    public Guid AddKeywordRecognition(List<string> keywords, bool startInmmediately = false)
    {
        var id = Guid.NewGuid();
        try
        {
            var newKeywords = keywords.Except(_keywords);
            if (newKeywords.Any() == false)
                return Guid.Empty;
            var recognizer = new KeywordRecognizer(newKeywords.ToArray());
            recognizer.OnPhraseRecognized += KeywordRecognizedHandler;
            if (startInmmediately)
                recognizer.Start();
            _recognizerDictionary.Add(id, recognizer);
            _keywords.AddRange(newKeywords);
        }
        catch (Exception ex)
        {
            Debug.Log("Error agregando keywordrecognition: " + ex.ToString());
        }
        return id;
    }

    public void InitRecognizer(bool dictation, bool keywordRecognation)
    {
        if (dictation)
            _dictationRecognizer.Start();
        foreach (var recognizer in _recognizerDictionary)
        {
            recognizer.Value.Start();
        }
    }

    public void RemoveKeywordRecognition(Guid id)
    {
        KeywordRecognizer recognizer;
        if (_recognizerDictionary.TryGetValue(id, out recognizer))
        {
            recognizer.Stop();
            recognizer.Dispose();
            _recognizerDictionary.Remove(id);
        }
    }

    public void StopKeywordRecognition(Guid id)
    {
        KeywordRecognizer recognizer;
        if (_recognizerDictionary.TryGetValue(id, out recognizer))
        {
            recognizer.Stop();
        }
    }

    public void Dispose()
    {
        foreach (var recognizer in _recognizerDictionary)
        {
            recognizer.Value.Dispose();
        }
    }

    //public Guid AddKeywordRecognition(List<string> keywords, Action<string> action, bool startInmmediately = false)
    //{
    //    return AddKeywordRecognition(keywords.ToDictionary(x => x, x => action), startInmmediately);
    //}
    #endregion
}
