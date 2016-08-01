using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {
	Vector3 testPos;
	public List<GameObject> enemies;
	bool placingNewEnemies;
	Text levelNumber;
	int currLevel = -1;
	GameObject deadText;

	public List<Level> levelList;

	void Awake(){
		deadText = GameObject.Find("DeadText");
		deadText.SetActive(false);
	}

	public void showDeadText(){
		deadText.SetActive(true);
	}

	public struct Level {
		public Level(int enemyCount){
			this.enemyCount = enemyCount;
		}

		public int enemyCount;
	};

	void Start () {
		Button btn;
		btn = GameObject.Find("Button_Reset").GetComponent("Button") as Button;
		btn.onClick.AddListener(() => {
			SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		});

		levelNumber = GameObject.Find("LevelNumber").GetComponent<Text>() as Text;

		levelList = new List<Level>();
		levelList.Add(new Level(9));
		levelList.Add(new Level(2));
//		levelList.Add(new Level(4));

		enemies = new List<GameObject>();

		placeNewEnemies();
	}

	public void removeEnemy(GameObject enemy){
		enemies.Remove(enemy);
	}

	public void placeNewEnemies(){
		currLevel++;
		int enemiesAmt = levelList[currLevel].enemyCount;

		while(enemies.Count < enemiesAmt){
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
		//if not on last level and all enemies are dead, go to next level
		if(currLevel < (levelList.Count - 1) && enemies.Count == 0){
			placeNewEnemies();
		}

		//increment, because internal level starts at 0
		levelNumber.text = (currLevel + 1).ToString();
	}
}
