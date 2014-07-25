
#include <DynamixelSerial.h>

#define NEW_ID_SERVO 1

int idtemp = 0 ;
int pos = 0;
int id = 0 ;
void setup (){
  Dynamixel.begin(1000000,2);
  id = Dynamixel.getID();
}

void loop (){
  Serial.begin(9600);
  Serial.print("ID TESTER :");
  Serial.println(idtemp);  
  Serial.end();  

  Dynamixel.move(idtemp,pos);
  if(Dynamixel.moving(idtemp)){
    Serial.begin(9600);
    Serial.print("pos: "); 
    Serial.println(pos); 
    Serial.print("ID:"); 
    Serial.println(idtemp);   
    Serial.end();
  }
  else{

    if(idtemp>=253)
      idtemp = 0 ;
    else 
      idtemp = idtemp++ ;  


    if(pos>1000)
      pos = 0 ; 
    else 
      pos = pos + 50 ;

  }
  delay(1000);
}








