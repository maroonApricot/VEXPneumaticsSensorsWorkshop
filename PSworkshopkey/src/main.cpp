/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Macbook                                                   */
/*    Created:      Mon Jun 19 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1                            
// InertialSensor       inertial      2
// Solenoid1            digital_out   A 
// Solenoid2            digital_out   B                               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

event detectObject = event();
int joystickDeadband = 10;
int leftMotorSpeed = 0; //forward&backward
int rightMotorSpeed = 0; //left&right

void touchLightSensorStation(){
  leftMotorSpeed = controller1.Axis3.position();//gets joystick values to drive
  rightMotorSpeed = controller1.Axis2.position();
  if (lightSensor.brightness() > 100){ //depends on tested values
    //Think about what happens when the left side of the robot drives backward
    //while the right side drives forward? What direction does the robot drive?
    leftMotor.spin(reverse); 
    rightMotor.spin(forward);
  } 
  if (limitSwitch.pressing()){
    leftMotor.spin(reverse, abs(leftMotorSpeed), velocityUnits::pct);
    rightMotor.spin(reverse, abs(rightMotorSpeed), velocityUnits::pct);
  }
  else{
    leftMotor.spin(forward, leftMotorSpeed, velocityUnits::pct);
    rightMotor.spin(forward, rightMotorSpeed, velocityUnits::pct);
  }
}

void visionSensorStation(){
  Brain.Screen.clearLine(1);
  Brain.Screen.setCursor(1,1);
  visionSensor.takeSnapshot(visionSensor__BUMPER);
  if (visionSensor.objectCount > 0){
    Brain.Screen.print("Bumper found");
  }
}

void inertialSensorStation(){
  inertialSensor.calibrate();
  // waits for the Inertial Sensor to calibrate
  while (inertialSensor.isCalibrating()) {
    wait(100, msec);
  }
  Brain.Screen.print("done calibrating");
  //squarebot.driveFor(forward, 12, distanceUnits::in); //Drive 1 ft
  leftMotor.spinFor(forward, 3, timeUnits::sec);
  rightMotor.spinFor(forward, 3, timeUnits::sec);
  while (inertialSensor.heading(degrees) < 90.0){ //Turn right while heading is less than 90 degrees
    leftMotor.spin(forward);
    rightMotor.spin(backward);
  }
  leftMotor.stop();
  rightMotor.stop();
  leftMotor.spinFor(forward, 3, timeUnits::sec);
  rightMotor.spinFor(forward, 3, timeUnits::sec);
  wait(1, seconds);
}

void pneumaticsSensorStation(){
  if (controller1.ButtonA.pressing()){ //If button is being pressed -> extend piston
    solenoid1.set(true);
  } else { //otherwise retract it
    solenoid1.set(false);
  }
  if (controller1.ButtonB.pressing()){
    solenoid2.set(true);
  } else {
    solenoid2.set(false);
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  detectObject(visionSensorStation);
  wait(15,msec);
  while (true)
  {
    /*Uncomment the method youre testing here*/
    //Touch and photo
    //touchLightSensorStation();

    //Vision
    //detectObject.broadcastAndWait();
    
    //Inertial (uncomment the break as well)
    //inertialSensorStation();
    //break;

    //Pneumatics
    //pneumaticsSensorStation();
    wait(10, msec);
  }
}
