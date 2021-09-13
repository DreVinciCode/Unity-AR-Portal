using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour
{
    public float speed;

    // Update is called once per frame
    void Update()
    {   
        if(speed != 0)
        {
            transform.position += transform.forward * (speed * Time.deltaTime);
        }
        else
        {
            Debug.Log("Zero Speed");
        }
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        speed = 0;
        Destroy(gameObject);
    }

}
