using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	public bool ready = false;
	public Vector3 dir;
	public string targetTag;

	int maxBounces = 0;

	int numBounces = 0;

	void Start () {

	}

	public void setDirection(Vector3 target){
		dir = (target - transform.position).normalized * 1000f;
	}

	public void setColor(Color col){
		this.GetComponent<SpriteRenderer>().color = col;
	}

	void Update () {
		if(ready){
			
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
	}

	void checkForCollision(){
		RaycastHit2D hit = Physics2D.CircleCast(transform.position, 0.1f, Vector2.zero);
		if(hit){
			//layer 8 is "hittable" layer
			if(hit.transform.name != null){
				if(hit.transform.gameObject.layer == 8){
					if(hit.transform.tag == targetTag){
						GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;
						if(hit.transform.GetComponent<Enemy>() != null){
							hit.transform.GetComponent<Enemy>().takeDmg(5);
						}
						Destroy(gameObject);
					}else if(hit.transform.tag == "Wall"){

						//BUG: bullets sometimes explode on the wrong bounce.
						//something to do with them passing over the boundary of the object i think
						//which would be due to latency
						if(numBounces >= maxBounces){
							GameObject expl = GameObject.Instantiate(Resources.Load("Prefabs/BulletExplosion"), transform.position, Quaternion.identity) as GameObject;
							Destroy(gameObject);
						}else{
							Vector3 refl = Vector3.Reflect(dir, hit.normal);
							dir = refl.normalized * 1000f;

							numBounces++;
						}
					}
				}
			}
		}
	}
}
