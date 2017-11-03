﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public delegate void KeyWordRecognized(object obj, KeywordRecognizedArgs args);

public interface IVoiceRecognizer : IDisposable
{

    event KeyWordRecognized OnKeywordRecognized;

    /// <summary>
    /// Inicializa al reconocedor
    /// </summary>
    /// <param name="dictation">Activar proceso de dictación requerido</param>
    /// <param name="keywordRecognation">Activar proceso de reconocimiento de palabras clave</param>
    void InitRecognizer(bool dictation, bool keywordRecognation);

    /// <summary>
    /// Permite agregar un grupo de palabras clave al reconocedor de voz
    /// </summary>
    /// <param name="keywords">Grupo de palabras clave que serán agregadas al reconocedor de voz</param>
    /// <param name="startInmmediately">Booleano que permite activar el reconocedor de voz al momento de agregar las palabras clave.
    /// Se debe usar preferiblemente luego del InitRecognizer
    /// </param>
    /// <returns>Identificador único del grupo creado en el reconocedor de voz</returns>
    Guid AddKeywordRecognition(List<string> keywords, bool startInmmediately = false);

    ///// <summary>
    ///// Permite agregar un grupo de palabras clave al reconocedor de voz
    ///// </summary>
    ///// <param name="keywords">Grupo de palabras clave que serán agregadas al reconocedor de voz</param>
    ///// <param name="startInmmediately">Booleano que permite activar el reconocedor de voz al momento de agregar las palabras clave.
    ///// Se debe usar preferiblemente luego del InitRecognizer
    ///// </param>
    ///// <returns>Identificador único del grupo creado en el reconocedor de voz</returns>
    //Guid AddKeywordRecognition(List<string> keywords, Action<string> action, bool startInmmediately = false);

    /// <summary>
    /// Elimina un grupo de palabras claves del reconocedor de voz
    /// </summary>
    /// <param name="id">Identificador único del grupo de palabras clave</param>
    void RemoveKeywordRecognition(Guid id);

    /// <summary>
    /// Elimina un grupo de palabras claves del reconocedor de voz
    /// </summary>
    /// <param name="id">Identificador único del grupo de palabras clave</param>
    void StopKeywordRecognition(Guid id);

}

public class KeywordRecognizedArgs
{

    public string Text { get; set; }
    public KeywordRecognizedArgs(string text)
    {
        Text = text;
    }
}