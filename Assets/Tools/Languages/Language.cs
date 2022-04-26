using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenuAttribute(fileName = "New Language")]
public class Language : ScriptableObject
{
    [HideInInspector]
    public string languageName;
    [HideInInspector]
    public List<string> dict;

}
