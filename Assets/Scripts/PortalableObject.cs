using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class PortalableObject : MonoBehaviour
{
    private GameObject clonedObject;
    private int inPortalCount = 0;
    private new Rigidbody rigidbody;
    private new Collider collider;
    private GameObject inPortal;
    private GameObject outPortal;

    private static readonly Quaternion halfTurn = Quaternion.Euler(0.0f, 180.0f, 0.0f);

    protected virtual void Awake()
    {
        clonedObject = new GameObject();
        clonedObject.name = gameObject.name + " cloned";
        clonedObject.SetActive(false);
        var meshFilter = clonedObject.AddComponent<MeshFilter>();
        var meshRenderer = clonedObject.AddComponent<MeshRenderer>();

        meshFilter.mesh = GetComponent<MeshFilter>().mesh;
        meshRenderer.materials = GetComponent<MeshRenderer>().materials;
        clonedObject.transform.localScale = transform.localScale;

        rigidbody = GetComponent<Rigidbody>();
        collider = GetComponent<Collider>();
    }


    private void LateUpdate()
    {
        if(GameObject.FindGameObjectWithTag("PortalOrange") == null || GameObject.FindGameObjectWithTag("PortalBlue") == null)
        {
            return;
        }

        if(clonedObject.activeSelf)
        {
            var inTransform = inPortal.transform;
            var outTransform = outPortal.transform;

            // Update position of clone.
            Vector3 relativePos = inTransform.InverseTransformPoint(transform.position);
            relativePos = halfTurn * relativePos;
            clonedObject.transform.position = outTransform.TransformPoint(relativePos);

            // Update rotation of clone.
            Quaternion relativeRot = Quaternion.Inverse(inTransform.rotation) * transform.rotation;
            relativeRot = halfTurn * relativeRot;
            clonedObject.transform.rotation = outTransform.rotation * relativeRot;
        }
        else
        {
            clonedObject.transform.position = new Vector3(-1000.0f, 1000.0f, -1000.0f);
        }
    }
    
    public void SetIsInPortal(GameObject inPortal, GameObject outPortal, Collider wallCollider)
    {
        this.inPortal = inPortal;
        this.outPortal = outPortal;

        Physics.IgnoreCollision(collider, wallCollider);

        clonedObject.SetActive(true);

        ++inPortalCount;
    }

    public void ExitPortal(Collider wallCollider)
    {
        Physics.IgnoreCollision(collider, wallCollider, false);
        --inPortalCount;

        if (inPortalCount == 0)
        {
            clonedObject.SetActive(false);
        }
    }

    public virtual void Warp()
    {
        var inTransform = inPortal.transform;
        var outTransform = outPortal.transform;

        // Update position of object.
        Vector3 relativePos = inTransform.InverseTransformPoint(transform.position);
        relativePos = halfTurn * relativePos;
        transform.position = outTransform.TransformPoint(relativePos);

        // Update rotation of object.
        Quaternion relativeRot = Quaternion.Inverse(inTransform.rotation) * transform.rotation;
        relativeRot = halfTurn * relativeRot;
        transform.rotation = outTransform.rotation * relativeRot;

        // Update velocity of rigidbody.
        Vector3 relativeVel = inTransform.InverseTransformDirection(rigidbody.velocity);
        relativeVel = halfTurn * relativeVel;
        rigidbody.velocity = outTransform.TransformDirection(relativeVel);

        // Swap portal references.
        var tmp = inPortal;
        inPortal = outPortal;
        outPortal = tmp;
    }
}
