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
	bool firing;

	void Start () {
		bulletSeqStart = transform.Find("bulletSeqStart").gameObject;
		bulletRepStart = transform.Find("bulletRepStart").gameObject;
		StartCoroutine("seqBlink", bulletSequence[0]);
		StartCoroutine("fire", bulletRepeat[0]);
		pc = GameObject.Find("Player").GetComponent<PlayerController>();

		ammoText = GameObject.Find("PlayerAmmo").GetComponent<Text>() as Text;
		ammoText.text = maxAmmo.ToString();
		currAmmo = maxAmmo;
		bouncyAmmoBar = GameObject.Find("BouncyAmmoBar").GetComponent<Slider>() as Slider;
		bouncyAmmoBar.gameObject.SetActive(false);
		infAmmo = GameObject.Find("Toggle_InfAmmo").GetComponent<Toggle>() as Toggle;
		bouncyBullets = GameObject.Find("Toggle_BouncyBullets").GetComponent<Toggle>() as Toggle;
	}

	void Update () {
		string ammoString = currAmmo.ToString() + " / " + maxAmmo.ToString();
		ammoText.text = ammoString;

		if(firing){
			GetComponent<AudioSource>().volume = 0.5f;
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

	IEnumerator seqBlink(Sprite sp){
		while(true){
			if(Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject()){
				if (bulletSeqStart.GetComponent<SpriteRenderer>().sprite == null){
					bulletSeqStart.GetComponent<SpriteRenderer>().sprite = sp;
				}else if(bulletSeqStart.GetComponent<SpriteRenderer>().sprite == sp){
					bulletSeqStart.GetComponent<SpriteRenderer>().sprite = null;
				}
			}else{
				bulletSeqStart.GetComponent<SpriteRenderer>().sprite = null;
			}
			yield return new WaitForSeconds(0.05f);
		}
	}

	public IEnumerator fire(Sprite sp){
		while(true){
			if(currAmmo > 0){
				if(Input.GetMouseButton(0)/* && !EventSystem.current.IsPointerOverGameObject()*/){
					firing = true;

					GameObject newBullet = 
						GameObject.Instantiate(
							Resources.Load("Prefabs/Bullet"), 
							bulletRepStart.transform.position, 
							this.transform.rotation) as GameObject;
					newBullet.GetComponent<Bullet>().setDirection(pc.getReticleTarget());
					newBullet.GetComponent<Bullet>().setTargetTag("Enemy");
					newBullet.GetComponent<Bullet>().setKillMode(PlayerController.killMode.shot);
					newBullet.GetComponent<Bullet>().setSprite(sp);

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
				}else{
					firing = false;
				}
			}
			yield return new WaitForSeconds(0.1f);
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
