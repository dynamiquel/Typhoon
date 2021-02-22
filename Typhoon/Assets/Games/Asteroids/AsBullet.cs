using System;
using System.Collections;
using System.Collections.Generic;
using Asteroids;
using UnityEngine;

public class AsBullet : MonoBehaviour
{
    [SerializeField] float velocity;
    [SerializeField] float lifeTime;
    [SerializeField] bool playerBullet;

    Transform _transform;
    Rigidbody2D rb;

    void Awake()
    {
        _transform = transform;
        //rb = GetComponent<Rigidbody2D>();
    }

    // Start is called before the first frame update
    void Start()
    {
        World.Instance.TimerManager.SetTimer(
            () => Destroy(gameObject),
            Single.Epsilon,
            lifeTime);
    }

    // Update is called once per frame
    void Update()
    {
        _transform.position += _transform.up * (velocity * Time.deltaTime);
    }

    void OnCollisionEnter2D(Collision2D other)
    {
        GameObject collidedObject = other.gameObject;
        if (collidedObject.TryGetComponent<AsRock>(out var rock))
        {
            rock.Hit(playerBullet);
        }
        else if (collidedObject.TryGetComponent<AsEnemy>(out var enemy))
        {
            
        }
        
        Destroy(gameObject);
    }
}
