using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	GameObject player;
	Rigidbody2D playerRB;

	public MoveType moveType;
	public float movSpeed = 9f;

	public enum MoveType {
		lerped,
		snapped
	}

	void Start () {
		player = GameObject.Find("Player");
		playerRB = player.GetComponent<Rigidbody2D>();
		moveType = MoveType.lerped;
	}

	void Update () {
		updatePosition();

	}

	void updatePosition(){
		bool moveUp = false;
		bool moveDown = false;
		bool moveLeft = false;
		bool moveRight = false;

		if(Input.GetKey(KeyCode.A)){
			moveLeft = true;
		}
		if(Input.GetKey(KeyCode.D)){
			moveRight = true;
		}
		if(Input.GetKey(KeyCode.W)){
			moveUp = true;
		}
		if(Input.GetKey(KeyCode.S)){
			moveDown = true;
		}



		Vector2 player2Dpos = new Vector2(player.transform.position.x, player.transform.position.y);

		Vector2 newPos = Vector2.zero;

//		float movSpeed = 7f;
		if(moveUp){
			newPos.y += movSpeed;
		}

		if(moveDown){
			newPos.y -= movSpeed;
		}

		if(moveLeft){
			newPos.x -= movSpeed;
		}

		if(moveRight){
			newPos.x += movSpeed;
		}

		if(moveType == MoveType.snapped){
			playerRB.MovePosition(player2Dpos + newPos * Time.deltaTime);
		}else if(moveType == MoveType.lerped){
			playerRB.velocity = Vector2.Lerp(playerRB.velocity, playerRB.velocity + newPos, 10f * Time.deltaTime);
		}
	}
}
