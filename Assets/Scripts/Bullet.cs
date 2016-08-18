using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	bool ready = false;
	Vector3 dir;
	string targetTag;
	int numBounces = 0;
	int maxBounces = 0;
	PlayerController.killMode killMode;
	bool goThroughEnemy;
	float bulletSpeed;

	public bool pauseAnim;

	void Start () {

	}

	public void setBulletSpeed(float spe){
		bulletSpeed = spe;
	}

	public void doesGoThroughEnemy(bool does){
		goThroughEnemy = does;
	}

	public void makeInvisible(){
		this.GetComponent<SpriteRenderer>().enabled = false;
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

	void Update(){
		if(ready){
			//move the bullet
			transform.position = Vector3.MoveTowards(transform.position, dir, Time.deltaTime * bulletSpeed);

			//delete bullet if it goes off screen
			Vector3 bulletScreenPos = Camera.main.WorldToScreenPoint(transform.position);
			if(bulletScreenPos.x < 0 
				|| bulletScreenPos.x > Screen.width
				|| bulletScreenPos.y < 0 
				|| bulletScreenPos.y > Screen.height
			){
				Destroy(gameObject);
			}
		}

		if(pauseAnim)
			this.GetComponent<Animator>().speed = 0f;
	}

	void OnTriggerEnter2D(Collider2D col){
		if(col.transform.gameObject.layer == 8){
			if(col.transform.tag == targetTag){
					GameObject expl = 
						GameObject.Instantiate(
							Resources.Load("Prefabs/BulletExplosion"), 
							transform.position, 
							Quaternion.identity) as GameObject;

				if(col.transform.parent.GetComponent<Enemy>() != null){
					col.transform.parent.GetComponent<Enemy>().takeDmg(5, killMode);
				}
				if(col.transform.GetComponent<PlayerController>() != null){
					col.transform.GetComponent<PlayerController>().takeDmg(5);
				}

				if(!goThroughEnemy)
					Destroy(gameObject);
				
			}else if(col.transform.tag == "Wall"){
				if(numBounces >= maxBounces){
					GameObject expl = 
						GameObject.Instantiate(
							Resources.Load("Prefabs/BulletExplosion"), 
							transform.position, 
							Quaternion.identity) as GameObject;
					
					if(!goThroughEnemy)
						Destroy(gameObject);
					
				}else{
					//need alternative method for this now
					//(works with CircleCast)
//					Vector3 refl = Vector3.Reflect(dir, hit.normal);
//					dir = refl.normalized * 1000f;
//
//					numBounces++;
				}
			}
		}
	}
}
