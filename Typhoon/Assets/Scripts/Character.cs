using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    // -1 = AI.
    [SerializeField] int _playerNumber;
    public int PlayerNumber => _playerNumber;
    
    [SerializeField] protected Vector2 minPosition;
    [SerializeField] protected Vector2 maxPosition;
    
    [SerializeField] protected float verticalVelocity;
    [SerializeField] protected float horizontalVelocity;

    [SerializeField] protected string verticalButton = "Vertical";
    [SerializeField] protected string horizontalButton = "Horizontal";
    
    public Transform Transform { get; private set; }

    protected virtual void Awake()
    {
        Transform = transform;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerNumber < 0)
            AIMovement();
        else
            PlayerMovement();
    }

    protected void AIMovement()
    {
        
    }

    protected virtual void PlayerMovement()
    {
        if (!string.IsNullOrWhiteSpace(verticalButton))
        {
            if (Input.GetAxisRaw(verticalButton) > 0)
                MoveUp();
            if (Input.GetAxisRaw(verticalButton) < 0)
                MoveDown();
        }

        if (!string.IsNullOrWhiteSpace(horizontalButton))
        {
            if (Input.GetAxisRaw(horizontalButton) > 0)
                MoveRight();
            if (Input.GetAxisRaw(horizontalButton) < 0)
                MoveLeft();
        }
    }   

    protected virtual void MoveUp()
    {
        var position = Transform.position;
        position.y += verticalVelocity * Time.deltaTime;
        
        if (position.y > maxPosition.y)
            position.y = maxPosition.y;
        
        Transform.SetPositionAndRotation(position, Transform.rotation);
    }

    protected virtual void MoveDown()
    {
        var position = Transform.position;
        position.y -= verticalVelocity * Time.deltaTime;
        
        if (position.y < minPosition.y)
            position.y = minPosition.y;
        
        Transform.SetPositionAndRotation(position, Transform.rotation);
    }
    
    protected virtual void MoveRight()
    {
        var position = Transform.position;
        position.x += verticalVelocity * Time.deltaTime;
        
        if (position.x > maxPosition.x)
            position.x = maxPosition.x;
        
        Transform.SetPositionAndRotation(position, Transform.rotation);
    }

    protected virtual void MoveLeft()
    {
        var position = Transform.position;
        position.x -= verticalVelocity * Time.deltaTime;
        
        if (position.x < minPosition.x)
            position.x = minPosition.x;
        
        Transform.SetPositionAndRotation(position, Transform.rotation);
    }
}
