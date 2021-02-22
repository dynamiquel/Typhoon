using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSelection : MonoBehaviour
{
    public void LoadLevel(string levelName)
    {
        World.Instance.SceneManager.LoadScene(levelName);
    }
}
