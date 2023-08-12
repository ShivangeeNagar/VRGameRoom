using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RacketBallInteraction : MonoBehaviour
{
    public float forceMultiplier = 1.0f;
    public float hapticDuration = 0.1f; // Duration of haptic feedback in seconds
    public AudioClip hitSound; // Audio clip to play when the ball hits the racket

    private Vector3 previousControllerPosition;
    private bool isHittingBall;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("TennisBall"))
        {
            Rigidbody ballRigidbody = collision.gameObject.GetComponent<Rigidbody>();
            Rigidbody racketRigidbody = GetComponent<Rigidbody>();

            if (ballRigidbody != null && racketRigidbody != null)
            {
                // Calculate impact force
                Vector3 forceDirection = collision.contacts[0].point - transform.position;
                forceDirection = -forceDirection.normalized;
                float impactForce = racketRigidbody.velocity.magnitude * forceMultiplier;

                // Apply force to the ball
                ballRigidbody.AddForce(forceDirection * impactForce);

                // Trigger haptic feedback with intensity based on impact force
                float hapticIntensity = Mathf.Clamp01(impactForce / 10f); // Adjust the division factor as needed
                OVRInput.SetControllerVibration(0, hapticIntensity, OVRInput.Controller.RTouch);
                OVRInput.SetControllerVibration(0, hapticIntensity, OVRInput.Controller.LTouch);
                StartCoroutine(StopHapticFeedback());

                // Play hit sound
                AudioSource.PlayClipAtPoint(hitSound, collision.contacts[0].point);
            }
        }
    }

    // Coroutine to stop haptic feedback after a duration
    private IEnumerator StopHapticFeedback()
    {
        yield return new WaitForSeconds(hapticDuration);
        OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.RTouch);
        OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.LTouch);
    }
}
