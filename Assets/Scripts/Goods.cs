using UnityEngine;
using System.Collections;

public class Goods : MonoBehaviour {
	PlayerController pc;
	Gun gun;

	void Start () {
		pc = GameObject.Find("Player").GetComponent<PlayerController>();
		gun = GameObject.Find("gun1").GetComponent<Gun>();
	}

	void Update () {
		Bounds playerBounds = pc.transform.Find("sprite").GetComponent<CircleCollider2D>().bounds;
		if(gameObject.GetComponent<BoxCollider2D>().bounds.Intersects(playerBounds)){

			if(gameObject.name.Contains("Health")){
				pc.increaseHealth(5);
			}

			if(gameObject.name.Contains("Ammo")){
				gun.increaseAmmo(25);
			}

			if(gameObject.name.Contains("BouncyAmmo")){
				gun.enableBouncyAmmo(40);
			}

			Destroy(gameObject);
		}
	}
}
