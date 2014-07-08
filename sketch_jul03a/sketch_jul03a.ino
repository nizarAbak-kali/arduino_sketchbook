#include <Servo.h>
Servo servoa , servob ; // Define our Servo

void setup()
{
   servoa.attach(9); // servo on digital pin 10
   servob.attach(5);
}

void loop()
{
  servoa.write(45);

  
  servob.write(180);
  
  delay(1000); 
 
 
 servoa.detach();
 servob.detach();
  
}
