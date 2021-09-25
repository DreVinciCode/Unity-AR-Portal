using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;

public class CubeBehavior : MonoBehaviour
{
    public GameObject CompanionCube;

    MixedRealityPose pose;

    public Vector3 offset;

    private GameObject[] cubes;
    // Start is called before the first frame update
    void Start()
    {
        GestureRecognition gestureRecognition = FindObjectOfType<GestureRecognition>();
        gestureRecognition.OnSnapDetected += GestureRecognition_OnSnapDetected;
    }

    private void GestureRecognition_OnSnapDetected(object sender, System.EventArgs e)
    {
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Palm, Handedness.Right, out pose))
        {
            var cube = Instantiate(CompanionCube, pose.Position + offset, pose.Rotation);
        }
    }

    // Update is called once per frame
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
