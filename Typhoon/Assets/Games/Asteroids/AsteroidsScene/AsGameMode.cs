using System;
using UnityEngine;

namespace Asteroids
{
    public class AsGameMode : GameMode
    {
        [SerializeField] Vector2 minPosition;
        public Vector2 MinPosition => minPosition;
        
        [SerializeField] Vector2 maxPosition;
        public Vector2 MaxPosition => maxPosition;
        
        [SerializeField] GameObject[] rockTypes;
        
        public int Score { get; set; }
        public int Lives { get; set; } = 3;

        void Start()
        {
            NewRound();
        }

        public void AddScore(int scoreToAdd)
        {
            Score += scoreToAdd;

            if (Score > 1000)
                GoalReached = true;
        }

        public int RemoveLife()
        {
            Lives--;
            
            if (Lives < 0)
            {
                EndGame(Score);
            }

            return Lives;
        }

        public void NewRound()
        {
            for (int i = 0; i < 4; i++)
            {
                Vector2 position = new Vector2(UnityEngine.Random.Range(-8, 8), 
                    UnityEngine.Random.Range(-8, 8));

                SpawnRock(position, AsSize.Big);
            }
        }

        public GameObject SpawnRock(Vector2 position, AsSize size)
        {
            if (rockTypes == null || rockTypes.Length == 0)
                return null;
            
            int index = UnityEngine.Random.Range(0, rockTypes.Length);

            Vector3 position3D = new Vector3(position.x, position.y, 0);
            Quaternion rotation = new Quaternion(0, 0, 0, 0); // Rand later.
            
            GameObject rock = Instantiate(rockTypes[index], position3D, rotation, Transform);
            rock.GetComponent<AsRock>().Initialise(size);

            return rock;
        }
    }
}