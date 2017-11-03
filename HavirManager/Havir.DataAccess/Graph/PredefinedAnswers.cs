using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.HAVIR.Scripts.Game.Speech
{
    public static class PredefinedAnswers
    {
        private static Dictionary<string, string[]> _dictionary = new Dictionary<string, string[]>()
        {
            { "@verdadero", new string[]{ "si", "claro", "desde luego", "por supuesto", "bueno", "si senior" } },
            { "@falso", new string[]{ "no", "ne", "no me importa", "claro que no", "no senior" } },
            { "@true", new string[]{ "si", "claro", "desde luego", "por supuesto", "bueno", "si senior" } },
            { "@false", new string[]{ "no", "ne", "no me importa", "claro que no", "no senior" } },

        };
        public static Dictionary<string, string[]> GetPredefinedAnswers()
        {
            return _dictionary;
                ;
        }
    }
}
