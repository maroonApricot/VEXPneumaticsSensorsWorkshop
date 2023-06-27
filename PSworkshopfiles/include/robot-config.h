using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller controller1;
extern motor leftMotor;
extern motor rightMotor;
extern drivetrain squarebot;

//signatures
using signature = vision::signature;
extern signature visionSensor__BUMPER;
extern signature visionSensor__SIG_2;
extern signature visionSensor__SIG_3;
extern signature visionSensor__SIG_4;
extern signature visionSensor__SIG_5;
extern signature visionSensor__SIG_6;
extern signature visionSensor__SIG_7;

//Sensors
extern vision visionSensor;
extern limit limitSwitch;
extern light lightSensor;
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