using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GAMEManager : MonoBehaviour {
	public float spawnY = 4.8f;
	public float spawnX = 9f;
	public int ITEM_MAX = 8;
	public int ENEMY_MAX = 8;
	public GameObject prefItem;
	public GameObject prefEnemy;

	// Use this for initialization
	void Start () {
		for (int i = 0; i < ITEM_MAX; i++) {
			// 出現頻度
			Vector3 pos = new Vector3 (
				              Random.Range (-spawnX, spawnX),
				              Random.Range (-spawnY, spawnY),
				              0f);
			// 出現(prefItemを、posの場所に、回転させずに登場)
			Instantiate(prefItem, pos, Quaternion.identity);
		}
		for (int i = 0; i < ENEMY_MAX; i++) {
			//出現座標
			Vector3 pos = new Vector3 (
				Random.Range (-spawnX, spawnX),
				Random.Range (-spawnY, spawnY),
				0f);
			// 出現(prefEnemyを、posの場所に、回転させずに登場)
			Instantiate(prefEnemy, pos, Quaternion.identity);
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			SceneManager.LoadScene ("GAMEOVER");
		}
		if (Input.GetMouseButtonDown (1)) {
			SceneManager.LoadScene ("Clear");
		}
	}
}
