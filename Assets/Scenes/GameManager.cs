using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    public static GameManager instance = null;

    public AudioSource bgmsource = null;
    public AudioSource sesource = null;

    public Sprite groundsprite = null;//地面の画像スプライト
    public Sprite skysprite = null;//空の画像スプライト

    [System.Serializable]
    public struct objandpos
    {
        public GameObject obj;
        public Vector3 pos;
    }

    [System.SerializableAttribute]
    public class enemieslist
    {
        public List<objandpos> enemies = new List<objandpos>();
        public enemieslist(List<objandpos> list)
        {
            enemies = list;
        }
    }

    public List<enemieslist> enemieslists = new List<enemieslist>();

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    
    //WebGLに投稿する時はコメントアウト
    void Update()
    {
        //WebGLではゲームを閉じる機能を無効。
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            #if !UNITY_WEBGL
                Application.Quit();//ゲームプレイ終了
            #endif
        }
    }
}
