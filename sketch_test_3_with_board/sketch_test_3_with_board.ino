/*
Arduino Servo Test sketch
*/
#include <Servo.h>
#define NB_SERVO 5

Servo servoMain1,servoMain2; // Define our Servo


//variable de position va prendre le servo moteur 
int angle = 0 ; 


Servo servo_fingers[NB_SERVO];
int finger_angle[NB_SERVO];

void initangleservo(){
    int i ;
  for(i = 0 ; i < NB_SERVO; i++ ){
    finger_angle[i] = 0;
  
  }
  
}


void setup(){
    // établir la connexion sérielle à 9600 baud  
    Serial.begin(9600); 
   
    // servo on digital pin 9
    servoMain1.attach(9);
    // servo on digital pin 9
    servoMain2.attach(10);
    //on positionne le servo a la position initilae
    servoMain1.write(angle);
    servoMain2.write(angle);
    
    
    
    delay(200);
 }

void loop (){

  
   servoMain1.write(45);
   servoMain2.write(45);
    delay(2000);

}
