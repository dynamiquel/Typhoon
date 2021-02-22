using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Pong
{
    public class PongOutOfBounds : MonoBehaviour
    {
        [SerializeField] PongPlayer playerToScore;
        [SerializeField] PongBall ball;

        void OnCollisionEnter2D(Collision2D other)
        {
            if (other.gameObject == ball.gameObject)
            {
                playerToScore.Score++;
                ball.Respawn();
            }
        }
    }
}