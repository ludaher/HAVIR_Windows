using Havir.Api.Speech;
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
                    targetId = node.Attribute("id").Value,
                    id = node.Attribute("id").Value,
                    keyphrase = "",
                    description = "",
                    audio = "",
                    animation = "";
                bool wait = false;
                if (d5 != null)
                {
                    var data = d5.Value.Split('|');
                    description = data[0];
                    audio = (data.FirstOrDefault(x => x.StartsWith("@audio-")) ?? string.Empty).Replace("@audio-", "");
                    animation = (data.FirstOrDefault(x => x.StartsWith("@animation-")) ?? string.Empty).Replace("@animation-", "");
                    keyphrase = (data.FirstOrDefault(x => x.StartsWith("@keyphrase-")) ?? string.Empty).Replace("@keyphrase-","");
                    wait = (data.Any(x => x.StartsWith("@wait-")));
                    if (data.Any(x => x.StartsWith("@id-")))
                        id = data.FirstOrDefault(x => x.StartsWith("@id-"));
                    //audio = (data.Length > 1) ? data[1].Replace("@audio-", "") : description;
                    //data.Any(x => x.Trim().IndexOf("audio-")>=0) ? string.Empty : data.FirstOrDefault(x => x.StartsWith("@audio-"));
                    //animation = (data.Length > 2) ? data[2].Replace("@animation-", "") : description;
                    //data.Any(x => x.IndexOf("animation-") >= 0) ? string.Empty : data.FirstOrDefault(x => x.StartsWith("@animation-"));
                }

                var genericNode = (XElement)d6.FirstNode;
                var type = genericNode.Attribute("configuration").Value;

                var targetEdges = graphXml.Elements("{http://graphml.graphdrawing.org/xmlns}edge").Where(x => x.Attribute("target").Value == id);
                var graphNode = new Question(targetId, id, keyphrase, description, audio, animation, _getNodeType(type), targetEdges.Any(), wait);

                graph.Add(graphNode);
            }

            var edges = graphXml.Elements("{http://graphml.graphdrawing.org/xmlns}edge");
            foreach (var edge in edges)
            {
                var edgeData = edge.Elements("{http://graphml.graphdrawing.org/xmlns}data").FirstOrDefault(x => x.Attribute("key").Value.Equals("d9"));
                var arista = new Answer() { TargetId = edge.Attribute("target").Value };
                string[] tempChoices;
                if (edgeData != null)
                {
                    var choices = new List<string>();
                    foreach (var option in edgeData.Value.ToLower().Trim().TrimStart(',').TrimEnd(',').Split(','))
                    {
                        if (PredefinedAnswers.GetPredefinedAnswers().TryGetValue(option, out tempChoices))
                            choices.AddRange(tempChoices);
                        else
                            choices.Add(option.Trim());
                    }
                    arista.Choices = choices.ToArray();
                }
                arista.Target = graph.Find(x => x.Id.Equals(arista.TargetId));
                graph.Find(x => x.TargetId.Equals(edge.Attribute("source").Value)).AddArista(arista);
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
