using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;

public class SpawnProjectile : MonoBehaviour
{
    public Vector3 offset;
    public List<GameObject> vfx = new List<GameObject>();

    private MixedRealityPose indexPose;
    private GameObject RightEffectToSpawn, LeftEffectToSpawn;

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

    private void RightSpawnVFX()
    {
        GameObject vfx;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out indexPose))
        {
            vfx = Instantiate(RightEffectToSpawn, indexPose.Position + offset, Quaternion.LookRotation(Camera.main.transform.forward));

            SoundManager.PlaySound(SoundManager.Sound.OrangePortal);
            Object.Destroy(vfx, 2f);
        }
    }

    private void LeftSpawnVFX()
    {
        GameObject vfx;

        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out indexPose))
        {
            vfx = Instantiate(LeftEffectToSpawn, indexPose.Position + offset, Quaternion.LookRotation(Camera.main.transform.forward));

            SoundManager.PlaySound(SoundManager.Sound.BluePortal);
            Object.Destroy(vfx, 2f);
        }
    }
}
