using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Pong
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PongBall : MonoBehaviour
    {
        Rigidbody2D rigidbody2D;

        void Awake()
        {
            rigidbody2D = GetComponent<Rigidbody2D>();
        }

        public void Respawn()
        {
            Spawn();
        }

        void Start()
        {
            Spawn();
        }

        void Spawn()
        {
            transform.SetPositionAndRotation(Vector3.zero, new Quaternion(0, 0, 0, 0));
            rigidbody2D.AddForce(new Vector2(200, -20));
        }
    }
}