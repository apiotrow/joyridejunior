using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;

public class Gun : MonoBehaviour {
	PlayerController pc;
	public List<Sprite> bulletSequence;
	public List<Sprite> bulletRepeat;

	GameObject bulletSeqStart;
	GameObject bulletRepStart;

	Text ammoText;
	float currAmmo;
	bool bouncyAmmo;
	int bouncesLeft;
	int maxBounces;
	Slider bouncyAmmoBar;
	Toggle bouncyBullets;
	Toggle infAmmo;
	float maxAmmo = 300;
	bool firing = false;

	public Weapon currWeapon;

	public class Weapon{
		WeaponType weap;

		public enum WeaponType{
			Angler,
			MP5
		}

		public bool bulletsGoThroughEnemy = true;
		public PlayerController.killMode killMode;
		public string bulletPrefab;
		public string gunSprite;
		public float bulletSpeed;
		public bool automatic;
		public float firingRate;

		public bool wantToFire(){
			if(automatic){
				return Input.GetMouseButton(0);
			}else{
				return Input.GetMouseButtonDown(0);
			}
		}

		public Weapon(){
			bulletPrefab = "Bullet_Angler";
		}

		public void setWeapon(WeaponType type){
			if(type == WeaponType.Angler){
				bulletsGoThroughEnemy = true;
				killMode = PlayerController.killMode.shot;
				bulletPrefab = "Bullet_Angler";
				gunSprite = "gun_4";
				bulletSpeed = 10f;
				automatic = false;
			}else if(type == WeaponType.MP5){
				bulletsGoThroughEnemy = false;
				killMode = PlayerController.killMode.shot;
				bulletPrefab = "Bullet_MP5";
				gunSprite = "gun_1";
				bulletSpeed = 20f;
				automatic = true;
				firingRate = 0.1f;
			}
		}
	}

	void Start () {
		bulletSeqStart = transform.Find("bulletSeqStart").gameObject;
		bulletRepStart = transform.Find("bulletRepStart").gameObject;

		pc = GameObject.Find("Player").GetComponent<PlayerController>();

		ammoText = GameObject.Find("PlayerAmmo").GetComponent<Text>() as Text;
		ammoText.text = maxAmmo.ToString();
		currAmmo = maxAmmo;
		bouncyAmmoBar = GameObject.Find("BouncyAmmoBar").GetComponent<Slider>() as Slider;
		bouncyAmmoBar.gameObject.SetActive(false);
		infAmmo = GameObject.Find("Toggle_InfAmmo").GetComponent<Toggle>() as Toggle;
		bouncyBullets = GameObject.Find("Toggle_BouncyBullets").GetComponent<Toggle>() as Toggle;

		currWeapon = new Weapon();
	}

	void Update () {
		string ammoString = currAmmo.ToString() + " / " + maxAmmo.ToString();
		ammoText.text = ammoString;

		handleFiring();

		if(firing){
			GetComponent<AudioSource>().volume = 0.2f;
			if(!GetComponent<AudioSource>().isPlaying)
				GetComponent<AudioSource>().Play();
		}else{
			if(GetComponent<AudioSource>().isPlaying){
				GetComponent<AudioSource>().volume = Mathf.Lerp(GetComponent<AudioSource>().volume, 0f, Time.deltaTime * 10f);

				if(GetComponent<AudioSource>().volume <= 0.1f)
					GetComponent<AudioSource>().Stop();
			}
		}
	}

	void handleFiring(){
		if(currWeapon.wantToFire() && firing == false){
			StartCoroutine("seqBlink", bulletSequence[0]);
			StartCoroutine("fire", bulletRepeat[0]);
			firing = true;
		}else if(!currWeapon.wantToFire() && firing == true){
			StopCoroutine("seqBlink");
			StopCoroutine("fire");
			bulletSeqStart.GetComponent<SpriteRenderer>().sprite = null;
			firing = false;
		}
	}

	public void setWeapon(Weapon.WeaponType type){
		currWeapon.setWeapon(type);
	}

	//blinks something right in front of the barrel, for muzzle flash effect
	IEnumerator seqBlink(Sprite sp){
		while(true){
			if (bulletSeqStart.GetComponent<SpriteRenderer>().sprite == null){
				bulletSeqStart.GetComponent<SpriteRenderer>().sprite = sp;
			}else if(bulletSeqStart.GetComponent<SpriteRenderer>().sprite == sp){
				bulletSeqStart.GetComponent<SpriteRenderer>().sprite = null;
			}

			yield return new WaitForSeconds(currWeapon.firingRate);
		}
	}

	public IEnumerator fire(Sprite sp){
		while(true){
			if(currAmmo > 0){
				GameObject newBullet = 
					GameObject.Instantiate(
						Resources.Load("Prefabs/" + currWeapon.bulletPrefab), 
						bulletRepStart.transform.position, 
						this.transform.rotation) as GameObject;
				newBullet.GetComponent<Bullet>().setDirection(pc.getReticleTarget());
				newBullet.GetComponent<Bullet>().setTargetTag("Enemy");
				newBullet.GetComponent<Bullet>().doesGoThroughEnemy(currWeapon.bulletsGoThroughEnemy);
				newBullet.GetComponent<Bullet>().setKillMode(currWeapon.killMode);
				newBullet.GetComponent<Bullet>().setBulletSpeed(currWeapon.bulletSpeed);

				if(bouncyAmmo){
					newBullet.GetComponent<Bullet>().setMaxBounces(5);
					bouncesLeft--;

					bouncyAmmoBar.value = (float)bouncesLeft / (float)maxBounces;

					if(bouncesLeft <= 0){
						bouncyAmmo = false;
						bouncyAmmoBar.gameObject.SetActive(false);
						bouncesLeft = 0;
					}
				}else if(bouncyBullets.isOn){
					newBullet.GetComponent<Bullet>().setMaxBounces(5);
				}else{
					newBullet.GetComponent<Bullet>().setMaxBounces(0);
				}
					
				newBullet.GetComponent<Bullet>().makeReady();

				if(!infAmmo.isOn)
					currAmmo -= 1;

				if(currAmmo <= 0){
					currAmmo = 0;
				}
			}
			yield return new WaitForSeconds(currWeapon.firingRate);
		}
	}

	public void increaseAmmo(int amt){
		currAmmo+= amt;

		if(currAmmo >= maxAmmo)
			currAmmo = maxAmmo;
	}

	public void enableBouncyAmmo(int numRounds){
		bouncyAmmoBar.gameObject.SetActive(true);
		bouncyAmmo = true;
		maxBounces = numRounds;
		bouncesLeft = numRounds;
		bouncyAmmoBar.value = (float)bouncesLeft / (float)maxBounces;
	}
}
