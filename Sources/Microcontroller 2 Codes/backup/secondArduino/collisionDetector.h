/*
 A custom library written for collison detecting
 Library wrıtten by Syed Saad Saif
 */
#ifndef COLLISION_DETECTOR_H
#define COLLISION_DETECTOR_H

#include <Arduino.h>
#include "Ultrasonic.h"
#define DANGER_DISTANCE 10
#define LAST_DETERMINE_DISTANCE 40

class collisionDetector
{
  public:
    collisionDetector(unsigned char frontPin, unsigned char leftEchoPin, 
    unsigned char leftTriggerPin, unsigned char rightEchoPin, unsigned char rightTriggerPin,
    unsigned char backEchoPin, unsigned char backTriggerPin);
    bool robotIsLast();
    bool update();
    bool init();
    unsigned char getAvoidAction();
  private:
    unsigned char _leftDist, _rightDist, _frontDist, _backDist;
    unsigned char _frontPin, _leftEchoPin, _leftTriggerPin;
    unsigned char _rightEchoPin, _rightTriggerPin, _backEchoPin, _backTriggerPin;
    Ultrasonic _left, _right, _back;
};

#endif
