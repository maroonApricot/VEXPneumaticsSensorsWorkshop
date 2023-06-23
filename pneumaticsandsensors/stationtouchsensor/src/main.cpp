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
// Vision2              vision        2               
// Inertial3            inertial      3               
// Optical4             optical       4               
// DigitalOutG          digital_out   G               
// PotentiometerC       pot           C               
// DigitalOutF          digital_out   F               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

competition Competition;

// event detectObject = event();

// void hasObject(){
//   Brain.Screen.clearLine(1);
//   Brain.Screen.setCursor(1,1);
//   Vision2.takeSnapshot(Vision2__BUMPER);
//   if (Vision2.objectCount > 0){
//     Brain.Screen.print("Object found");
//   }
// }

void usercontrol(void){
  while (true)
  {
    Brain.Screen.clearLine(1);
    Brain.Screen.setCursor(1,1);
    Motor1.setVelocity(50,percent);
    if (Controller1.ButtonL1.pressing()){
      Motor1.spin(forward);
    }
    if (Controller1.ButtonR1.pressing()){
      Motor1.stop();
    }
    //if (LimitSwitchH.pressing() || BumperB.pressing()){
    //  Motor1.spin(forward);
    //Single Acting
    if (Controller1.ButtonA.pressing()){
      DigitalOutF.set(true);
    } else{
      DigitalOutF.set(false);
    }
    //Double Acting
    if (Controller1.ButtonB.pressing()){
      Brain.Screen.print("on");
      DigitalOutG.set(true);
    } else{
      DigitalOutG.set(false);
    }
    //detectObject.broadcastAndWait();
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  //detectObject(hasObject);
  //wait(15,msec);
  Competition.drivercontrol(usercontrol);
  while (true)
  {
    wait(100, msec);
  }
}
