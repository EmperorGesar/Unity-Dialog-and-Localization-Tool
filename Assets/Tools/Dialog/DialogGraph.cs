using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using XNode;

[Serializable, CreateAssetMenu(fileName = "Dialog", menuName = "Dialog")]
public class DialogGraph : NodeGraph {
    public QuestionAndAnswer current;
}
