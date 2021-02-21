using UnityEngine;

public class SpawnPoint : MonoBehaviour
{
    public Transform Transform { get; private set; }

    void Awake()
    {
        Transform = transform;
    }
}
