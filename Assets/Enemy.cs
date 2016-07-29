using UnityEngine;
using System.Collections;

public class Enemy : AILerp {
	PlayerController pc;

	void Start(){
		base.Start();
		base.ForceSearchPath();
	}

	public override void OnTargetReached () {
		base.ForceSearchPath();
	}

}
