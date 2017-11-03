using Havir.Sockets.Client;
using Havir.Sockets.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Socket.ClientTester
{
    class Program
    {
        static void Main(string[] args)
        {
            var client = new SocketClient();
            client.Connect(4224);
            client.OnRecivedMessage += OnRecivedMessageHandler;
            var task = new Task(() => client.ReceiveDataFromServer());
            task.Start();
            while (true)
            {
                Console.Write("Message to server: ");
                var message = Console.ReadLine();
                client.SendMessage(message);
            }
        }

        private static void OnRecivedMessageHandler(string message)
        {
            Console.WriteLine("Manejo del mensaje por parte de la aplicación cliente: " + message);
        }
    }
}
