using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.HAVIR.Scripts.Game.Speech
{
    public static class PredefinedAnswers
    {
        private static Dictionary<string, List<string>> _dictionary = new Dictionary<string, List<string>>()
        {
            { "@Verdadero", new List<string>(){ "si", "claro", "desde luego", "por supuesto", "bueno", "si senior" } },
            { "@Falso", new List<string>(){ "no", "ne", "no me importa", "claro que no", "no senior" } },
            { "@True", new List<string>(){ "si", "claro", "desde luego", "por supuesto", "bueno", "si senior" } },
            { "@False", new List<string>(){ "no", "ne", "no me importa", "claro que no", "no senior" } },

        };
        public static Dictionary<string, List<string>> GetPredefinedAnswers()
        {
            return _dictionary;
                ;
        }
    }
}
