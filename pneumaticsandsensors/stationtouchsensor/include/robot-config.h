using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern controller Controller1;
extern motor Motor1;
extern signature Vision2__BUMPER;
extern signature Vision2__SIG_2;
extern signature Vision2__SIG_3;
extern signature Vision2__SIG_4;
extern signature Vision2__SIG_5;
extern signature Vision2__SIG_6;
extern signature Vision2__SIG_7;
extern vision Vision2;
extern inertial Inertial3;
extern optical Optical4;
extern digital_out DigitalOutG;
extern pot PotentiometerC;
extern digital_out DigitalOutF;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );