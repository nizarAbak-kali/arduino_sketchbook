#include <SoftwareSerial.h>

#include <DynamixelSerial.h>

#define DOIGT_INDEX 1
#define DOIGT_MAJEUR  2

int position_init = 423 ;
int position = position_init ;


void setup (){
  // on demarre le port serie à 9600 baud
  Serial.begin(9600);
  //on demarre les dynamixel avec pour frequence de communication de 1M 
  Dynamixel.begin(1000000,2);
  Dynamixel.setEndless(DOIGT_INDEX,OFF);
  Dynamixel.move(DOIGT_INDEX,position);
  delay(500);
}

void loop(){
  


}