using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using XNodeEditor;

[CustomNodeEditor(typeof(QuestionAndAnswer))]
public class QuestionAndAnswerEditor : NodeEditor
{
    public override void OnHeaderGUI()
    {
        GUI.color = Color.white;
        QuestionAndAnswer node = (QuestionAndAnswer) target;
        DialogGraph graph = (DialogGraph) node.graph;
        if (graph.current == node) GUI.color = Color.green;
        string title = target.name;
        GUILayout.Label(title, NodeEditorResources.styles.nodeHeader, GUILayout.Height(30));
        GUI.color = Color.white;
    }

    public override void OnBodyGUI()
    {
        base.OnBodyGUI();
        QuestionAndAnswer node = (QuestionAndAnswer) target;
        DialogGraph graph = (DialogGraph) node.graph;
        if (GUILayout.Button("Move Next 1")) node.MoveNext("next1");
        if (GUILayout.Button("Move Next 2")) node.MoveNext("next2");
        if (GUILayout.Button("Move Next 3")) node.MoveNext("next3");
        if (GUILayout.Button("Move Next 4")) node.MoveNext("next4");
        if (GUILayout.Button("Set as current")) graph.current = node;
    }
}
