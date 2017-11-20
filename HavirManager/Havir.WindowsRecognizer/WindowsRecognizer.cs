using Havir.Api.Speech;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Speech.Recognition;
using System.Text;
using System.Threading.Tasks;

namespace Havir.WindowsRecognizer
{

    public class WindowsRecognizer : IVoiceRecognizer
    {
        SpeechRecognitionEngine _recognizer;

        public event KeyWordRecognized OnKeywordRecognized;
        public event WilcardRecognized OnWilcardRecognized;

        public Dictionary<Guid, Grammar> semantics;
        public Dictionary<Guid, Wilcard> _wildcards;

        public WindowsRecognizer()
        {
            semantics = new Dictionary<Guid, Grammar>();
            _wildcards = new Dictionary<Guid, Wilcard>();
            _InitRecognizer();
        }

        private void _InitRecognizer()
        {
            _recognizer = new SpeechRecognitionEngine(new System.Globalization.CultureInfo("es-CO"));
            _recognizer.LoadGrammar(new DictationGrammar());
            ///Register a handler for the SpeechRecognized event.
            ///
            _recognizer.SpeechRecognized +=
              new EventHandler<SpeechRecognizedEventArgs>(OnSpeechRecognized);
            _recognizer.SpeechRecognized += WildcardInputHandler;
            _recognizer.SpeechDetected += OnSpeechDetectedHandler;
            _recognizer.AudioSignalProblemOccurred += AudioSignalProblemOccurredHandler;

        }

        private void AudioSignalProblemOccurredHandler(object sender, AudioSignalProblemOccurredEventArgs e)
        {
        }

        private void OnSpeechDetectedHandler(object sender, SpeechDetectedEventArgs e)
        {
        }

        private void WildcardInputHandler(object sender, SpeechRecognizedEventArgs e)
        {
            if (string.IsNullOrWhiteSpace(e.Result.Text))
                return;
            string keyword;
            foreach (var wilcard in _wildcards)
            {
                if (wilcard.Value.TryGetKeyword(e.Result.Text, out keyword))
                {
                    if (OnWilcardRecognized != null)
                        OnWilcardRecognized(new WilcardRecognizedArgs(wilcard.Value.WilcardKey, keyword, e.Result.Text));

                }
            }
        }

        private void OnSpeechRecognized(object sender, SpeechRecognizedEventArgs e)
        {
            if (e.Result.Semantics.Any())
            {
                foreach (var semantic in e.Result.Semantics)
                {
                    OnKeywordRecognized(new KeywordRecognizedArgs(semantic.Key, e.Result.Text));
                }
            }
        }

        public Guid AddSemanticRecognition(string semanticKey, string[] keywords)
        {
            if (keywords == null)
                return _AddWildCard(semanticKey);
            Choices choices = new Choices(keywords);
            SemanticResultKey semanticResultKey = new SemanticResultKey(semanticKey, choices);
            GrammarBuilder grammarBuilder = semanticResultKey.ToGrammarBuilder();
            var id = Guid.NewGuid();
            Grammar grammar = new Grammar(grammarBuilder);
            grammar.Name = id.ToString();
            grammar.Enabled = false;
            grammar.Priority = 5;
            _recognizer.LoadGrammar(grammar);
            semantics.Add(id, grammar);
            return id;
        }

        private Guid _AddWildCard(string semanticKey)
        {
            var id = Guid.NewGuid();
            GrammarBuilder wildcardBuilder = new GrammarBuilder();
            wildcardBuilder.AppendWildcard();
            SemanticResultKey passwordKey =
              new SemanticResultKey(id.ToString(), wildcardBuilder);

            GrammarBuilder grammarBuilder =
              new GrammarBuilder("WildCard");
            grammarBuilder.Append(passwordKey);

            Grammar grammar = new Grammar(grammarBuilder);
            grammar.Name = id.ToString();
            grammar.Enabled = false;
            grammar.Priority = 5;

            grammar.SpeechRecognized +=
              new EventHandler<SpeechRecognizedEventArgs>(
                (obj, recognizer)=> {
                    OnKeywordRecognized(new KeywordRecognizedArgs(id.ToString(), recognizer.Result.Text));
                });

            _recognizer.LoadGrammar(grammar);
            semantics.Add(id, grammar);
            return id;
        }

        public Guid AddKeywordRecognition(string[] keywords)
        {
            throw new NotImplementedException();
        }

        public void Dispose()
        {
            _recognizer.Dispose();
        }

        public void InitRecognizer(bool dictation, bool keywordRecognation)
        {
            // Configure input to the speech recognizer.
            _recognizer.SetInputToDefaultAudioDevice();

            // Start asynchronous, continuous speech recognition.
            _recognizer.RecognizeAsync(RecognizeMode.Multiple);
        }

        public void RemoveKeywordRecognition(Guid id)
        {
            Grammar grammar;
            if (semantics.TryGetValue(id, out grammar))
            {
                _recognizer.UnloadGrammar(grammar);
            }
            semantics.Remove(id);
        }

        public void StopKeywordRecognition(Guid id)
        {
            Grammar grammar;
            if (semantics.TryGetValue(id, out grammar))
            {
                grammar.Enabled = false;
            }
        }


        public void StartKeywordRecognition(Guid id)
        {
            Grammar grammar;
            if (semantics.TryGetValue(id, out grammar))
            {
                grammar.Enabled = true;
            }
        }
        public Guid AddWildcardGrammar(string semanticKey, string[] keywords)
        {
            Choices choices = new Choices(keywords);
            GrammarBuilder wilcardGrammarBuilder = new GrammarBuilder();
            wilcardGrammarBuilder.Append(choices);
            wilcardGrammarBuilder.AppendWildcard();
            SemanticResultKey semanticResultKey = new SemanticResultKey(semanticKey, choices);
            var id = Guid.NewGuid();
            Grammar grammar = new Grammar(wilcardGrammarBuilder);
            grammar.Name = id.ToString();
            _recognizer.LoadGrammar(grammar);
            _wildcards.Add(id, new Wilcard() { WilcardKey = semanticKey, Keywords = keywords, Grammar = grammar });
            return id;
        }

    }
}