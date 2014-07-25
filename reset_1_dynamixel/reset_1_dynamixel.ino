/*
petit code qui permet de changer le ID d'un servo AX-12 
 dont on ne connait pas l'ID 
 
 brancher le servo seul et changer la valeur de NEW_ID_SERVO 
 
 */


#include <DynamixelSerial.h>

#define NEW_ID_SERVO 1

int idtemp = 0 ;

void setup (){


  Dynamixel.begin(1000000,2);
  //delay(1000);
  //on test pour tout les id (cas ou on ne connait pas le bon id)
  while(idtemp++<=253){
    Dynamixel.reset(idtemp);
    Serial.begin(9600);
    Serial.println("id : " );
    Serial.print(idtemp);
    Serial.end();
  }
  Dynamixel.setID(1,NEW_ID_SERVO); 


  Serial.begin(9600);
  Serial.println("Setup finie ........!!!!!!");
  Serial.print("new id : " );
  Serial.println(NEW_ID_SERVO);
  Serial.end();
}

void loop (){
  // on verifie que l'on bien setter le nouvelle ID
  Serial.begin(9600);
  Serial.println("Clignote le servo 1"); 
  Serial.end();  
  Dynamixel.ledStatus(NEW_ID_SERVO,ON);
  delay(1000);
  Dynamixel.ledStatus(NEW_ID_SERVO,OFF);
  delay(1000);
  Dynamixel.move(NEW_ID_SERVO,450);

}






