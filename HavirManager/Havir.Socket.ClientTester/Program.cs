using Havir.Sockets.Client;
using Havir.Sockets.Entities;
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
            var client = new SocketClient<ServerActionMessage, UnityActionMessage>();
            client.Connect(4224);
            client.OnRecivedMessage += OnRecivedMessageHandler;
            Task task = new Task(client.ReceiveDataFromServer);
            task.Start();
            while (true)
            {
                Console.Write("Message to server: ");
                var data = new ServerActionMessage();
                data.MessageType = MessageTypeEnum.Success;
                data.Message = Console.ReadLine();
                if (data.Message.Equals("resume"))
                    data.Resume = true;
                client.SendMessage(data);
            }
        }

        private static void OnRecivedMessageHandler(UnityActionMessage message)
        {
            Console.WriteLine("Manejo del mensaje por parte de la aplicación cliente: " + message);
        }
    }
}
