using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Asteroids
{
    public class AsRock : MonoBehaviour
    {
        [SerializeField] Vector2 minVelocity = new Vector2(20f, 20f);
        [SerializeField] Vector2 maxVelocity = new Vector2(70f, 70f);

        Transform _transform;
        
        AsSize size = AsSize.Small;

        bool beingDestroyed = false;

        void Awake()
        {
            _transform = transform;
        }

        // Update is called once per frame
        void Update()
        {
            CorrectPosition();
        }

        public void Initialise(AsSize size)
        {
            this.size = size;
            gameObject.SetActive(true);

            switch (size)
            {
                case AsSize.Big:
                    _transform.localScale *= 2;
                    break;
                case AsSize.Small:
                    _transform.localScale /= 2;
                    break;
            }
            
            SetVelocity();
        }

        public void Hit(bool isPlayer)
        {
            if (beingDestroyed)
                return;

            beingDestroyed = true;
            
            var gameMode = World.Instance.GameMode as AsGameMode;
            
            if (size == AsSize.Big)
            {
                if (isPlayer)
                    gameMode.AddScore(20);
                
                // Make normal versions and destroy
                for (int i = 0; i < 2; i++)
                {
                    gameMode.SpawnRock(_transform.position, AsSize.Normal);
                }
                
                Destroy(gameObject);
            }
            else if (size == AsSize.Normal)
            {
                if (isPlayer)
                    gameMode.AddScore(50);
                
                // Make small versions and destroy
                for (int i = 0; i < 2; i++)
                {
                    gameMode.SpawnRock(_transform.position, AsSize.Small);
                }
                
                Destroy(gameObject);
            }
            else if (size == AsSize.Small)
            {
                if (isPlayer)
                    gameMode.AddScore(100);
                
                // Destroy.
                Destroy(gameObject);
            }
        }

        void SetVelocity()
        {
            Vector2 velocity = new Vector2
            {
                x = UnityEngine.Random.Range(-maxVelocity.x, maxVelocity.x), 
                y = UnityEngine.Random.Range(-maxVelocity.y, maxVelocity.y)
            };

            if (Mathf.Abs(velocity.x) < minVelocity.x)
                velocity.x = minVelocity.x;
            if (Mathf.Abs(velocity.y) < minVelocity.y)
                velocity.y = minVelocity.y;

            GetComponent<Rigidbody2D>().AddForce(velocity);
        }

        void CorrectPosition()
        {
            var gameMode = World.Instance.GameMode as AsGameMode;
            
            if (_transform.position.x < gameMode.MinPosition.x)
                _transform.position = new Vector3(gameMode.MaxPosition.x, _transform.position.y, 0);
            else if (_transform.position.x > gameMode.MaxPosition.x)
                _transform.position = new Vector3(gameMode.MinPosition.x, _transform.position.y, 0);
            
            if (_transform.position.y < gameMode.MinPosition.y)
                _transform.position = new Vector3(_transform.position.x, gameMode.MaxPosition.y, 0); 
            else if (_transform.position.y > gameMode.MaxPosition.y)
                _transform.position = new Vector3(_transform.position.x, gameMode.MinPosition.y, 0); 
        }
    }

    public enum AsSize
    {
        Small = 0,
        Normal = 1,
        Big = 2
    }
}