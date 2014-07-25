#include <SoftwareSerial.h>

#include <DynamixelSerial.h>

#define DOIGT_INDEX 0

int position_init = 450 ;
int position = position_init ;


void setup (){


  Dynamixel.begin(1000000,2);
  Dynamixel.setEndless(DOIGT_INDEX,OFF);

  Dynamixel.move(DOIGT_INDEX,position);
  delay(500);


}
void loop (){
  int id , test;
  for( id=1 ; id < 253 ; id++ ){
    if(test = Dynamixel.ping(id) != -1 )
    Serial.begin(9600);

    Serial.print("retour de la fonctions: ");
    Serial.println(test);

    Serial.print("id du servo moteur : ");
    Serial.print(id);
    Serial.end();
    break ;
  }




}


