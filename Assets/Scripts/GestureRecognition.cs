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

    MixedRealityPose indexPose, thumbPose, middlePose;

    GameObject leftIndexObject;
    GameObject rightIndextObject;

    public event EventHandler OnLeftFireDetected;
    public event EventHandler OnRightFireDetected;
    public event EventHandler OnSnapDetected;

    private float curlAverage;
    private float threshold = 0.1f;

    private float distanceMiddleThumb;
    private float gesture_timer;
    private float left_fire_timer;
    private float right_fire_timer;
    private float gesture_timer_threshold = 0.3f;
    private float fingerSnap_timer;
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
        right_fire_timer = 0;
    }

    void Update()
    {
        float thumbCurl = HandPoseUtils.ThumbFingerCurl(Handedness.Both);
        float indexCurl = HandPoseUtils.IndexFingerCurl(Handedness.Both);
        float middleCurl = HandPoseUtils.MiddleFingerCurl(Handedness.Both);
        float ringCurl = HandPoseUtils.RingFingerCurl(Handedness.Both);
        float pinkyCurl = HandPoseUtils.PinkyFingerCurl(Handedness.Both);

        if(thumbCurl < 0.4f && indexCurl < 0.05f && middleCurl < 0.05f && ringCurl < 0.05f && pinkyCurl < 0.05f)
        {
            CubeSummon();
        }

        //Approach to detect a finger snap for now; until a better method can be introduced.
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Both, out thumbPose) && HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleTip, Handedness.Both, out middlePose))
        {
            distanceMiddleThumb = Vector3.Distance(thumbPose.Position, middlePose.Position);
        }

        //Pre-Finger Snap
        if (pinkyCurl > 0.6f && ringCurl > 0.6f && middleCurl < 0.4f && distanceMiddleThumb < 0.035f)
        {
            gesture_timer += Time.deltaTime;
            if (gesture_timer >= gesture_timer_threshold)
            {
                fingerSnap_timer = 0;
            }
        }
        else
        {
            gesture_timer = 0f;
        }

        fingerSnap_timer += Time.deltaTime;

        //Small time window to detect post-snap
        if (fingerSnap_timer < fingerSnap_deadline)
        {
            //Post-Finger Snap
            if (pinkyCurl > 0.6f && ringCurl > 0.6f && middleCurl > 0.7f && distanceMiddleThumb > 0.05f)
            {
                //call event
                OnSnapDetected?.Invoke(this, EventArgs.Empty);
            }
        }

        if (Input.GetMouseButtonDown(0))
        {
            OnRightFireDetected?.Invoke(this, EventArgs.Empty);
        }

        if(Input.GetMouseButtonDown(1))
        {
            OnLeftFireDetected?.Invoke(this, EventArgs.Empty);
        }

        Gesture currentGesture = RecognizedGesture();
        bool hasRecognized = !currentGesture.Equals(new Gesture());

        curlValues.text = "\n" + thumbCurl + "\n"
        + indexCurl + "\n"
        + middleCurl + "\n"
        + ringCurl + "\n"
        + pinkyCurl + "\n";

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

    public void CubeSummon()
    {
        OnSnapDetected?.Invoke(this, EventArgs.Empty);
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
