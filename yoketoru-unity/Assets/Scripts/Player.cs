using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {
	private Rigidbody rb = null;


	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}
	
	// 物理挙動の更新処理
	void FixedUpdate () {
		Vector3 target = Input.mousePosition; //targetのX,Y座標にマウスの2D座標を代入
		//3D化するために、奥行きを設定
		target.z = transform.position.z - Camera.main.transform.position.z;
		//3D化
		target = Camera.main.ScreenToWorldPoint(target);
		//座標を無理やり代入
		//transform.position = target;

		// 速度を設定
		Vector3 vel = target-transform.position; // 現在位置から目的地までのベクトル
		rb.velocity = vel/Time.fixedDeltaTime;


		Debug.Log (Input.mousePosition);
	}
}
