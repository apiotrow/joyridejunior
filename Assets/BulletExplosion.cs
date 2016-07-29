using UnityEngine;
using System.Collections;

public class BulletExplosion : MonoBehaviour {
	bool animPlaying = false;

	void Start () {
	
	}

	void Update () {
//		if(this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("BulletExplosion_Anim")){
//			animPlaying = true;
//		}

//		if(this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length >
//			this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime)
//			animPlaying = true;
//			
//		if(animPlaying == true){
////			if (this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length >
////				this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime){
////				Destroy(gameObject);
////			}
//
//			if(!this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("BulletExplosion_Anim")){
//				Destroy(gameObject);
//			}
//		}


		if(this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("Done")){
			Debug.Log("sdf");
			Destroy(gameObject);
		}
	}
}
