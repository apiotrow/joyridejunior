using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	PlayerController pc;
	Vector3 bulletTarget;
	Vector3 dir;


	void Start () {
		bulletTarget = new Vector3(-1f, -1f, -1f);
		pc =  GameObject.Find("Player").GetComponent<PlayerController>();
		dir = Vector3.zero;
	}

	void Update () {
		//only grab target once
		if(bulletTarget.x == -1f){
			bulletTarget = pc.getReticleTarget();
			dir = (bulletTarget - transform.position).normalized * 1000f;
		}

		//move the bullet
		transform.position = Vector3.MoveTowards(transform.position, dir, Time.deltaTime * 10f);

		//delete bullet if it goes off screen
		Vector3 bulletScreenPos = Camera.main.WorldToScreenPoint(transform.position);
		if(bulletScreenPos.x < 0 
			|| bulletScreenPos.x > Screen.width
			|| bulletScreenPos.y < 0 
			|| bulletScreenPos.y > Screen.height
		){
			Destroy(gameObject);
		}

		checkForCollision();
	}

	void checkForCollision(){
		RaycastHit2D hit =  Physics2D.CircleCast(transform.position, 0.1f, Vector2.zero);
		if(hit){
			//layer 8 is "hittable"
			if(hit.transform.name != null && hit.transform.gameObject.layer == 8){
//				Debug.Log(hit.transform.name);
				GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;
				Destroy(gameObject);
			}
		}

	}
}
