using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonSetup : MonoBehaviour {
	Vector3 testPos;

	void Start () {
		Button btn;
		btn = GameObject.Find("Button_Reset").GetComponent("Button") as Button;
		btn.onClick.AddListener(() => {
			SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		});

		StartCoroutine("nodes");
	}

	IEnumerator nodes()
	{
		while(true){
			GameObject.Find("test").transform.position = testPos;

			Pathfinding.NavGraph[] boo = GameObject.Find("A*").GetComponent<AstarPath>().astarData.graphs;

			int randomNode = Random.Range(0, boo[0].CountNodes());

			boo[0].GetNodes ((node) => {
				
				print("trying" + node.NodeIndex + ", " + randomNode);
				if(node.NodeIndex == randomNode && node.Walkable == true){
					print("test change");
					var v = (Vector3)node.position;
					testPos = v;
					return false;
				}
				return true;
			});

			yield return new WaitForSeconds(1f);
		}
	}

	void Update () {

	}
}
