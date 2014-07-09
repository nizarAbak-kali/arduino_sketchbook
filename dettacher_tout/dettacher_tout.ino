#include<Servo.h>

//quelque macros 
#define POUCE 0 
#define INDEX 1 
#define MAJEUR 2 
#define ANNULAIRE 3
#define AURICULAIRE  4
#define NB_SERVO 5
#define NB_PWM 6

//liste des pins PWM
int list_pin_PWM[6]={3,5,6,9,10,11};

//CONTIENT TOUT LES SERVOS QUI CONTROLE LES DOIGTS
Servo main[NB_SERVO]; 

// un doigt la au pif ...
Servo doigt1;

void attach_all_fingers(){
  int i ;
  for (i = 0 ; i < NB_PWM ; i++)
    main[i].attach(list_pin_PWM[i]);
}

void detach_all_fingers(){
  int i ;
  for( i = 0 ; i < NB_SERVO ; i++)
    main[i].detach();
}

void setup(){  
  attach_all_fingers();
  detach_all_fingers();
  
}

void loop(){


}
