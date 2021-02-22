using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameMode : MonoBehaviour
{
    [SerializeField] GameObject _defaultPawn;
    public GameObject DefaultPawn => _defaultPawn;
    
    [SerializeField] string _defaultHUD;
    public string DefaultHUD => _defaultHUD;

    bool _paused = false;
    public bool Paused
    {
        get => _paused;

        set
        {
            _paused = value;
            OnPaused?.Invoke(Paused);
        }
    }
    
    public bool GoalReached { get; set; }
    
    public event Action<bool, double> OnGameEnded;

    public event Action OnGameExited;

    /// <summary>
    /// True = Game paused.
    /// False = Game resumed.
    /// </summary>
    public event Action<bool> OnPaused;

    PauseMenu pauseMenu;
    
    Scene pauseScene;
    Scene hudScene;
    
    List<SpawnPoint> spawnPoints = new List<SpawnPoint>(1);
    int previousSpawnIndex = -1;

    void Awake()
    {
        World.Instance.GameMode = this;
        World.Instance.SceneManager.OnSceneLoaded += HandleOnSceneLoaded;

        OnPaused += HandleOnPaused;
        FindSpawnPoints();
        CreatePauseMenu();
        CreateHUD();
    }

    virtual protected void HandleOnPaused(bool isPaused)
    {
        
    }

    void HandleOnSceneLoaded(Scene scene)
    {
        if (scene.name == "MachinePauseScene")
        {
            pauseScene = scene;
            
            pauseMenu = FindObjectOfType<PauseMenu>();
            
            if (pauseMenu)
                pauseMenu.Close();
        }
        else if (scene.name == DefaultHUD)
        {
            hudScene = scene;
        }
    }

    /// <summary>
    /// Call to complete the game.
    /// </summary>
    public void EndGame(double score)
    {
        OnGameEnded?.Invoke(GoalReached, score);
    }

    /// <summary>
    /// Call to exit the game.
    /// </summary>
    public void ExitGame()
    {
        OnGameExited?.Invoke();
    }

    /// <summary>
    /// Called when this GameMode has been replaced by another in World.Instance.GameMode.
    /// </summary>
    public void GameModeReplaced()
    {
        World.Instance.SceneManager.UnloadScene(gameObject.scene);
        World.Instance.SceneManager.UnloadScene(pauseScene);
        World.Instance.SceneManager.UnloadScene(hudScene);
    }

    void FindSpawnPoints()
    {
        spawnPoints.AddRange(FindObjectsOfType<SpawnPoint>());
    }

    SpawnPoint ChooseSpawnPoint()
    {
        if (spawnPoints.Count == 0)
            return null;
        
        previousSpawnIndex++;

        if (previousSpawnIndex >= spawnPoints.Count)
            previousSpawnIndex = 0;

        return spawnPoints[previousSpawnIndex];
    }

    void SpawnPlayer()
    {
        if (!DefaultPawn)
            return;
        
        var position = Vector3.zero;
        var rotation = new Quaternion(0, 0, 0, 0);
        
        var spawnPoint = ChooseSpawnPoint();
        if (spawnPoint)
        {
            position = spawnPoint.Transform.position;
            rotation = spawnPoint.Transform.rotation;
        }
        
        Instantiate(DefaultPawn, position, rotation);
    }

    void CreatePauseMenu()
    {
        World.Instance.SceneManager.LoadScene("MachinePauseScene");
    }
    
    void CreateHUD()
    {
        if (string.IsNullOrWhiteSpace(DefaultHUD))
            return;
        
        World.Instance.SceneManager.LoadScene(DefaultHUD);
    }
}
