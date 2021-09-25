using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyGameObject : MonoBehaviour
{
    public void destroyCall(GameObject obj)
    {
        Destroy(obj, 1f);
    }
}
