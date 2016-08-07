using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {
	public MoveType moveType;
	public float movSpeed = 4f;

	GameObject player;
	Rigidbody2D playerRB;
	Vector2 reticleTarget;
	bool weaponFiring = false;
	float firingSpeed = 0.1f;
	float currHealth;
	Slider healthBar;
	Text ammoText;
	float currAmmo;
	bool bouncyAmmo;
	int bouncesLeft;
	int maxBounces;
	Slider bouncyAmmoBar;
	Toggle infHealth;
	Toggle infAmmo;
	Toggle bouncyBullets;
	Animator anim;
	SpriteRenderer spriteRend;
	GameObject handDirection;
	public GameObject light_gunlight;
	GameObject worldLight;
	GameObject playerCam;

	GameObject melee;
	GameObject sheath_R;
	GameObject sheath_L;
	GameObject sheathedMelee;
	GameObject sheathedGun;
	GameObject gun;

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

		handDirection = transform.Find("gunlight").gameObject;
		worldLight = GameObject.Find("light_world");

		playerCam = transform.Find("playerCam").gameObject;

		melee = transform.Find("gunlight/melee").gameObject;
		sheath_R = transform.Find("sheath_R").gameObject;
		sheath_L = transform.Find("sheath_L").gameObject;

		gun = transform.Find("gunlight/gun").gameObject;
		gun.SetActive(false);
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
			light_gunlight.SetActive(true);
		}else{
			worldLight.SetActive(true);
			light_gunlight.SetActive(false);
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

		//must be vector2 because we're acting on a rigidbody2D
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

		//flip sprite in direction we're aiming.
		//also flip object that holds sheathed weapons (strapped to back)
		if(reticleTarget.x < transform.position.x){
			sheath_L.SetActive(true);
			sheath_R.SetActive(false);

			//make gun or melee weapon sheathed
			if(melee.GetComponent<Animator>().GetBool("isSheathed")){
				sheath_L.transform.Find("melee").gameObject.SetActive(true);
				sheath_L.transform.Find("gun").gameObject.SetActive(false);
			}else{
				sheath_L.transform.Find("melee").gameObject.SetActive(false);
				sheath_L.transform.Find("gun").gameObject.SetActive(true);
			}

			spriteRend.flipX = true;
		}else{
			sheath_L.SetActive(false);
			sheath_R.SetActive(true);

			//make gun or melee weapon sheathed
			if(melee.GetComponent<Animator>().GetBool("isSheathed")){
				sheath_R.transform.Find("melee").gameObject.SetActive(true);
				sheath_R.transform.Find("gun").gameObject.SetActive(false);
			}else{
				sheath_R.transform.Find("melee").gameObject.SetActive(false);
				sheath_R.transform.Find("gun").gameObject.SetActive(true);
			}

			//flip character sprite
			spriteRend.flipX = false;
		}
			
		//move the character
		if(moveType == MoveType.snapped){
			playerRB.MovePosition(player2Dpos + newPos * Time.deltaTime);
		}else if(moveType == MoveType.lerped){
			playerRB.velocity = Vector2.Lerp(playerRB.velocity, playerRB.velocity + newPos, 10f * Time.deltaTime);
		}
	}

	void updateShooting(){
		GameObject.Find("Reticle").transform.position = Input.mousePosition;

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Vector3 screenPos = Camera.main.WorldToScreenPoint(ray.origin);

		reticleTarget = ray.origin;

		//handle ranged and melee attacking via right/left mouse buttons
		if (Input.GetMouseButton(0)){
			melee.GetComponent<Animator>().SetBool("isSheathed", true);
			gun.SetActive(true);

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
			melee.GetComponent<Animator>().SetBool("isSheathed", false);
			melee.GetComponent<Animator>().SetTrigger("melee");
			gun.SetActive(false);

			//melee distance from player, in direction of reticle
			Vector3 hitLocation = 
				transform.position + (new Vector3(reticleTarget.x, reticleTarget.y, 0f) - transform.position).normalized * 1f;

			Collider2D[] hit = Physics2D.OverlapCircleAll(hitLocation, 0.5f);
			if(hit.Length > 0){
				for(int i = 0; i < hit.Length; i++){
					if(hit[i].transform.GetComponent<Enemy>() != null){
						hit[i].transform.GetComponent<Enemy>().takeDmg(5);
						break;
					}
				}
			}
		}else{
			weaponFiring = false;
			StopCoroutine("fireWeapon");
		}

		Vector3 lightLookAt = ray.origin;
		lightLookAt.z = 0f;
		handDirection.transform.forward = lightLookAt - transform.position;
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

	public void killMe(){
		GetComponent<PlayerController>().enabled = false;
		transform.Find("sprite").GetComponent<SpriteRenderer>().color = Color.red;
		GameObject.Find("GameManager").GetComponent<GameManager>().showDeadText();
	}

	public void enableBouncyAmmo(int numRounds){
		bouncyAmmoBar.gameObject.SetActive(true);
		bouncyAmmo = true;
		maxBounces = numRounds;
		bouncesLeft = numRounds;
		bouncyAmmoBar.value = (float)bouncesLeft / (float)maxBounces;
	}
}
