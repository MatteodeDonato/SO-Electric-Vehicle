#include <Wire.h>                   //include motor shield library
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

Adafruit_MotorShield motorShield = Adafruit_MotorShield();    //create an object for the motor shield

Adafruit_DCMotor *frontLeft = motorShield.getMotor(1);      //create objects for motors
Adafruit_DCMotor *frontRight = motorShield.getMotor(2);
Adafruit_DCMotor *backLeft = motorShield.getMotor(3);
Adafruit_DCMotor *backRight = motorShield.getMotor(4);


void setup(){


}

void loop(){

}
