#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller controller1 = controller(primary);
motor cotor1 = motor(PORT1, ratio18_1, false); //repurposed for each station

//Sensors
inertial InertialSensor = inertial(PORT2);
vision visionSensor = vision(PORT3);
bumper bumperSwitch = bumper(Brain.ThreeWirePort.C);
limit limitSwitch = limit(Brain.ThreeWirePort.D);
light lightSwitch = light(Brain.ThreeWirePort.E);
line lineTracker =  line(Brain.ThreeWirePort.F);

//Pneumatics
digital_out solenoid1 = digital_out(Brain.ThreeWirePort.A);
digital_out solenoid2 = digital_out(Brain.ThreeWirePort.B);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}