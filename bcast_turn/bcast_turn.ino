
/*
  ax12_blink_id.pde - Utility to visualize dynamixel IDs with status LEDs.
  Created by Martin d'Allens, September 6, 2011.
  Released into the public domain.
*/

#include <ax12.h>

#define ARDUINO_LED 13
#define DELAY_TIME  10// ms
#define AX12_ID 254

void setup(){
  AX12::init(1000000); // Factory default of 1Mb/s.
}

void loop () {
   AX12 ax(1);
   ax.writeInfo(TORQUE_ENABLE, 1);
   ax.writeInfo(MAX_TORQUE, 500);
  int i = 0;
  while(1){
      
      ax.id = i%255 ;
      ax.writeInfo(GOAL_POSITION, map(90, -150, 150, 0, 1023));
      
      delay(DELAY_TIME);
      i++;
    
  } 

}
