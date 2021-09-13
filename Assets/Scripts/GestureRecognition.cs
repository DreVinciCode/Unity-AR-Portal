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

    public event EventHandler OnLeftFireDetected;
    public event EventHandler OnRightFireDetected;


    private float curlAverage;
    private float threshold = 0.1f;

    private float distanceMiddleThumb;
    private float gesture_timer;
    private float left_fire_timer;
    private float right_fire_timer;
    private float gesture_timer_threshold = 0.3f;
    private float fingerSnap_deadline = 1.0f;
    private bool gesture_check;
    private bool left_fire_check;
    private bool right_fire_check;

    

    private void Awake()
    {
        SoundManager.Initialize();
    }

    private void Start()
    {
        leftIndexObject = Instantiate(leftHandIndexMarker, this.transform);
        rightIndextObject = Instantiate(rightHandIndexMarker, this.transform);
        left_fire_timer = 0;
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
        + HandPoseUtils.PinkyFingerCurl(Handedness.Both) + "\n"
        + currentGesture.name;

        if(hasRecognized && currentGesture.Equals(previousGesture))
        {
            gesture_timer += Time.deltaTime;
            if(gesture_timer > gesture_timer_threshold)
            {
                gesture_check = true;
            }
            else
            { gesture_check = false; }
        }
        else if(hasRecognized && !currentGesture.Equals(previousGesture))
        {
            gesture_check = false;
            gesture_timer = 0;
        }

        //Check for new gestures
        if(hasRecognized && !currentGesture.Equals(previousGesture) && !currentGesture.Equals(gestures[0]))
        {
            previousGesture = currentGesture;
        }

        //Display Index Markers with FingerGun gesture
        leftIndexObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Left, out indexPose) && currentGesture.Equals(gestures[1]))
        {
            leftIndexObject.GetComponent<Renderer>().enabled = true;
            leftIndexObject.transform.position = indexPose.Position;
            left_fire_check = true;
            left_fire_timer = 1f;
        }

        if(left_fire_timer > 0 && currentGesture.Equals(gestures[2]) && left_fire_check)
        {
            left_fire_check = false;
            left_fire_timer -= Time.deltaTime;
            OnLeftFireDetected?.Invoke(this, EventArgs.Empty);
        }

        rightIndextObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out indexPose) && currentGesture.Equals(gestures[1]))
        {
            rightIndextObject.GetComponent<Renderer>().enabled = true;
            rightIndextObject.transform.position = indexPose.Position;
            right_fire_check = true;
            right_fire_timer = 1f;
        }

        if (right_fire_timer > 0 && currentGesture.Equals(gestures[2]) && right_fire_check)
        {
            right_fire_check = false;
            right_fire_timer -= Time.deltaTime;
            OnRightFireDetected?.Invoke(this, EventArgs.Empty);
        }

    }

    Gesture RecognizedGesture()
    {
        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Any);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Any);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Any);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Any);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Any);

        /*
        float[] currentCurlValues = { thumbCurl, indexCurl, middleCurl, ringCurl, pinkyCurl };

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

        return gestures[gestures.Count - 1];
        */
       

        if (thumbCurl < 0.3f && middleCurl > 0.3 && ringCurl > 0.3 && pinkyCurl > 0.3)
        {
            return gestures[1];
        }

        else if (thumbCurl > 0.7  && middleCurl > 0.3 && ringCurl > 0.3 && pinkyCurl > 0.3)
        {
            return gestures[2];
        }
        else
        {
            return gestures[0];
        }
        
    }
}
