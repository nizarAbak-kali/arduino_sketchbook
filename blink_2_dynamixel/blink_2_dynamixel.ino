#include <DynamixelSerial.h>

#define DOIGT_INDEX_1 1
#define DOIGT_INDEX_2 2


void setup(){
  Dynamixel.begin(1000000,2);  // Inicialize the servo at 1Mbps and Pin Control 2

}

int i = 0 ;

void loop (){

  if((i%2) == 0){
    Dynamixel.ledStatus(DOIGT_INDEX_1,ON);
    Dynamixel.ledStatus(DOIGT_INDEX_2,OFF);
    delay(1000);
  }
  else{ 
    Dynamixel.ledStatus(DOIGT_INDEX_1,OFF);
    Dynamixel.ledStatus(DOIGT_INDEX_2,ON);
    delay(1000);
  }
  i = i+1 ;
}


