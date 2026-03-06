#include <kipr/wombat.h>

int main()
{
enable_servos(0);
    
set_servo_position(0,1350);
msleep(1000);
set_servo_position(1,0);
msleep(1000);
set_servo_position(1,600);
msleep(1000);
set_servo_position(0,0);
    return 0;
}
