/*
  ax12_blink_id.pde - Utility to visualize dynamixel IDs with status LEDs.
  Created by Martin d'Allens, September 6, 2011.
  Released into the public domain.
*/

#include <ax12.h>

#define ARDUINO_LED 13
#define BLINK_TIME  200 // ms
#define AX12_ID 0

void setup(){
  AX12::init(1000000); // Factory default of 1Mb/s.
   pinMode(ARDUINO_LED, OUTPUT);
}

void loop () {
  AX12 ax(1);
  
  while(1){
    
      int start_millis = millis();
      
      digitalWrite(ARDUINO_LED, HIGH);
      
        ax.id = AX12_ID;
       ax.writeInfo(AX_LED, 1);
      
      int elapsed_millis = millis() - start_millis;
      if(elapsed_millis < BLINK_TIME)
      delay(BLINK_TIME - elapsed_millis);
      
      digitalWrite(ARDUINO_LED, LOW);
      ax.writeInfo(AX_LED,0);
      delay(BLINK_TIME);
      
    
  } 

}


