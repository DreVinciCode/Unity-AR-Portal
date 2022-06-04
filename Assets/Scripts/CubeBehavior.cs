using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;

public class CubeBehavior : MonoBehaviour
{
    public GameObject CompanionCube;
    public Vector3 offset;
    MixedRealityPose pose;

    private bool timecheck = false;

    private float deltaTime = 0;

    void Start()
    {
        GestureRecognition gestureRecognition = FindObjectOfType<GestureRecognition>();
        gestureRecognition.OnSnapDetected += GestureRecognition_OnSnapDetected;
    }

    private void GestureRecognition_OnSnapDetected(object sender, System.EventArgs e)
    {
        deltaTime = deltaTime + Time.deltaTime;

        if(deltaTime > 1)
        {
            timecheck = true;
            deltaTime = 0;
        }

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Both, out pose) && timecheck)
        {
            var cube = Instantiate(CompanionCube, pose.Position + offset, pose.Rotation);
            timecheck = false;
        }


    }

    void Update()
    {
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose) && Input.GetKeyDown(KeyCode.K))
        {
            GameObject cube = Instantiate(CompanionCube, pose.Position + offset, pose.Rotation) as GameObject;
        }

        foreach (GameObject cube in GameObject.FindGameObjectsWithTag("CompanionCube"))
        {
            if (cube.transform.position.y < -10)
            {
                Destroy(cube);
            }
        }
    }
}
