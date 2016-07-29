using UnityEngine;
using System.Collections;

public class BulletExplosion : MonoBehaviour {
	void Update () {
		if(this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Done")){
			Destroy(gameObject);
		}
	}
}
