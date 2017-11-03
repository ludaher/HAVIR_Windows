using Havir.Api.Speech;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Manager
{
    public class MessageManager
    {
        public static EmitMessage OnEmitMessage;

        public static void EmitQuestionMessage(string message)
        {
            if (OnEmitMessage != null)
                OnEmitMessage(message);
        }
    }
}
