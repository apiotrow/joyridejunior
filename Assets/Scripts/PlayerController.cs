using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {
	GameObject player;
	Rigidbody2D playerRB;
	Vector2 reticleTarget;
	bool weaponFiring = false;
	float firingSpeed = 0.1f;

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
		reticleTarget = new Vector3();
	}

	void Update () {
		updatePosition();
		updateShooting();
	}

	void updateShooting(){
		GameObject.Find("Reticle").transform.position = Input.mousePosition;

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Vector3 screenPos = Camera.main.WorldToScreenPoint(ray.origin);

		if (Input.GetMouseButton(0)
			&& screenPos.x > 0 
			&& screenPos.x < Screen.width
			&& screenPos.y > 0 
			&& screenPos.y < Screen.height
		){
			reticleTarget = ray.origin;
			if(weaponFiring == false){
				StartCoroutine("fireWeapon");
				weaponFiring = true;
			}
		}else{
			weaponFiring = false;
			StopCoroutine("fireWeapon");
		}
	}

	IEnumerator fireWeapon()
	{
		while(true){
			GameObject newBullet = GameObject.Instantiate(Resources.Load("Prefabs/Bullet"), player.transform.position, Quaternion.identity) as GameObject;
			newBullet.GetComponent<Bullet>().setDirection(reticleTarget);
			newBullet.GetComponent<Bullet>().setTargetTag("Enemy");
			newBullet.GetComponent<Bullet>().setColor(Color.yellow);
			newBullet.GetComponent<Bullet>().makeReady();

			yield return new WaitForSeconds(firingSpeed);
		}
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
