using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;

public class SpawnProjectile : MonoBehaviour
{
    //private GameObject firepoint;
    public List<GameObject> vfx = new List<GameObject>();

    MixedRealityPose indexPose, knuklePose;


    private GameObject RightEffectToSpawn, LeftEffectToSpawn;

    // Start is called before the first frame update
    void Start()
    {
        GestureRecognition gestureRecognition = FindObjectOfType<GestureRecognition>();
        gestureRecognition.OnRightFireDetected += GestureRecognition_OnRightFireDetected;
        gestureRecognition.OnLeftFireDetected += GestureRecognition_OnLeftFireDetected;
        RightEffectToSpawn = vfx[0];
        LeftEffectToSpawn = vfx[1];

    }

    private void GestureRecognition_OnLeftFireDetected(object sender, System.EventArgs e)
    {
        LeftSpawnVFX();    
    }

    private void GestureRecognition_OnRightFireDetected(object sender, System.EventArgs e)
    {
        RightSpawnVFX();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void RightSpawnVFX()
    {
        GameObject vfx;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out indexPose) && HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, Handedness.Right, out knuklePose))
        {
            vfx = Instantiate(RightEffectToSpawn, indexPose.Position, knuklePose.Rotation);
            Object.Destroy(vfx, 2f);
        }
    }

    void LeftSpawnVFX()
    {
        GameObject vfx;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out indexPose) && HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, Handedness.Left, out knuklePose))
        {
            vfx = Instantiate(LeftEffectToSpawn, indexPose.Position, knuklePose.Rotation);
            Object.Destroy(vfx, 2f);

        }
    }
}
