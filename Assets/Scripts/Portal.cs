using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoxCollider))]
public class Portal : MonoBehaviour
{
    [field: SerializeField]
    public GameObject ThisPortal { get; private set; }

    [field: SerializeField]
    public GameObject OtherPortal { get; private set; }


    private List<PortalableObject> portalObjects = new List<PortalableObject>();
    public bool IsPlaced { get; private set; } = false;

    public Collider wallCollider;
    private new BoxCollider collider;


    private void Awake()
    {
        collider = GetComponent<BoxCollider>();
    }
    private void Start()
    {
        ThisPortal = gameObject.transform.parent.gameObject;      
    }

    void Update()
    {
        if (ThisPortal.tag == "PortalOrange")
        {
            OtherPortal = GameObject.FindGameObjectWithTag("PortalBlue");
        }
        else
        {
            OtherPortal = GameObject.FindGameObjectWithTag("PortalOrange");
        }

        for (int i = 0; i < portalObjects.Count; i++)
        {
            Vector3 objPos = transform.InverseTransformPoint(portalObjects[i].transform.position);

            if (objPos.z > 0.0f)
            {
                portalObjects[i].Warp();
            }
        }   
    }

    private void OnTriggerEnter(Collider other)
    {

        var obj = other.GetComponent<PortalableObject>();
        if (obj != null)
        {
            portalObjects.Add(obj);
            obj.SetIsInPortal(ThisPortal, OtherPortal, wallCollider);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        var obj = other.GetComponent<PortalableObject>();

        if (portalObjects.Contains(obj))
        {
            portalObjects.Remove(obj);
            obj.ExitPortal(wallCollider);
        }
    }
}
