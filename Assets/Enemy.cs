using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Enemy : AILerp {
	int health = 100;
	public Slider healthBar;

	void Start(){
		base.Start();
		base.ForceSearchPath();
		base.enableRotation = false;

		healthBar = transform.Find("Canvas/Slider").GetComponent<Slider>() as Slider;
		base.speed = Random.Range(3, 9);
	}

	public override void OnTargetReached () {
		base.ForceSearchPath();
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
		Debug.Log(health);
	}

}
