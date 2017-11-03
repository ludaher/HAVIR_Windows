using Assets.HAVIR.Scripts.Game.Speech;
using Havir.Api.Speech;
using Havir.DataAccess;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Manager
{
    public class ScriptManager
    {
        private static List<Question> _graph;
        private IVoiceRecognizer _recognizer;

        public ScriptManager(IVoiceRecognizer recognizer)
        {
            this._recognizer = recognizer;
            _recognizer.OnKeywordRecognized += OnKeywordRecognizedHandler;
        }

        public void Init()
        {
            _LoadGraphToRecognizerManager();
        }

        private void _LoadGraphToRecognizerManager()
        {
            ///Carga el grafo que tiene el gión a seguir
            ///
            using (var dataAccess = new QuestionDataAccess())
            {
                _graph = dataAccess.GetAll();
                foreach (var node in _graph)
                {
                    node.OnEmitMessage += MessageManager.EmitQuestionMessage;
                    node.OnQuestionSelected += OnQuestionSelectedHandler;
                    foreach (var arista in node.Answer)
                    {
                        if (node.Type != NodeType.Decision || arista.Choices == null || arista.Choices.Any() == false)
                            continue;
                        arista.GrammarId = AddKeywordRecognition(
                            string.Format("#node{0}|{1}", node.Id, arista.TargetId),
                            arista.Choices.ToArray());
                    }
                }
            }
            ///Agrega frases claves para inicial el guión
            ///
            _recognizer.StartKeywordRecognition(AddKeywordRecognition("#start", new string[] { "Puede comenzar con la entrevista.", "iniciar guión", "pregunteme" }));
        }

        private void OnQuestionSelectedHandler(Question question)
        {
            foreach (var arista in question.Answer)
            {
                _recognizer.StartKeywordRecognition(arista.GrammarId);
            }
        }

        /// <summary>
        /// Agrega palabras clave 
        /// </summary>
        /// <param name="semanticKey">Clave de identificación</param>
        /// <param name="keywords">Palabras clave</param>
        /// <returns></returns>
        private Guid AddKeywordRecognition(string semanticKey, string[] keywords)
        {
            var id = _recognizer.AddSemanticRecognition(semanticKey, keywords);
            return id;
        }

        private void OnKeywordRecognizedHandler(KeywordRecognizedArgs args)
        {
            if (args.SemanticKey.Equals("#start"))
                _ExecuteStart(args.Text);
            else if (args.SemanticKey.StartsWith("#node"))
                _ExecuteQuestion(args.SemanticKey, args.Text);


        }

        private void _ExecuteQuestion(string semanticKey, string text)
        {
            try
            {
                var nodes = semanticKey.Replace("#node", "").Split('|');
                if (nodes.Length < 2)
                    return;
                var currentQuestion = _graph
                    .FirstOrDefault(x => x.Id.Equals(nodes[0]));
                var nextQuestion = _graph
                    .FirstOrDefault(x => x.Id.Equals(nodes[1]));
                if (nextQuestion == null)
                    return;
                if (currentQuestion == null || currentQuestion.IsRunning == false)
                    return;
                foreach (var arista in currentQuestion.Answer)
                    _recognizer.StopKeywordRecognition(arista.GrammarId);
                Debug.WriteLine("Ejecutando handler: " + semanticKey + " Text: " + text);
                nextQuestion.Execute(text);
                foreach (var arista in nextQuestion.Answer)
                    _recognizer.StartKeywordRecognition(arista.GrammarId);
            }
            catch (Exception ex)
            {
                Debug.Fail("Error en e handler de la pregunta", ex.ToString());
            }
        }

        private void _ExecuteStart(string keyword)
        {
            for (int i = 0; i < _graph.Count; i++)
            {
                _graph[i].IsRunning = false;
            }
            var startNode = _graph.Where(x => x.Type == NodeType.Start).FirstOrDefault();
            startNode.Execute(keyword);
        }
    }
}
