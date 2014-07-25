#include <DynamixelSerial.h>
// avoir un certain nb de repetition (ici 1)
#define LOOP_REPETITION 1

// le servo 1 
#define DOIGT_INDEX 1

// nombre de position pour avoir un quart de tour
#define QUART_DE_TOUR 153

void setup(){
  Dynamixel.begin(1000000,2);  // Inicialize the servo at 1Mbps and Pin Control 2
  delay(1000);
}
int i = 0 ;

void loop (){


  if (i != LOOP_REPETITION){
    Dynamixel.setEndless(DOIGT_INDEX,ON);
   
    //on fait bouger le doigt droit dont le servomoteur a pour ID 1
    if (Dynamixel.turn(DOIGT_INDEX,RIGTH,QUART_DE_TOUR) == 1)
      printf("pas de reponse du moteur...");
    else{
      //on patiente 
      delay(3000);

      if(Dynamixel.turn(DOIGT_INDEX,LEFT,QUART_DE_TOUR) == 1)
        printf("pas de reponse du moteur...");
      //on allume la led du servo 1
      else 
        Dynamixel.ledStatus(DOIGT_INDEX,ON);
    }  
   
  }
  else{
    //on off la led du servo 1 
    Dynamixel.ledStatus(DOIGT_INDEX,OFF);
    Dynamixel.reset(DOIGT_INDEX);

  }

}




