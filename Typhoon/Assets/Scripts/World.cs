using UnityEngine;
using UnityTemplateProjects;

[RequireComponent(typeof(SceneManager))]
[RequireComponent(typeof(TimerManager))]
public class World : Singleton<World>
{
    public EventManager EventManager { get; private set; }
    public SceneManager SceneManager { get; private set; }
    public TimerManager TimerManager { get; private set; }

    GameMode _gameMode;
    public GameMode GameMode
    {
        get => _gameMode;

        set
        {
            if (GameMode)
                GameMode.GameModeReplaced();
            
            _gameMode = value;

            if (GameMode)
            {
                GameMode.OnGameExited += HandleOnGameExited;
                GameMode.OnGameEnded += HandleOnGameEnded;
            }
        }
    }

    public int PlayerCount { get; set; } = 1;
    
    void HandleOnGameEnded(bool goalReached, double score)
    {
        
    }

    void HandleOnGameExited()
    {
        GameMode = null;
    }

    protected override void OnAwake()
    {
        EventManager = new EventManager();
        SceneManager = GetComponent<SceneManager>();
        TimerManager = GetComponent<TimerManager>();
    }

    void OnDestroy()
    {
        EventManager.Destroy();
        EventManager = null;
    }
}
