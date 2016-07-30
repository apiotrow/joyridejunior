﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;


public class Enemy : AILerp {
	Slider healthBar;
	PlayerController pc;
	bool weaponFiring = false;
	List<string> tags;

	float firingSpeed = 2f;
	int health = 30;
	float aroundPlayerRange = 10f;

	public SeekMode seekMode;

	public enum SeekMode{
		ifNoLOSgotoLOS,
		ifNoLOSgoToPlayer
	}



	void Start(){
		tags = new List<string>();

		base.Start();
		base.ForceSearchPath();
		base.enableRotation = false;

		healthBar = transform.Find("Canvas/Slider").GetComponent<Slider>() as Slider;
		base.speed = Random.Range(3, 9);
		pc = GameObject.Find("Player").GetComponent<PlayerController>();
		StartCoroutine("weaponFireDecide");	
		StartCoroutine("moveDecide");
	}

	public override void OnTargetReached () {
		base.ForceSearchPath();
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

					//we found one, make it the target
					base.myTarget = aroundTarget;

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
					newBullet.GetComponent<Bullet>().targetTag = "Player";
					newBullet.GetComponent<Bullet>().setColor(Color.red);

					newBullet.GetComponent<Bullet>().ready = true;
				}
			}
			yield return new WaitForSeconds(firingSpeed);
		}
	}

	protected override void Update ()
	{
		base.Update ();

		healthBar.value = health / 100f;

		if(health <= 0f)
			Destroy(gameObject);


	}



	public void takeDmg(int dmg){
		health -= dmg;
	}

	

}