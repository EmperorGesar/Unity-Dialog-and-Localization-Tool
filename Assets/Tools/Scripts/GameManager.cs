using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text question;
    public Text answer1Text;
    public Text answer2Text;
    public Text answer3Text;
    public Text answer4Text;
    public Text backText;
    public Button answer1;
    public Button answer2;
    public Button answer3;
    public Button answer4;
    public Canvas pauseUI;
    public Dropdown selection;
    public Localization localization;
    public DialogGraph dialog;
    public QuestionAndAnswer root;

    // Start is called before the first frame update
    void Start()
    {
        dialog.current = root;
        selection.AddOptions(localization.languageNames);
    }

    // Update is called once per frame
    void Update()
    {
        if (localization.languageNames != null)
        {
            if (dialog.current.questionKey != "")
            {
                question.text = localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == dialog.current.questionKey)];
            }

            if (dialog.current.answerKey1 != "")
            {
                answer1.gameObject.SetActive(true);
                answer1Text.text = "> " + localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == dialog.current.answerKey1)];
            }

            if (dialog.current.answerKey2 != "")
            {
                answer2.gameObject.SetActive(true);
                answer2Text.text = "> " + localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == dialog.current.answerKey2)];
            }

            if (dialog.current.answerKey3 != "")
            {
                answer3.gameObject.SetActive(true);
                answer3Text.text = "> " + localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == dialog.current.answerKey3)];
            }

            if (dialog.current.answerKey4 != "")
            {
                answer4.gameObject.SetActive(true);
                answer4Text.text = "> " + localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == dialog.current.answerKey4)];
            }
            backText.text = localization.languages[selection.value].dict[localization.keys.FindIndex(x => x == "BACK")];
        }

        if (Input.GetKeyDown("escape"))
        {
            if (pauseUI.gameObject.activeSelf)
            {
                Back();
            }
            else
            {
                Pause();
            }
        }
    }

    public void Pause()
    {
        pauseUI.gameObject.SetActive(true);
    }

    public void Back()
    {
        pauseUI.gameObject.SetActive(false);
    }

    public void Continue1()
    {
        ButtonDeactivate();
        dialog.current.MoveNext("next1");
    }

    public void Continue2()
    {
        ButtonDeactivate();
        dialog.current.MoveNext("next2");
    }

    public void Continue3()
    {
        ButtonDeactivate();
        dialog.current.MoveNext("next3");
    }

    public void Continue4()
    {
        ButtonDeactivate();
        dialog.current.MoveNext("next4");
    }

    private void ButtonDeactivate()
    {
        answer1.gameObject.SetActive(false);
        answer2.gameObject.SetActive(false);
        answer3.gameObject.SetActive(false);
        answer4.gameObject.SetActive(false);
    }
}
