using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEditor;
using UnityEditor.VersionControl;

[CustomEditor(typeof(Localization))]
public class LocalizationEditor : Editor
{

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        Localization myScript = (Localization) target;

        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Add Language"))
        {
            if (myScript.languageNames == null)
            {
                myScript.languageNames = new List<string>();
                myScript.languages = new List<Language>();
                myScript.keys = new List<string>();
            }
            if (!myScript.languageNames.Contains(myScript.newLanguage))
            {
                myScript.languageNames.Add(myScript.newLanguage);
                myScript.languages.Add(CreateInstance<Language>());
                myScript.languages.Last().languageName = myScript.newLanguage;
                myScript.languages.Last().dict = new List<string>();
                for (int i = 0; i < myScript.keys.Count; i++)
                {
                    myScript.languages.Last().dict.Add("");
                }

                AssetDatabase.CreateAsset(myScript.languages.Last(),
                    "Assets/Tools/Languages/" + myScript.newLanguage + ".asset");
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            }
        }

        myScript.newLanguage = EditorGUILayout.TextField(myScript.newLanguage);
        GUILayout.EndHorizontal();

        if (myScript.languageNames != null)
        {
            myScript.index = EditorGUILayout.Popup("Edit Language:", myScript.index, myScript.languageNames.ToArray());

            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Delete Language"))
            {
                AssetDatabase.DeleteAsset("Assets/Tools/Languages/" + myScript.languageNames[myScript.index] + ".asset");
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
                myScript.languageNames.RemoveAt(myScript.index);
                myScript.languages.RemoveAt(myScript.index);
            }
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Add Key"))
            {
                if (!myScript.keys.Contains(myScript.newKey))
                {
                    myScript.keys.Add(myScript.newKey);
                    foreach (Language lang in myScript.languages)
                    {
                        lang.dict.Add("");
                    }
                }
            }

            myScript.newKey = EditorGUILayout.TextField(myScript.newKey);
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            EditorGUILayout.LabelField("Key");
            EditorGUILayout.LabelField("Value");
            GUILayout.EndHorizontal();

            if (myScript.languages[myScript.index].dict != null) {
                for (int i = 0; i < myScript.keys.Count; i++)
                {
                    GUILayout.BeginHorizontal();
                    EditorGUILayout.LabelField(myScript.keys[i]);
                    myScript.languages[myScript.index].dict[i] = EditorGUILayout.TextField(myScript.languages[myScript.index].dict[i]);
                    if (GUILayout.Button("Delete"))
                    {
                        myScript.keys.RemoveAt(i);
                        foreach (Language lang in myScript.languages)
                        {
                            lang.dict.RemoveAt(i);
                        }
                    }
                    GUILayout.EndHorizontal();
                }
            }

        }
        EditorUtility.SetDirty(target);
        foreach (Language lang in myScript.languages)
        {
            EditorUtility.SetDirty(lang);
        }
    }
}
