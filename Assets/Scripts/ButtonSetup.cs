using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonSetup : MonoBehaviour {

	void Start () {
		Button btn;
		btn = GameObject.Find("Button_Reset").GetComponent("Button") as Button;
		btn.onClick.AddListener(() => {
			SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		});
	}

	void Update () {
	
	}
}
