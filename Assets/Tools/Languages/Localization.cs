using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenuAttribute(fileName = "Localization")]
public class Localization : ScriptableObject
{
    [HideInInspector]
    public string newLanguage;
    [HideInInspector]
    public string newKey;
    [HideInInspector]
    public List<string> languageNames;
    [HideInInspector]
    public List<string> keys;
    [HideInInspector]
    public List<Language> languages;
    [HideInInspector]
    public int index;

}
