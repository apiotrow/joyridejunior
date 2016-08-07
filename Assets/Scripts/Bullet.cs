using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	bool ready = false;
	Vector3 dir;
	string targetTag;
	int numBounces = 0;
	int maxBounces = 0;
	PlayerController.killMode killMode;

	void Start () {

	}

	public void setSprite(Sprite sp){
		this.GetComponent<SpriteRenderer>().sprite = sp;
	}

	public void setKillMode(PlayerController.killMode mode){
		killMode = mode;
	}

	public void setDirection(Vector3 target){
		dir = (target - transform.position).normalized * 10000f;
		dir.z = 0f;
	}

	public void setColor(Color col){
		this.GetComponent<SpriteRenderer>().color = col;
	}

	public void setColor(Color32 col){
		this.GetComponent<SpriteRenderer>().color = col;
	}

	public void setTargetTag(string tag){
		targetTag = tag;
	}

	public void setMaxBounces(int num){
		maxBounces = num;
	}

	public void makeReady(){
		ready = true;
	}

	void Update () {
		if(ready){
			//move the bullet
			transform.position = Vector3.MoveTowards(transform.position, dir, Time.deltaTime * 20f);

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
		//CHANGE: probably something more efficient or sense-making that circlecast here.
		//maybe overlapcircle. but this works.
		RaycastHit2D hit = Physics2D.CircleCast(transform.position, 0.1f, Vector2.zero);
		if(hit){
			//layer 8 is "hittable" layer. we only want bullets to hit/bounce off of hittable things.
			if(hit.transform.name != null){
				if(hit.transform.gameObject.layer == 8){
					if(hit.transform.tag == targetTag){
						GameObject expl = 
							GameObject.Instantiate(
								Resources.Load("Prefabs/BulletExplosion"), 
								transform.position, 
								Quaternion.identity) as GameObject;

						//make enemy take damage.
						//CHANGE: if change CircleCast to overlapcircle, need to change 
						//hit.transform.GetComponent<Enemy>().takeDmg(5, killMode); 
						//to hit.transform.parent.GetComponent<Enemy>().takeDmg(5, killMode); 
						if(hit.transform.GetComponent<Enemy>() != null){
							hit.transform.GetComponent<Enemy>().takeDmg(5, killMode);
						}
						if(hit.transform.GetComponent<PlayerController>() != null){
							hit.transform.GetComponent<PlayerController>().takeDmg(5);
						}
						Destroy(gameObject);
					}else if(hit.transform.tag == "Wall"){

						//BUG: bullets sometimes explode on the wrong bounce.
						//something to do with them passing over the boundary of the object i think
						//which would be due to the check happening a split second too late
						if(numBounces >= maxBounces){
							GameObject expl = 
								GameObject.Instantiate(
									Resources.Load("Prefabs/BulletExplosion"), 
									transform.position, 
									Quaternion.identity) as GameObject;
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
