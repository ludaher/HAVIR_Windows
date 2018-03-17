﻿using Havir.Sockets.Entities;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Api.Speech
{
    public class Question
    {
        public delegate void QuestionSelected(Question question);
        public QuestionSelected OnQuestionSelected;

        public EmitMessage OnEmitMessage;

        private List<Answer> _answers;
        private bool _isRoot;
        private string _id;

        public Question Parent { get; set; }
        public string Id { get { return _id; } }
        public string TargetId { get; set; }
        public string Description { get; set; }
        public string Audio { get; set; }
        public string Animation { get; set; }
        public string Keyphrase { get; set; }
        public bool Wait { get; set; }

        public NodeType Type { get; set; }
        public bool IsRoot { get { return _isRoot; } }
        public Action<string> GraphAction { get; set; }
        public List<Answer> Answers { get { return _answers; } }
        public bool IsRunning { get; set; }

        public Question(string targetId, string id, string keyphrase, string description, string audio,
            string animation, NodeType nodeType, bool isRoot, bool wait)
        {
            TargetId = targetId.Trim();
            _id = id.Trim();
            Description = description.Trim();
            if (audio != null)
                Audio = audio.Trim();
            if (audio != null)
                Animation = animation.Trim();
            if (keyphrase != null)
                Keyphrase = keyphrase.Trim();
            _isRoot = isRoot;
            Wait = wait;
            _answers = new List<Answer>();
            Type = nodeType;
        }

        public Question Execute(string keyword, bool kill = true)
        {
            if (kill == true)
                _EmitKillMessage();
            _EmitActionMessage();
            //if (Type != NodeType.Decision)
            //{
            //    var nextQuestion = _answers.Select(x => x.Target).FirstOrDefault();
            //    if (nextQuestion != null)
            //    {
            //        return nextQuestion.Execute(keyword, false);
            //    }
            //}
            //else
            //{
            IsRunning = true;
            if (OnQuestionSelected != null)
                OnQuestionSelected(this);
            //}
            return this;
        }

        private void _EmitKillMessage()
        {
            var message = new UnityActionMessage();
            message.Message = "##kill";
            message.MessageType = MessageTypeEnum.Success;
            EmitMessage(message);
        }

        private void _EmitActionMessage()
        {
            var message = new UnityActionMessage();
            message.Description = Description;
            message.Audio = Audio;
            message.Animation = Animation;
            message.Wait = Wait;
            message.MessageType = MessageTypeEnum.Success;
            EmitMessage(message);
        }

        public void AddArista(Answer arista)
        {
            //if (Type != NodeType.Decision && _answers.Any())
            //    throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            _answers.Add(arista);
        }

        public void AddArista(List<Answer> aristas)
        {
            //if (Type != NodeType.Decision && _answers.Any())
            //    throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            //if (Type != NodeType.Decision && aristas.Count > 1)
            //    throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            _answers.AddRange(aristas);
        }

        public Answer FindArista(string option)
        {
            return _answers.FirstOrDefault(x => x.Choices.Any(o => o.Equals(option)));
        }

        public void EmitMessage(UnityActionMessage message)
        {
            if (OnEmitMessage != null)
                OnEmitMessage(message);
        }
    }

    public class Answer
    {
        public string TargetId { get; set; }
        public Question Target { get; set; }
        public string[] Choices { get; set; }
        public Guid GrammarId { get; set; }
    }

    public enum NodeType
    {
        Start,
        Terminator,
        Data,
        Decision

    }
}
