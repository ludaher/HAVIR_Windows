using Assets.HAVIR.Scripts.Game.Speech;
using Assets.HAVIR.Scripts.Game.Speech.Graph;
using Havir.Api.Speech;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Havir.DataAccess
{
    public class QuestionDataAccess : IDisposable
    {
        public void Dispose()
        {
        }

        public List<Question> GetAll()
        {
            var graph = GraphMapper.GetGraphNodes("Graph/BasicDialog.graphml");
            return graph;
        }

        public Dictionary<string, string[]> GetPredefinedAnswers()
        {
            return PredefinedAnswers.GetPredefinedAnswers();
        }
    }
}
