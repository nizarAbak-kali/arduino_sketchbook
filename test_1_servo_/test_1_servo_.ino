#include <Servo.h>

Servo myservo ;

void setup(){
  myservo.attach(9);  

}

void loop(){
  //on met le servo au milieu
  myservo.writeMicroseconds(1500);
  delay(1000);
  //aller vers la gauche 
  myservo.writeMicroseconds(2000);
  delay(1000);
  //vers la droite 
  myservo.writeMicroseconds(1000);
  delay(1000); 
}
