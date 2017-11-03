using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Linq;
using System.Xml.Serialization;

namespace Assets.HAVIR.Scripts.Game.Speech.Graph
{
    public class GraphMapper
    {
        public static List<Question> GetGraphNodes(string graphPath)
        {
            var graph = new List<Question>();
            //var graphMl = MapFromXml();
            var xml = XElement.Load(graphPath);

            var graphXml = xml.Elements("{http://graphml.graphdrawing.org/xmlns}graph");

            foreach (var node in graphXml.Elements("{http://graphml.graphdrawing.org/xmlns}node"))
            {
                var d5 = node.Elements("{http://graphml.graphdrawing.org/xmlns}data").FirstOrDefault(x => x.Attribute("key").Value.Equals("d5"));
                var d6 = node.Elements("{http://graphml.graphdrawing.org/xmlns}data").FirstOrDefault(x => x.Attribute("key").Value.Equals("d6"));
                string
                    id = node.Attribute("id").Value,
                    description = "",
                    audio = "",
                    animation = "";
                if (d5 != null)
                {
                    var data = d5.Value.Split('|');
                    description = data[0];
                    audio = data.Any(x => x.StartsWith("@audio")) ? string.Empty : data.FirstOrDefault(x => x.StartsWith("@audio"));
                    animation = data.Any(x => x.StartsWith("@animation")) ? string.Empty : data.FirstOrDefault(x => x.StartsWith("@animation"));
                }

                var genericNode = (XElement)d6.FirstNode;
                var type = genericNode.Attribute("configuration").Value;

                var targetEdges = graphXml.Elements("{http://graphml.graphdrawing.org/xmlns}edge").Where(x => x.Attribute("target").Value == id);
                var graphNode = new Question(id, description, audio, animation, _getNodeType(type), targetEdges.Any());

                graph.Add(graphNode);
            }

            var edges = graphXml.Elements("{http://graphml.graphdrawing.org/xmlns}edge");
            foreach (var edge in edges)
            {
                var edgeData = edge.Elements("{http://graphml.graphdrawing.org/xmlns}data").FirstOrDefault(x => x.Attribute("key").Value.Equals("d9"));
                var arista = new Answer() { TargetId = edge.Attribute("target").Value };
                arista.Choices = new List<string>();
                List<string> tempChoices;
                if (edgeData != null)
                    foreach (var option in edgeData.Value.Split(','))
                    {
                        if (PredefinedAnswers.GetPredefinedAnswers().TryGetValue(edgeData.Value, out tempChoices))
                            arista.Choices.AddRange(tempChoices);
                        else
                            arista.Choices.Add(option);
                    }
                arista.Target = graph.Find(x => x.Id.Equals(arista.TargetId));
                graph.Find(x => x.Id.Equals(edge.Attribute("source").Value)).AddArista(arista);
            }
            return graph;
        }

        private static NodeType _getNodeType(string type)
        {
            if (type == "com.yworks.flowchart.decision")
                return NodeType.Decision;
            else if (type == "com.yworks.flowchart.data")
                return NodeType.Data;
            else if (type == "com.yworks.flowchart.start1" || type == "com.yworks.flowchart.start2")
                return NodeType.Start;
            return NodeType.Terminator;
        }

    }
}
