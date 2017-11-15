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

        private List<Answer> _answer;
        private bool _isRoot;
        private string _id;

        public Question Parent { get; set; }
        public string Id { get { return _id; } }
        public string Description { get; set; }
        public string Audio { get; set; }
        public string Animation { get; set; }

        public NodeType Type { get; set; }
        public bool IsRoot { get { return _isRoot; } }
        public Action<string> GraphAction { get; set; }
        public List<Answer> Answer { get { return _answer; } }
        public bool IsRunning { get; set; }

        public Question(string id, string description, string audio,
            string animation, NodeType nodeType, bool isRoot)
        {
            _id = id;
            Description = description;
            Audio = audio;
            Animation = animation;
            _isRoot = isRoot;
            _answer = new List<Answer>();
            Type = nodeType;
        }

        public void Execute(string keyword)
        {
            _EmitActionMessage();
            if (Type != NodeType.Decision)
            {
                var nextQuestion = _answer.Select(x => x.Target).FirstOrDefault();
                if (nextQuestion != null)
                {
                    nextQuestion.Execute(keyword);
                }
            }
            else
            {
                IsRunning = true;
                if (OnQuestionSelected != null)
                    OnQuestionSelected(this);
            }
        }

        private void _EmitActionMessage()
        {
            var audio = (string.IsNullOrWhiteSpace(Audio) || Audio == "#value") ? Description : Audio;
            var animation = (string.IsNullOrWhiteSpace(Animation) || Animation == "#value") ? Description : Animation;
            EmitMessage(string.Format("{0}|{1}", audio.Trim(), animation.Trim()));
        }

        public void AddArista(Answer arista)
        {
            if (Type != NodeType.Decision && _answer.Any())
                throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            _answer.Add(arista);
        }

        public void AddArista(List<Answer> aristas)
        {
            if (Type != NodeType.Decision && _answer.Any())
                throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            if (Type != NodeType.Decision && aristas.Count > 1)
                throw new Exception("Los únicos nodos que permiten múltiples salidas, son los nodos de decisión.");
            _answer.AddRange(aristas);
        }

        public Answer FindArista(string option)
        {
            return _answer.FirstOrDefault(x => x.Choices.Any(o => o.Equals(option)));
        }

        public void EmitMessage(string message)
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
