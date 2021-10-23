using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ProjectileMovement : MonoBehaviour
{
    public float speed;
    public GameObject muzzleProjectile;
    public GameObject impactProjectile;
    public GameObject portal;    
    private Portal portalScript;
    public LayerMask portalTargets;

    private Vector3 hitLocation;
    private RaycastHit hit;
    private bool portal_fire;


    private void Start()
    {
        portal_fire = true;
        portalScript = portal.GetComponentInChildren<Portal>();

        if (muzzleProjectile != null)
        {
            var muzzleVFX = Instantiate(muzzleProjectile, transform.position, Quaternion.identity);
            muzzleVFX.transform.forward = gameObject.transform.forward;
            Object.Destroy(muzzleVFX, 1f);

            hit = new RaycastHit();
            if (Physics.Raycast(transform.position, transform.forward, out hit, 1000f, portalTargets))
            {
                hitLocation = hit.point;
                portalScript.wallCollider = hit.collider;
                //Debug.Log(hit.collider.gameObject.name);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {   
        if(speed != 0)
        {
            transform.position += transform.forward * (speed * Time.deltaTime);
        }   

        if(Vector3.Distance(transform.position, hitLocation) < 1 && portal_fire)
        {
            portal_fire = false;
            Collision();
        }
    }

    //Create function to replace Collison
    private void Collision()
    {
        Vector3 pos = hit.point + hit.normal * 0.001f;
        Quaternion rot = Quaternion.FromToRotation(Vector3.one, hit.normal);

        var impactVFX = Instantiate(impactProjectile, pos, rot);

        //Determine if portal is present or not by the game tag. If present, destroy portal
        if (GameObject.FindGameObjectWithTag(portal.tag))
        {
            Destroy(GameObject.FindGameObjectWithTag(portal.tag));
        }

        GameObject impactPortal = Instantiate(portal, pos, rot) as GameObject;
        impactPortal.transform.LookAt(hit.point + hit.normal);

        Object.Destroy(impactVFX, 0.1f);
        Destroy(gameObject);
        portal_fire = true;
    }
}
