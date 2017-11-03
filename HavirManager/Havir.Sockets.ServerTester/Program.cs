using Havir.Sockets.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Havir.Sockets.ServerTester
{
    class Program
    {
        static void Main(string[] args)
        {
            var server = new SocketServer();
            server.Start();
            server.OnRecivedMessage += OnRecivedMessageHandler;
            while (true)
            {
                Console.Write("Message to clients: ");
                var message = Console.ReadLine();
                server.SendMessage(message);
            }
            //var server = new AsynchronousServerListener();
            //{
            //    // Create a task and supply a user delegate by using a lambda expression.
            //    var taskA = new Task(() => server.StartListening());
            //    // Start the task.
            //    taskA.Start();
            //    server.OnRecivedMessage += OnRecivedMessageHandler;
            //    while (true)
            //    {
            //        Console.Write("Message to clients: ");
            //        var message = Console.ReadLine();
            //        //server.SendMessage("<HAVIR>" + message);
            //    }
            //}
        }

        private static void OnRecivedMessageHandler(string message)
        {
            Console.WriteLine("Manejo del mensaje por parte de la aplicación servidor: " + message);
        }
    }
}
