using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern inertial InertialSensor;
extern limit LimitSwitch;
extern light LightSensor;
extern digital_out Solenoid;
extern motor LeftMotor;
extern motor RightMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );