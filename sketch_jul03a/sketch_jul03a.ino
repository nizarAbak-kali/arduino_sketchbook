#include <Servo.h>
Servo servoa , servob ; // Define our Servo

int nb_tours = 0;

void setup()
{
  servoa.attach(9); // servo on digital pin 10
  servob.attach(10);
}

void loop()
{

  while (1){
    
    if (nb_tours>1){
      servoa.detach();
      servob.detach();
             }   
    nb_tours++; 
    servoa.write(45);


    servob.write(45);

    delay(1000);   

  }  
}



