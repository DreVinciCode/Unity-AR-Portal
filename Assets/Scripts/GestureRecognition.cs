using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

using Microsoft;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;


[Serializable]
public struct Gesture
{
    public string name;
    public List<float> fingerCurls;
}

public class GestureRecognition : MonoBehaviour
{
    public GameObject leftHandIndexMarker;
    public GameObject rightHandIndexMarker;

    public List<Gesture> gestures;
    private Gesture previousGesture;
    public TMP_Text curlValues;

    MixedRealityPose indexPose;

    GameObject leftIndexObject;
    GameObject rightIndextObject;

    public event EventHandler OnSnapDetected;

    private float curlAverage;
    private float threshold = 0.1f;

    private float distanceMiddleThumb;
    private float gesture_timer;
    private float fingerSnap_timer; 
    private float gesture_timer_threshold = 0.3f;
    private float fingerSnap_deadline = 1.0f;

    private void Awake()
    {
        SoundManager.Initialize();
    }

    private void Start()
    {
        leftIndexObject = Instantiate(leftHandIndexMarker, this.transform);
        rightIndextObject = Instantiate(rightHandIndexMarker, this.transform);

    }

    // Update is called once per frame
    void Update()
    {
        Gesture currentGesture = RecognizedGesture();
        bool hasRecognized = !currentGesture.Equals(new Gesture());

        curlValues.text = "\n" + HandPoseUtils.ThumbFingerCurl(Handedness.Both) + "\n"
        + HandPoseUtils.IndexFingerCurl(Handedness.Both) + "\n"
        + HandPoseUtils.MiddleFingerCurl(Handedness.Both) + "\n"
        + HandPoseUtils.RingFingerCurl(Handedness.Both) + "\n"
        + HandPoseUtils.PinkyFingerCurl(Handedness.Both) + "\n";


        leftIndexObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out indexPose))
        {
            leftIndexObject.GetComponent<Renderer>().enabled = true;
            leftIndexObject.transform.position = indexPose.Position;
        }

        rightIndextObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out indexPose))
        {
            rightIndextObject.GetComponent<Renderer>().enabled = true;
            rightIndextObject.transform.position = indexPose.Position;
        }
   
    }

    Gesture RecognizedGesture()
    {
        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Any);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Any);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Any);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Any);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Any);
        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

        curlAverage = (thumbCurl + indexCurl + middleCurl + ringCurl + pinkyCurl) / 5;

        bool inRange = false;
        for (int i = 0; i < gestures.Count; i++)
        {
            for (int j = 0; j < currentCurlValues.Length; j++)
            {
                if (currentCurlValues[j] <= gestures[i].fingerCurls[j] + threshold && currentCurlValues[j] >= gestures[i].fingerCurls[j] - threshold)
                {
                    inRange = true;
                }
                else
                {
                    inRange = false;
                    break;
                }
            }

            if (inRange)
            {
                return gestures[i];
            }
        }

        return gestures[0];
    }
}
