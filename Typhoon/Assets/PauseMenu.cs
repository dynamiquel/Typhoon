using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseMenu : MonoBehaviour
{
    [SerializeField] GameObject pauseMenu;
    
    public void Open()
    {
        World.Instance.GameMode.Paused = true;
        
        pauseMenu.SetActive(true);
    }

    public void Close()
    {
        pauseMenu.SetActive(false);
        
        World.Instance.GameMode.Paused = false;
    }

    public void Exit()
    {
        World.Instance.GameMode.ExitGame();
    }

    void Update()
    {
        if (Input.GetButtonDown("Pause"))
        {
            if (pauseMenu.activeSelf)
                Close();
            else
                Open();
        }
    }
}
