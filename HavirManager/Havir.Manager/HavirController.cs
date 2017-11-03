using Havir.Sockets.Server;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Manager
{
    public class HavirController
    {
        private SpeechRegonizerManager _speechManager;
        private SocketServer _server;

        public void Start()
        {
            _InitSocketServer();
            _InitSpeechManager();

        }

        private void _InitSocketServer()
        {
            _server = new SocketServer();
            _server.Start(4224);
            _server.OnRecivedMessage += OnRecivedMessageHandler;
            MessageManager.OnEmitMessage += OnEmitMessageHandler;
        }

        private void OnRecivedMessageHandler(string message)
        {
            Debug.WriteLine("Mensaje recibido del cliente: " + message);
        }

        private void _InitSpeechManager()
        {
            _speechManager = new SpeechRegonizerManager();
            _speechManager.InitRecognizer(true, true);
        }

        private void OnEmitMessageHandler(string message)
        {
            Debug.WriteLine("Mensaje emitido: " + message);
            _server.SendMessage(message);
        }
    }
}
