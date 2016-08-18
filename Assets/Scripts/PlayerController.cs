using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.EventSystems;

public class PlayerController : MonoBehaviour {
	public MoveType moveType;
	public float movSpeed = 4f;

	GameObject player;
	Rigidbody2D playerRB;
	Vector2 reticleTarget;
	float currHealth;
	Slider healthBar;
	Toggle infHealth;
	Animator anim;
	SpriteRenderer spriteRend;
	GameObject handDirection;
	public GameObject light_gunlight;
	GameObject worldLight;
	GameObject playerCam;

	GameObject melee;
	GameObject sheath_R;
	GameObject sheath_L;
	GameObject sheathedMelee_R;
	GameObject sheathedGun_R;
	GameObject sheathedMelee_L;
	GameObject sheathedGun_L;
	GameObject gun;

	AudioClip slashEnemy;
	AudioClip slashAir;

	float maxHealth = 100f;

	public enum killMode{
		sliced,
		shot,
		burnt,
		puked
	}

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

	public Vector2 getReticleTarget(){
		return reticleTarget;
	}

	void changeWeapon(Sprite meleeSprite, Sprite rangedSprite){
		melee.GetComponent<SpriteRenderer>().sprite = meleeSprite;
		gun.GetComponent<SpriteRenderer>().sprite = rangedSprite;
		sheathedMelee_R.GetComponent<SpriteRenderer>().sprite = meleeSprite;
		sheathedMelee_L.GetComponent<SpriteRenderer>().sprite = meleeSprite;
		sheathedGun_R.GetComponent<SpriteRenderer>().sprite = rangedSprite;
		sheathedGun_L.GetComponent<SpriteRenderer>().sprite = rangedSprite;
	}

	void Start () {
		player = GameObject.Find("Player");
		playerRB = player.GetComponent<Rigidbody2D>();
		moveType = MoveType.lerped;
		reticleTarget = new Vector3();
		healthBar = GameObject.Find("PlayerHealthBar").GetComponent<Slider>() as Slider;
		currHealth = maxHealth;

		melee = transform.Find("gunlight/melee").gameObject;
		gun = transform.Find("gunlight/gun").gameObject;
		sheath_R = transform.Find("sheath_R").gameObject;
		sheath_L = transform.Find("sheath_L").gameObject;
		sheathedMelee_R = sheath_R.transform.Find("melee").gameObject;
		sheathedGun_R = sheath_R.transform.Find("gun").gameObject;
		sheathedMelee_L = sheath_L.transform.Find("melee").gameObject;
		sheathedGun_L = sheath_L.transform.Find("gun").gameObject;

		Sprite[] meleeTextures = Resources.LoadAll<Sprite>("Sprites/Weapons/joyride_melee");
		string[] meleeWeapons = new string[meleeTextures.Length];
		for(int i = 0; i < meleeWeapons.Length; i++) {
			meleeWeapons[i] = meleeTextures[i].name;
		}
		Sprite[] gunTextures = Resources.LoadAll<Sprite>("Sprites/Weapons/joyride_guns");
		string[] guns = new string[gunTextures.Length];
		for(int i = 0; i < guns.Length; i++) {
			guns[i] = gunTextures[i].name;
		}
		Button btn;
		btn = GameObject.Find("Button_ChangeWeapon").GetComponent("Button") as Button;
		btn.onClick.AddListener(() => {
			string randMeleeWeap = meleeWeapons[Random.Range(0, meleeWeapons.Length)];
			string randGun = guns[Random.Range(0, guns.Length)];
			Sprite gunSp = gunTextures.Where(t => t.name == randGun).First<Sprite>();
			Sprite meleeSp = meleeTextures.Where(t => t.name == randMeleeWeap).First<Sprite>();
			changeWeapon(meleeSp, gunSp);
		});

		infHealth = GameObject.Find("Toggle_InfHealth").GetComponent<Toggle>() as Toggle;
		infHealth = GameObject.Find("Toggle_InfHealth").GetComponent<Toggle>() as Toggle;

		anim = transform.Find("sprite").GetComponent<Animator>();
		spriteRend = transform.Find("sprite").GetComponent<SpriteRenderer>();

		handDirection = transform.Find("gunlight").gameObject;
		worldLight = GameObject.Find("light_world");

		playerCam = transform.Find("playerCam").gameObject;

		//so melee weap is our starting
		gun.GetComponent<SpriteRenderer>().enabled = false;

		slashAir = Resources.Load("Sounds/slashair") as AudioClip;
		slashEnemy = Resources.Load("Sounds/slash") as AudioClip;
	}

	void Update () {
		updatePlayerPosition();
		updateAiming();
		handleMeleeAttack();
		updateWeaponVisibility();
		updateCam();

		healthBar.value = currHealth / maxHealth;

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

	void updatePlayerPosition(){
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
		if(reticleTarget.x < transform.position.x){
			spriteRend.flipX = true;
		}else{
			spriteRend.flipX = false;
		}
			
		//move the character
		if(moveType == MoveType.snapped){
			playerRB.MovePosition(player2Dpos + newPos * Time.deltaTime);
		}else if(moveType == MoveType.lerped){
			playerRB.velocity = Vector2.Lerp(playerRB.velocity, playerRB.velocity + newPos, 10f * Time.deltaTime);
		}
	}

	void updateAiming(){
		GameObject.Find("Reticle").transform.position = Input.mousePosition;
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		reticleTarget = ray.origin;

		Vector3 lightLookAt = reticleTarget;
		lightLookAt.z = 0f;

		handDirection.transform.forward = lightLookAt - transform.position;
	}

	//make character do melee
	void handleMeleeAttack(){
		if(Input.GetMouseButtonDown(1)){
			melee.GetComponent<AudioSource>().PlayOneShot(slashAir);
			//melee distance from player, in direction of reticle
			Vector3 hitLocation = 
				transform.position + (new Vector3(reticleTarget.x, reticleTarget.y, 0f) - transform.position).normalized * 1f;

			Collider2D[] hit = Physics2D.OverlapCircleAll(hitLocation, 0.5f);
			if(hit.Length > 0){
				for(int i = 0; i < hit.Length; i++){
					if(hit[i].transform.parent.GetComponent<Enemy>() != null){
						melee.GetComponent<AudioSource>().PlayOneShot(slashEnemy);
						hit[i].transform.parent.GetComponent<Enemy>().takeDmg(5, killMode.sliced);
						break;
					}
				}
			}
		}
	}

	//update the sheathed/unsheathed and directional status of melee
	//and ranged weapons
	void updateWeaponVisibility(){
		if (Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject()){
			melee.GetComponent<Animator>().SetBool("isSheathed", true);
			gun.GetComponent<SpriteRenderer>().enabled = true;
		}else if(Input.GetMouseButtonDown(1)){
			melee.GetComponent<Animator>().SetBool("isSheathed", false);
			melee.GetComponent<Animator>().SetTrigger("melee");
			gun.GetComponent<SpriteRenderer>().enabled = false;
		}

		//flip object that holds sheathed weapons (strapped to back)
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
}
