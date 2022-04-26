using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using XNode;

public class QuestionAndAnswer : Node
{
    public string questionKey;
    [Input] public Empty prev;
    public string answerKey1;
    [Output] public Empty next1;
    public string answerKey2;
    [Output] public Empty next2;
    public string answerKey3;
    [Output] public Empty next3;
    public string answerKey4;
    [Output] public Empty next4;

	// Use this for initialization
	protected override void Init() {
		base.Init();
    }

	public void MoveNext(string exitPortName)
    {
        DialogGraph dialogGraph = (DialogGraph) graph;
        if (dialogGraph.current != this) {
            Debug.LogWarning("Node isn't active");
            return;
        }

        NodePort exitPort = GetOutputPort(exitPortName);
        if (!exitPort.IsConnected) {
            Debug.LogWarning("Node isn't connected");
            return;
        }

        QuestionAndAnswer node = (QuestionAndAnswer) exitPort.Connection.node;
        node.OnEnter();
    }

    public void OnEnter() {
        DialogGraph dialogGraph = (DialogGraph) graph;
        dialogGraph.current = this;
    }

    // Return the correct value of an output port when requested
	public override object GetValue(NodePort port) {
		return null; // Replace this
	}

	[Serializable]
	public class Empty {
	}
}
