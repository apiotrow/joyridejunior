using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	PlayerController pc;
	Vector3 bulletTarget;
	Vector3 dir;
	int numBounces = 0;

	bool bouncyBullet = true;
	int maxBounces = 4;
	GameObject lastBounced;


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
			//layer 8 is "hittable" layer
			if(hit.transform.name != null){
				if(hit.transform.gameObject.layer == 8){
					if(hit.transform.tag == "Enemy"){
						GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;
						hit.transform.gameObject.GetComponent<Enemy>().takeDmg(5);
						Destroy(gameObject);
					}else if(hit.transform.tag == "Wall"){

						//BUG: bullets sometimes explode on the wrong bounce.
						//something to do with them passing over the boundary of the object i think
						//which would be due to latency
						if(bouncyBullet){
							if(numBounces >= maxBounces){
//								if(hit.transform.gameObject == lastBounced){
//									Vector3 refl = Vector3.Reflect(dir, hit.normal);
//									dir = -refl.normalized * 1000f;
//									lastBounced = hit.transform.gameObject;
//								}else{
									GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;

									Destroy(gameObject);
//								}
							}else{
								Vector3 refl = Vector3.Reflect(dir, hit.normal);

//								Debug.Log(dir + ", " + hit.normal);
								dir = refl.normalized * 1000f;

//								if(Mathf.Sign(hit.normal.x) < 0 && !(Mathf.Sign(dir.x) < 0)){
//									dir.x *= -1;
//								}

								lastBounced = hit.transform.gameObject;
								numBounces++;
							}
						}else{
							GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;
							Destroy(gameObject);
						}
					}
				}
			}
		}

	}
}
