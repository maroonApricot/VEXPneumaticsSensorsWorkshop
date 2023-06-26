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

void touchLightSensorStation(){

}

void visionSensorStation(){

}

void inertialSensorStation(){
  
}

void pneumaticsSensorStation(){
  solenoid1.set(true);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while (true)
  {
    //Put the method youre testing here
    wait(100, msec);
  }
}
