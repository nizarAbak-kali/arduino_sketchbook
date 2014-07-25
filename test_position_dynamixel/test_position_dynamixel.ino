//TEST LES DIFFERENTES POSITIONS DU SERVO AX-12 

#include <SoftwareSerial.h>

#include <DynamixelSerial.h>

#define DOIGT_INDEX 1
#define DOIGT_INDEX_BIS  2
int position_init = 423 ;
int position = position_init ;

void setup (){


  Dynamixel.begin(1000000,2);
  delay(1000);
  Dynamixel.setEndless(DOIGT_INDEX,OFF);

  Dynamixel.move(DOIGT_INDEX,position);
  delay(500);

}

void loop (){
  position +=100;
  if(position>1023){
    position = position_init ;
  }
  Dynamixel.end();
  // ecriture dans le moniteur serie
  Serial.begin(9600);
  Serial.println(position);
  Serial.end();
  // fin de l'ecriture
  //

  Dynamixel.begin(1000000,2);
  Dynamixel.move(DOIGT_INDEX,position);
  Dynamixel.ledStatus(DOIGT_INDEX,ON);
  delay(1000);
  Dynamixel.ledStatus(DOIGT_INDEX,OFF);

  Dynamixel.move(DOIGT_INDEX_BIS,position);
  Dynamixel.ledStatus(DOIGT_INDEX_BIS,ON);
  delay(1000);
  Dynamixel.ledStatus(DOIGT_INDEX_BIS,OFF);
}


