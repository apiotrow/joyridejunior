using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;


public class Enemy : AILerp {
	int health = 100;
	public Slider healthBar;
	PlayerController pc;
	bool weaponFiring = false;

	float firingSpeed = 0.5f;

	void Start(){
		base.Start();
		base.ForceSearchPath();
		base.enableRotation = false;

		healthBar = transform.Find("Canvas/Slider").GetComponent<Slider>() as Slider;
		base.speed = Random.Range(3, 5);
		pc = GameObject.Find("Player").GetComponent<PlayerController>();
		StartCoroutine("weaponFireDecide");	
	}

	public override void OnTargetReached () {
		base.ForceSearchPath();
	}

	IEnumerator weaponFireDecide()
	{
		while(true){
			RaycastHit2D[] hits = Physics2D.RaycastAll(transform.position, pc.transform.position - transform.position);
			if(hits.Length > 0){
				List<string> names = new List<string>();
				for(int i = 0; i < hits.Length; i++){
					names.Add(hits[i].transform.name);
				}

				if(names.IndexOf("Player") == 1){
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
