using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern drivetrain Drivetrain;
extern inertial InertialSensor;
extern limit LimitSwitchD;
extern light LightE;
extern digital_out DigitalOutA;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );