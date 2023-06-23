#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Motor1 = motor(PORT1, ratio18_1, false);
/*vex-vision-config:begin*/
signature Vision2__BUMPER = signature (1, 4633, 8495, 6564, -2953, -863, -1908, 2.2, 0);
vision Vision2 = vision (PORT2, 50, Vision2__BUMPER);
/*vex-vision-config:end*/
inertial Inertial3 = inertial(PORT3);
optical Optical4 = optical(PORT4);
digital_out DigitalOutG = digital_out(Brain.ThreeWirePort.G);
pot PotentiometerC = pot(Brain.ThreeWirePort.C);
digital_out DigitalOutF = digital_out(Brain.ThreeWirePort.F);

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