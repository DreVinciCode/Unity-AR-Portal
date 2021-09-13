using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileMovement : MonoBehaviour
{
    public float speed;
    public GameObject muzzleProjectile;
    public GameObject impactProjectile;

    private void Start()
    {
        if(muzzleProjectile != null)
        {
            var muzzleVFX = Instantiate(muzzleProjectile, transform.position, Quaternion.identity);
            muzzleVFX.transform.forward = gameObject.transform.forward;
            Object.Destroy(muzzleVFX, 1f);
        }
    }

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

        ContactPoint contact = collision.contacts[0];
        Quaternion rot = Quaternion.FromToRotation(Vector3.one, contact.normal);
        Vector3 pos = contact.point;

        if(impactProjectile != null)
        {
            var impactVFX = Instantiate(impactProjectile, pos, rot);
            Object.Destroy(impactVFX, 0.1f);
        }

        Destroy(gameObject);
    }

}
