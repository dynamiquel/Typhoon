using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Debugging purposes only.
public class InitialSelection : MonoBehaviour
{
    public void LoadMainScene()
    {
        World.Instance.SceneManager.LoadScene("MainScene", LoadSceneMode.Single, true);
    }

    public void LoadTestScene()
    {
        World.Instance.SceneManager.LoadScene("TestScene", LoadSceneMode.Single, true);
    }
}
