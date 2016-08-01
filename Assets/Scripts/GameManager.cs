using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {
	Vector3 testPos;
	public List<GameObject> enemies;
	bool placingNewEnemies;

	void Start () {
		Button btn;
		btn = GameObject.Find("Button_Reset").GetComponent("Button") as Button;
		btn.onClick.AddListener(() => {
			SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		});

		enemies = new List<GameObject>();

		placeNewEnemies();
	}

	public void removeEnemy(GameObject enemy){
		enemies.Remove(enemy);
	}

	public void placeNewEnemies(){
		int enemiesAmt = 1;
		for(int i = 0; i < enemiesAmt; i++){
			Pathfinding.NavGraph[] boo = GameObject.Find("A*").GetComponent<AstarPath>().astarData.graphs;

			int randomNode = Random.Range(0, boo[0].CountNodes());

			boo[0].GetNodes ((node) => {
				if(node.NodeIndex == randomNode && node.Walkable == true){
					var v = (Vector3)node.position;
					GameObject newEnemy = GameObject.Instantiate(Resources.Load("Prefabs/enemy"), v, Quaternion.identity) as GameObject;
					newEnemy.transform.parent = GameObject.Find("Enemies").transform;
					enemies.Add(newEnemy);
					return false;
				}
				return true;
			});
		}
	}

	void Update () {
		print(enemies.Count);
		if(enemies.Count == 0){
			placeNewEnemies();
		}
	}
}
