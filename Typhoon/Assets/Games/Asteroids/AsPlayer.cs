using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Asteroids
{
    public class AsPlayer : Character
    {
        [SerializeField] float maxThrust = 20f;
        [SerializeField] float minThrust = 5f;
        [SerializeField] float turnSpeed;
        [SerializeField] float respawnDelay = .5f;
        [SerializeField] float immuneTime = 1f;
        [SerializeField] GameObject bulletPrefab;

        Rigidbody2D rigidbody2D;

        protected override void Awake()
        {
            base.Awake();

            rigidbody2D = GetComponent<Rigidbody2D>();
        }

        protected override void PlayerMovement()
        {
            if (Input.GetButtonDown("Fire1"))
                FireBullet();
            
            if (Input.GetAxisRaw("Vertical") > 0)
                AddThrust();

            float turn = Input.GetAxisRaw("Horizontal");

            if (turn != 0f)
                Rotate(-turn);
            
            CorrectPosition();
        }

        void CorrectPosition()
        {
            var gameMode = World.Instance.GameMode as AsGameMode;

            if (Transform.position.x < gameMode.MinPosition.x)
                Transform.position = new Vector3(gameMode.MaxPosition.x, Transform.position.y, 0);
            else if (Transform.position.x > gameMode.MaxPosition.x)
                Transform.position = new Vector3(gameMode.MinPosition.x, Transform.position.y, 0);

            if (Transform.position.y < gameMode.MinPosition.y)
                Transform.position = new Vector3(Transform.position.x, gameMode.MaxPosition.y, 0);
            else if (Transform.position.y > gameMode.MaxPosition.y)
                Transform.position = new Vector3(Transform.position.x, gameMode.MinPosition.y, 0);
        }

        void FireBullet()
        {
            Vector3 position = Transform.position + Transform.up * 2f;
            Instantiate(bulletPrefab, position, Transform.rotation, World.Instance.GameMode.Transform);
        }

        void AddThrust()
        {
            Debug.LogError(rigidbody2D.velocity.magnitude);
            //if (rigidbody2D.velocity.y < maxThrust)
            //rigidbody2D.AddForce(Transform.up * new Vector2(0f, 10f));
            float thrust = minThrust;

            if (rigidbody2D.velocity.magnitude > 4f)
                thrust = maxThrust;
            
            Debug.LogError(thrust);
            rigidbody2D.velocity = Transform.up * thrust;
        }

        void Rotate(float analogueInput)
        {
            Transform.Rotate(Transform.forward, analogueInput * turnSpeed * Time.deltaTime);
        }

        void OnCollisionEnter2D(Collision2D other)
        {
            if (other.gameObject.TryGetComponent<AsRock>(out var asRockComp))
                asRockComp.Hit(false);
            
            KillPlayer();
        }

        void KillPlayer()
        {
            // Hide player. Play death animation and sound.
            // Move player to centre with death frames (flashing).
            // Remove life.
            
            rigidbody2D.velocity = Vector2.zero;
            rigidbody2D.angularVelocity = 0;
            Transform.rotation = new Quaternion(0, 0, 0, 0);
            
            // Basically moves the player away so no more collisions can happen.
            transform.position = new Vector3(1000, 0, 0);

            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<BoxCollider2D>().enabled = false;
            
            var gameMode = World.Instance.GameMode as AsGameMode;

            var livesRemaining = gameMode.RemoveLife();
            
            if (livesRemaining < 0)
            {
                Destroy(gameObject);
                return;
            }
            
            World.Instance.TimerManager.SetTimer(
                Respawn, float.Epsilon, respawnDelay);
        }

        void Respawn()
        {
            Transform.position = new Vector3(0, 0, 0);
            
            GetComponent<SpriteRenderer>().enabled = true;
            
            World.Instance.TimerManager.SetTimer(
                () =>
                {
                    GetComponent<BoxCollider2D>().enabled = true;
                },
                float.Epsilon, immuneTime);
        }
    }
}