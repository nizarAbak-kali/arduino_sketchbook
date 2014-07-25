#include <SoftwareSerial.h>

#include <DynamixelSerial.h>

#define NB_SERVO 1

void setup (){
  //  Serial.begin(9600);
  Dynamixel.begin(1000000,2);

}

void loop (){
  int id , test;
  for( id=0 ; id < 253 ; id++ ){
    if(test = Dynamixel.ledStatus(id,ON)){
      
      
      Serial.begin(9600);
      
      Serial.print("retour de la fonctions: ");
      Serial.println(test);
      
      Serial.print("id allumé : ");
      Serial.print(id);
      Serial.println("ok");
      Serial.end();
    }
    else{
      Serial.begin(9600);
      Serial.print("id allumé: ");
      Serial.print(id);
      Serial.println("pas ok");
      Serial.end();
    }
  delay(500);
    if(Dynamixel.ledStatus(id,OFF)){
      Serial.begin(9600);
      Serial.print("id eteint : ");
      Serial.print(id);
      Serial.println("ok");
      Serial.end();
    }
    else{
      Serial.begin(9600);
      Serial.print("id eteint: ");
      Serial.print(id);
      Serial.println("pas ok");
      Serial.end();
    }
  delay(500);

  }
}



