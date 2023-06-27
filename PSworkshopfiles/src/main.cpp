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

void touchLightSensorStation(){

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
  // Moves robot 1 ft forward
  squarebot.driveFor(forward, 12, distanceUnits::in);
  // Turns until the motor reaches a 90 degree turn
  while (!(inertialSensor.heading(degrees) >= 90.0)){
    squarebot.turn(right);
  }
  squarebot.stop();
  squarebot.driveFor(forward, 12, distanceUnits::in);
  wait(1, seconds);
}

void pneumaticsSensorStation(){
  if (controller1.ButtonA.pressing()){
    solenoid1.set(true);
  } else {
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
    /*Put the method youre testing here*/

    //Vision
    //detectObject.broadcastAndWait();
    
    //Inertial
    //inertialSensorStation();
    //break;

    //Pneumatics
    //pneumaticsSensorStation()
    wait(100, msec);
  }
}
