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
// InertialSensor       inertial      2               
// LimitSwitch          limit         D               
// LightSensor          light         E               
// Solenoid             digital_out   A               
// LeftMotor            motor         1               
// RightMotor           motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

event detectObject = event();

void touchLightSensorStation(){
  if (true){ //stub: replace with light sensor conditional
    //make the drivetrain spin
  } 
  if (true){ //stub: replace with limit switch conditional
    //make the drivetrain back up
  }
  //add default code for driving
}

void visionSensorStation(){
  Brain.Screen.clearLine(1);
  Brain.Screen.setCursor(1,1);
  //take a snapshot here
  if (true){ //stub: replace with conditional to detect object (hint: object count)
    //print something to the screen
  }
}

void inertialSensorStation(){
  InertialSensor.calibrate();
  // waits for the Inertial Sensor to calibrate
  while (InertialSensor.isCalibrating()) {
    wait(100, msec);
  }
  // make the drivetrain drive 1 foot forward here
  while (true){ //stub: replace with condition to turn right while heading is less than 90 degrees
    //turn right (do not use turnFor)
  }
  //make thhe drivetrain drive another foot forward
  wait(1, seconds);
}

void pneumaticsSensorStation(){
  if (true){ //stub: replace withh condition for if button is being pressed
    //set solenoid to high (true)
  } else { //otherwise retract it
    //set solenoid to low (false)
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  detectObject(visionSensorStation);
  wait(15,msec);
  while (true)
  {
    /* Uncomment the method youre testing here, comment again when done */
    //Touch and photo
    //touchLightSensorStation();

    //Vision
    //detectObject.broadcastAndWait();
    
    //Inertial (uncomment the break as well)
    //inertialSensorStation();
    //break;

    //Pneumatics
    //pneumaticsSensorStation();
    wait(100, msec);
  }
}
