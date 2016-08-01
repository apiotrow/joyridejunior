using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Enemy : AILerp {
	Slider healthBar;
	PlayerController pc;
	bool weaponFiring = false;
	List<string> tags;
	float currHealth;
	public SeekMode seekMode;

	float firingSpeed = 0.8f;
	float maxHealth = 30f;
	float aroundPlayerRange = 10f;
	float minSpeed = 1;
	float maxSpeed = 6;

	public enum SeekMode{
		ifNoLOSgotoLOS,
		ifNoLOSgoToPlayer
	}

	public void setMinSpeed(int speed){
		minSpeed = speed;
	}

	public void setMaxSpeed(int speed){
		maxSpeed = speed;
	}
		
	void Start(){
		tags = new List<string>();

		base.Start();
		base.target = GameObject.Find("Player").transform;
		base.myTarget = computeNewDestination();
		base.ForceSearchPath();
		base.enableRotation = false;

		healthBar = transform.Find("Canvas/Slider").GetComponent<Slider>() as Slider;
		base.speed = Random.Range(minSpeed, maxSpeed);
		pc = GameObject.Find("Player").GetComponent<PlayerController>();
		StartCoroutine("weaponFireDecide");	
		StartCoroutine("moveDecide");
		currHealth = maxHealth;
	}

	public override void OnTargetReached () {
//		base.ForceSearchPath();
	}

	Vector3 computeNewDestination(){
		//if no line of sight, calculate a new path
		Vector3 tpos = target.position;

		//find a place around the player so enemy doesn't sit on top of him
		Vector3 aroundTarget = 
			new Vector3(
				tpos.x + Random.Range(-aroundPlayerRange, aroundPlayerRange), 
				tpos.y + Random.Range(-aroundPlayerRange, aroundPlayerRange), 
				tpos.z);

		//keep trying to find a place that isn't occupied by a wall or an enemy
		RaycastHit2D hit = Physics2D.CircleCast(aroundTarget, 1f, Vector2.zero);
		while(hit && (hit.transform.tag == "Wall" || hit.transform.tag == "Enemy")){
			aroundTarget = 
				new Vector3(
					tpos.x + Random.Range(-aroundPlayerRange, aroundPlayerRange),
					tpos.y + Random.Range(-aroundPlayerRange, aroundPlayerRange),
					tpos.z);
			hit = Physics2D.CircleCast(aroundTarget, 1f, Vector2.zero);
		}

		//we found one
		return aroundTarget;
	}

	IEnumerator moveDecide(){
		while(true){

			//check line of sight from current destination point and player
			RaycastHit2D[] hits = Physics2D.RaycastAll(base.myTarget, pc.transform.position - base.myTarget);
			if(hits.Length > 0){
				tags.Clear();
				for(int i = 0; i < hits.Length; i++){
					tags.Add(hits[i].transform.tag);
				}

				//prevents enemies from not shooting due to other enemies being in line of sight
				tags.RemoveAll(x => x == "Enemy");

				//if player is in line of sight
				if(tags.IndexOf("Player") == 0){
					if(seekMode == SeekMode.ifNoLOSgotoLOS)
						base.canMove = false;
				}else{
					if(seekMode == SeekMode.ifNoLOSgotoLOS)
						base.canMove = true;

					base.myTarget = computeNewDestination();

					base.ForceSearchPath();
				}
			}
			yield return new WaitForSeconds(0.1f);
		}
	}

	IEnumerator weaponFireDecide()
	{
		while(true){
			RaycastHit2D[] hits = Physics2D.RaycastAll(transform.position, pc.transform.position - transform.position);
			if(hits.Length > 0){
				tags.Clear();
				for(int i = 0; i < hits.Length; i++){
					tags.Add(hits[i].transform.tag);
				}

				//prevents enemies from not shooting due to other enemies being in line of sight
				tags.RemoveAll(x => x == "Enemy");

				//if player is in line of sight
				if(tags.IndexOf("Player") == 0){
					GameObject newBullet = GameObject.Instantiate(Resources.Load("Prefabs/Bullet"), transform.position, Quaternion.identity) as GameObject;
					newBullet.GetComponent<Bullet>().setDirection(pc.transform.position);
					newBullet.GetComponent<Bullet>().setTargetTag("Player");
					newBullet.GetComponent<Bullet>().setColor(Color.green);

					newBullet.GetComponent<Bullet>().makeReady();
				}
			}
			yield return new WaitForSeconds(firingSpeed);
		}
	}

	protected override void Update ()
	{
		base.Update ();

		healthBar.value = currHealth / maxHealth;

		if(currHealth <= 0f){
			killMe();
		}
	}

	public void killMe(){
		GameObject.Find("GameManager").GetComponent<GameManager>().removeEnemy(gameObject);

		int roll = Random.Range(0,10);

		if(roll == 1 || roll == 2){
			GameObject goods = 
				GameObject.Instantiate(
					Resources.Load("Prefabs/Ammo"), 
					transform.position, 
					Quaternion.identity) as GameObject;
		}else if(roll == 2 || roll == 3){
			GameObject goods = 
				GameObject.Instantiate(
					Resources.Load("Prefabs/Health"), 
					transform.position, 
					Quaternion.identity) as GameObject;
		}else if(roll == 4){
			GameObject goods = 
				GameObject.Instantiate(
					Resources.Load("Prefabs/Health"), 
					transform.position, 
					Quaternion.identity) as GameObject;
		}

		Destroy(gameObject);
	}
		
	public void takeDmg(int dmg){
		currHealth -= dmg;
	}
}
