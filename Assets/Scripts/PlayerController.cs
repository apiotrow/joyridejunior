using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {
	GameObject player;
	Rigidbody2D playerRB;
	public Vector2 reticleTarget;
	bool weaponFiring = false;
	float firingSpeed = 0.1f;
	float currHealth;
	Slider healthBar;
	Text ammoText;
	float currAmmo;
	bool bouncyAmmo;
	int bouncesLeft;
	int maxBounces;
	public Slider bouncyAmmoBar;
	Toggle infHealth;
	Toggle infAmmo;
	Toggle bouncyBullets;
	Animator anim;
	SpriteRenderer spriteRend;
	GameObject gunlight;
	GameObject worldLight;
	GameObject playerCam;

	public MoveType moveType;
	public float movSpeed = 4f;
	float maxHealth = 100f;
	float maxAmmo = 300;

	public enum MoveType {
		lerped,
		snapped
	}

	public void takeDmg(int dmg){
		if(!infHealth.isOn)
			currHealth -= dmg;
	}

	public void increaseHealth(int amt){
		currHealth += amt;
		if(currHealth > maxHealth){
			currHealth = maxHealth;
		}
	}

	public void increaseAmmo(int amt){
		currAmmo+= amt;

		if(currAmmo >= maxAmmo)
			currAmmo = maxAmmo;
	}

	void Start () {
		player = GameObject.Find("Player");
		playerRB = player.GetComponent<Rigidbody2D>();
		moveType = MoveType.lerped;
		reticleTarget = new Vector3();
		healthBar = GameObject.Find("PlayerHealthBar").GetComponent<Slider>() as Slider;
		ammoText = GameObject.Find("PlayerAmmo").GetComponent<Text>() as Text;
		currHealth = maxHealth;
		ammoText.text = maxAmmo.ToString();
		currAmmo = maxAmmo;

		bouncyAmmoBar = GameObject.Find("BouncyAmmoBar").GetComponent<Slider>() as Slider;
		bouncyAmmoBar.gameObject.SetActive(false);

		infHealth = GameObject.Find("Toggle_InfHealth").GetComponent<Toggle>() as Toggle;
		infAmmo = GameObject.Find("Toggle_InfAmmo").GetComponent<Toggle>() as Toggle;
		bouncyBullets = GameObject.Find("Toggle_BouncyBullets").GetComponent<Toggle>() as Toggle;
		infHealth = GameObject.Find("Toggle_InfHealth").GetComponent<Toggle>() as Toggle;

		anim = transform.Find("sprite").GetComponent<Animator>();
		spriteRend = transform.Find("sprite").GetComponent<SpriteRenderer>();

		gunlight = transform.Find("gunlight").gameObject;
		worldLight = GameObject.Find("light_world");

		playerCam = transform.Find("playerCam").gameObject;
	}

	void Update () {
		updatePosition();
		updateShooting();
		updateCam();

		healthBar.value = currHealth / maxHealth;

		string ammoString = currAmmo.ToString() + " / " + maxAmmo.ToString();
		ammoText.text = ammoString;

		if(currHealth <= 0f){
			killMe();
		}

		//updating lighting settings
		if(GameObject.Find("GameManager").GetComponent<GameManager>().nightMode == true){
			worldLight.SetActive(false);
			gunlight.transform.Find("light_gunlight").gameObject.SetActive(true);
		}else{
			worldLight.SetActive(true);
			gunlight.transform.Find("light_gunlight").gameObject.SetActive(false);
		}
	}

	void updateCam(){
		Vector3 newCamPos = new Vector3(0f, 0f, playerCam.transform.position.z);

		//make camera shift slightly in direction we're aiming
		float screenMidX = Screen.width / 2f;
		float screenMidY = Screen.height / 2f;
		float camX = (Input.mousePosition.x - screenMidX) / screenMidX;
		float camY = (Input.mousePosition.y - screenMidY) / screenMidY;

		newCamPos.x += camX;
		newCamPos.y += camY;

		playerCam.transform.localPosition = newCamPos;
	}

	public void killMe(){
		GetComponent<PlayerController>().enabled = false;
		transform.Find("sprite").GetComponent<SpriteRenderer>().color = Color.red;
		GameObject.Find("GameManager").GetComponent<GameManager>().showDeadText();
	}

	void updateShooting(){
		GameObject.Find("Reticle").transform.position = Input.mousePosition;

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Vector3 screenPos = Camera.main.WorldToScreenPoint(ray.origin);

		reticleTarget = ray.origin;

		//handle ranged and melee attacking via right/left mouse buttons
		if (Input.GetMouseButton(0)){
			if(screenPos.x > 0 
				&& screenPos.x < Screen.width
				&& screenPos.y > 0 
				&& screenPos.y < Screen.height){
				if(weaponFiring == false){
					StartCoroutine("fireWeapon");
					weaponFiring = true;
				}
			}else{
				weaponFiring = false;
				StopCoroutine("fireWeapon");
			}
		}else if(Input.GetMouseButtonDown(1)){
			//melee distance from player, in direction of reticle
			Vector3 hitLocation = 
				transform.position + (new Vector3(reticleTarget.x, reticleTarget.y, 0f) - transform.position).normalized * 1f;

			//coule be used to place mines
			GameObject g = GameObject.Instantiate(Resources.Load("Prefabs/dirt4"),hitLocation, Quaternion.identity) as GameObject;

			//check in a radius around hit area for enemies.
			//if hit one, make it take damage
			RaycastHit2D hit = Physics2D.CircleCast(hitLocation, 2f, Vector2.zero);
			if(hit && (hit.transform.tag == "Enemy")){
				if(hit.transform.GetComponent<Enemy>() != null){
					hit.transform.GetComponent<Enemy>().takeDmg(5);
				}
			}

		}else{
			weaponFiring = false;
			StopCoroutine("fireWeapon");
		}

		Vector3 lightLookAt = ray.origin;
		lightLookAt.z = 0f;
		gunlight.transform.forward = lightLookAt - transform.position;
	}

	public void enableBouncyAmmo(int numRounds){
		bouncyAmmoBar.gameObject.SetActive(true);
		bouncyAmmo = true;
		maxBounces = numRounds;
		bouncesLeft = numRounds;
		bouncyAmmoBar.value = (float)bouncesLeft / (float)maxBounces;
	}

	IEnumerator fireWeapon()
	{
		while(true && currAmmo > 0){
			GameObject newBullet = GameObject.Instantiate(Resources.Load("Prefabs/Bullet"), player.transform.position, Quaternion.identity) as GameObject;
			newBullet.GetComponent<Bullet>().setDirection(reticleTarget);
			newBullet.GetComponent<Bullet>().setTargetTag("Enemy");

			if(bouncyAmmo){
				newBullet.GetComponent<Bullet>().setColor(new Color32(255, 0, 216, 255)); //hot pink
				newBullet.GetComponent<Bullet>().setMaxBounces(5);
				bouncesLeft--;

				bouncyAmmoBar.value = (float)bouncesLeft / (float)maxBounces;

				if(bouncesLeft <= 0){
					bouncyAmmo = false;
					bouncyAmmoBar.gameObject.SetActive(false);
					bouncesLeft = 0;
				}
			}else if(bouncyBullets.isOn){
				newBullet.GetComponent<Bullet>().setColor(new Color32(255, 0, 216, 255)); //hot pink
				newBullet.GetComponent<Bullet>().setMaxBounces(5);
			}else{
				newBullet.GetComponent<Bullet>().setColor(Color.yellow);
				newBullet.GetComponent<Bullet>().setMaxBounces(0);
			}
			
			newBullet.GetComponent<Bullet>().makeReady();

			if(!infAmmo.isOn)
				currAmmo -= 1;

			if(currAmmo <= 0){
				currAmmo = 0;
			}

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

		if(!moveUp && !moveRight && !moveLeft && !moveDown){
			anim.SetBool("isidle", true);
			anim.SetBool("isrunning", false);
		}
		
		if(moveUp){
			newPos.y += movSpeed;
			anim.SetBool("isidle", false);
			anim.SetBool("isrunning", true);
		}

		if(moveDown){
			newPos.y -= movSpeed;
			anim.SetBool("isidle", false);
			anim.SetBool("isrunning", true);
		}

		if(moveLeft){
			newPos.x -= movSpeed;
			anim.SetBool("isidle", false);
			anim.SetBool("isrunning", true);
		}

		if(moveRight){
			newPos.x += movSpeed;
			anim.SetBool("isidle", false);
			anim.SetBool("isrunning", true);
		}

		//flip sprite in direction we're aiming
		if(reticleTarget.x < transform.position.x){
			spriteRend.flipX = true;
		}else{
			spriteRend.flipX = false;
		}

		if(moveType == MoveType.snapped){
			playerRB.MovePosition(player2Dpos + newPos * Time.deltaTime);
		}else if(moveType == MoveType.lerped){
			playerRB.velocity = Vector2.Lerp(playerRB.velocity, playerRB.velocity + newPos, 10f * Time.deltaTime);
		}
	}


}
