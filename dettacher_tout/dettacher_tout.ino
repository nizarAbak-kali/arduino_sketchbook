#include<Servo.h>

//quelque macros 
#define POUCE 0 
#define INDEX 1 
#define MAJEUR 2 
#define ANNULAIRE 3
#define AURICULAIRE  4
#define NB_SERVO 5

Servo main[NB_SERVO]; 

Servo doigt1;



void detach_all_fingers(){
  int i ;
  for( i = 0 ; i < NB_SERVO ; i++)
    main[i].detach();
}

void setup(){  
  detach_all_fingers();
  
}

void loop(){


}
