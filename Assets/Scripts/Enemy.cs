﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Enemy : AILerp {
	bool ready;

	public SeekMode seekMode;
	public Animator anim;

	PlayerController pc;
	Slider healthBar;
	bool weaponFiring = false;
	List<string> tags;
	float currHealth;
	SpriteRenderer spriteRend;
	float lastX;
	float firingSpeed = 0.8f;
	float maxHealth = 30f;
	float minSpeed = 1;
	float maxSpeed = 6;
	bool dropLoot = false;

	public enum SeekMode{
		melee,
		ranged
	}

	public List<Text> damageTexts;

	public void setMaxHealth(float h){
		maxHealth = h;
	}

	public void setMode(SeekMode mode){
		seekMode = mode;
	}

	public void setMinSpeed(int speed){
		minSpeed = speed;
	}

	public void setMaxSpeed(int speed){
		maxSpeed = speed;
	}

	public void makeReady(){
		ready = true;
	}

	void Start(){
		tags = new List<string>();

		base.Start();
		base.target = GameObject.Find("Player").transform;

		if(seekMode == SeekMode.ranged){
			base.myTarget = computeNewDestination(10f);
		}else if(seekMode == SeekMode.melee){
			base.myTarget = computeNewDestination(1f);
		}
		base.ForceSearchPath();
		base.enableRotation = false;

		healthBar = transform.Find("Canvas/Slider").GetComponent<Slider>() as Slider;
//		healthBar.gameObject.SetActive(false); //not using for now
		base.speed = Random.Range(minSpeed, maxSpeed);
		pc = GameObject.Find("Player").GetComponent<PlayerController>();
		StartCoroutine("weaponFireDecide");	
		StartCoroutine("moveDecide");
		currHealth = maxHealth;

		anim = transform.Find("sprite").GetComponent<Animator>();
		spriteRend = transform.Find("sprite").GetComponent<SpriteRenderer>();
		lastX = transform.position.x;

		//initialize damage text to nothing
		for(int i = 0; i < damageTexts.Count; i++){
			damageTexts[i].text = "";
		}
	}

	protected override void Update ()
	{
		if(ready){
			base.Update ();

			//if enemy max health was changed via slider in debug menu, update the health
			//of this enemy
			if(GameObject.Find("GameManager").GetComponent<GameManager>().getEnemyMaxHealth() != maxHealth){
				maxHealth = GameObject.Find("GameManager").GetComponent<GameManager>().getEnemyMaxHealth();
				currHealth = GameObject.Find("GameManager").GetComponent<GameManager>().getEnemyMaxHealth();
			}

			//if we haven't destroyed healthbar due to dead, update it
			if(healthBar != null)
				healthBar.value = currHealth / maxHealth;

			//makes enemy go idle if standing still
			if(transform.position == base.myTarget){
				anim.SetBool("isidle", true);
				anim.SetBool("isrunning", false);

				//we're standing, so set sprite direction
				//based on where player is in relation
				//to us
				if(pc.transform.position.x < this.transform.position.x){
					spriteRend.flipX = true;
				}else{
					spriteRend.flipX = false;
				}

			}else{
				anim.SetBool("isidle", false);
				anim.SetBool("isrunning", true);

				//we're walking, so set sprite direction
				//based on last position
				if(lastX > this.transform.position.x){
					spriteRend.flipX = true;
				}else{
					spriteRend.flipX = false;
				}
			}

			lastX = transform.position.x;
		}
	}

	Vector3 computeNewDestination(float aroundPlayerRange){
		Vector3 tpos = target.position;

		Vector2 aroundTarget = 
			new Vector2(
				tpos.x + Random.Range(-aroundPlayerRange, aroundPlayerRange), 
				tpos.y + Random.Range(-aroundPlayerRange, aroundPlayerRange));

		//keep trying to find a place that isn't occupied by a wall or an enemy
		Collider2D[] hit = Physics2D.OverlapCircleAll(aroundTarget, 1f);

		int numTries = 0; //prevent infinite loop
		while(hit.Length > 0 && numTries < 10){
			
			for(int i = 0; i < hit.Length; i++){
				//if the tile isn't walkable, try another one
				if(hit[i].tag == "Wall" || hit[i].tag == "Enemy"){
					aroundTarget = 
						new Vector2(
							tpos.x + Random.Range(-aroundPlayerRange, aroundPlayerRange),
							tpos.y + Random.Range(-aroundPlayerRange, aroundPlayerRange));
					hit = Physics2D.OverlapCircleAll(aroundTarget, 1f);
					break;
				}
			}
			numTries++;
		}

		return aroundTarget;
	}

	//continually check LOS and compute new destination if LOS is lost
	IEnumerator moveDecide(){
		while(true){
			//find a spot based on whether we need melee distance or ranged distance
			if(seekMode == SeekMode.ranged){
				//check line of sight from current destination point and player
				RaycastHit2D[] hits = Physics2D.RaycastAll(base.myTarget, pc.transform.position - base.myTarget);
				if(hits.Length > 0){
					tags.Clear();
					for(int i = 0; i < hits.Length; i++){
						tags.Add(hits[i].transform.tag);
					}

					//prevents enemies from not shooting due to other enemies being in line of sight
					tags.RemoveAll(x => x == "Enemy");

					//if player isn't in line of sight
					if(tags.IndexOf("Player") != 0){
						base.myTarget = computeNewDestination(10f);

						//change: this to not keep getting called even after a spot has been found
						base.ForceSearchPath();
					}

				}
			}else if(seekMode == SeekMode.melee){
				if(Vector3.Distance(base.myTarget, pc.transform.position) > 2f){
					base.myTarget = computeNewDestination(1f);
					base.ForceSearchPath();
				}
			}
			yield return new WaitForSeconds(0.1f);
		}
	}

	//continually decide whether to fire weapon based on player being in/out of LOS
	IEnumerator weaponFireDecide()
	{
		while(true){
			if(seekMode == SeekMode.ranged){
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
						GameObject newBullet = 
							GameObject.Instantiate(Resources.Load("Prefabs/Bullet_MP5"), transform.position, Quaternion.identity) as GameObject;
						newBullet.GetComponent<Bullet>().setDirection(pc.transform.position);
						newBullet.GetComponent<Bullet>().setTargetTag("Player");
						newBullet.GetComponent<Bullet>().setColor(Color.green);

						newBullet.GetComponent<Bullet>().makeReady();
					}
				}
			//for melee we still shoot bullet, but just make it invisible
			}else if(seekMode == SeekMode.melee){
				if(Vector3.Distance(transform.position, pc.transform.position) < 2f){
					GameObject newBullet = 
						GameObject.Instantiate(Resources.Load("Prefabs/Bullet_MP5"), transform.position, Quaternion.identity) as GameObject;
					newBullet.GetComponent<Bullet>().setDirection(pc.transform.position);
					newBullet.GetComponent<Bullet>().setTargetTag("Player");
					newBullet.GetComponent<Bullet>().makeInvisible();

					newBullet.GetComponent<Bullet>().makeReady();
				}
			}
			yield return new WaitForSeconds(firingSpeed);
		}
	}

	public void takeDmg(int dmg, PlayerController.killMode mode){
		currHealth -= dmg;

		if(currHealth <= 0f){
			killMe(mode);
		}

		for(int i = 0; i < damageTexts.Count; i++){
			if(damageTexts[i].GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("anim_damageTextWaiting")){
				damageTexts[i].text = dmg.ToString();
				damageTexts[i].GetComponent<Animator>().SetTrigger("begin");
				damageTexts[i].color = Color.Lerp(Color.red, Color.green, currHealth / maxHealth);
				break;
			}
		}

	}

	public void killMe(PlayerController.killMode mode){
		ready = false; //stop updating stuff from happening

		//stop moving and shooting coroutines
		StopCoroutine("weaponFireDecide");	
		StopCoroutine("moveDecide");

		GameObject.Find("GameManager").GetComponent<GameManager>().removeEnemy(gameObject);

		base.canMove = false;
		Destroy(GetComponent<Rigidbody2D>()); //so we can't shove it
		Destroy(transform.Find("sprite").GetComponent<BoxCollider2D>()); //so we can walk over it
		Destroy(healthBar.gameObject);

		//determine what death animation should play, based on how we are killed
		//Random.Range(1,3) does 1-2, Random.Range(3,5) does 3-4
		int randDeathInt = 0;
		if(mode == PlayerController.killMode.sliced){
			randDeathInt = Random.Range(1,4);
		}else if(mode == PlayerController.killMode.shot){
			randDeathInt = Random.Range(4,7);
		}else if(mode == PlayerController.killMode.puked){
			randDeathInt = Random.Range(7,8);
		}else if(mode == PlayerController.killMode.burnt){
			randDeathInt = Random.Range(8,9);
		}

		anim.SetInteger("randDeathInt", randDeathInt);

		StartCoroutine("waitForDeathAnimationToStart");
	}

	IEnumerator waitForDeathAnimationToStart(){
		while(!anim.GetCurrentAnimatorStateInfo(0).IsTag("Death")){
			yield return new WaitForSeconds(0.1f);
		}
		StartCoroutine("afterDeath");
	}

	//what happens to enemy after death animation is done
	//(technically some milliseconds seconds before it ends)
	IEnumerator afterDeath(){
		//wait until death animation is on last frame (roundabout)
		while(anim.GetCurrentAnimatorStateInfo(0).normalizedTime % 1 <= 0.9f){
			yield return new WaitForSeconds(0.01f);
		}

		if(!GameObject.Find("GameManager").GetComponent<GameManager>().doEnemyCorpsesDisappear())
			anim.speed = 0;

		if(dropLoot){
			//drop loot
			int roll = Random.Range(0,10);

			if(roll == 1 || roll == 2){
				GameObject goods = 
					GameObject.Instantiate(
						Resources.Load("Prefabs/Ammo"), 
						transform.position, 
						Quaternion.identity) as GameObject;
			}else if(roll == 3 || roll == 4){
				GameObject goods = 
					GameObject.Instantiate(
						Resources.Load("Prefabs/Health"), 
						transform.position, 
						Quaternion.identity) as GameObject;
			}else if(roll == 7){
				GameObject goods = 
					GameObject.Instantiate(
						Resources.Load("Prefabs/BouncyAmmo"), 
						transform.position, 
						Quaternion.identity) as GameObject;
			}
		}

		Destroy(this); //destroy this script
		Destroy(this.GetComponent<Seeker>()); //destroy seeker script
		Destroy(transform.Find("Canvas").gameObject); //get rid of healthbar canvas
	}
}
