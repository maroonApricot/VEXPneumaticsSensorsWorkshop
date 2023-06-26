using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller controller1;
extern motor motor1;

//Sensors
extern vision visionSensor;
extern bumper bumperSwitch;
extern limit limitSwitch;
extern light lightSwitch;
extern line lineTracker;
extern inertial inertialSensor;

//Pneumatics
extern digital_out solenoid1;
extern digital_out solenoid2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );