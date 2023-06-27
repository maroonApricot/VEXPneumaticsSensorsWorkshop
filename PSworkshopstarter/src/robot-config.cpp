#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller controller1 = controller(primary);
motor leftMotor = motor(PORT1, ratio18_1, false);
motor rightMotor = motor(PORT10, ratio18_1, true);
drivetrain squarebot = drivetrain(leftMotor,rightMotor);

//Signatures will have some format similar to the following:
signature visionSensor__BUMPER = signature (1, 4633, 8495, 6564, -2953, -863, -1908, 2.2, 0);

//Sensors
inertial InertialSensor = inertial(PORT2);
vision visionSensor = vision (PORT3, 50, visionSensor__BUMPER); //will also pass in signatures as arguments
limit limitSwitch = limit(Brain.ThreeWirePort.D);
light lightSensor = light(Brain.ThreeWirePort.E);

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