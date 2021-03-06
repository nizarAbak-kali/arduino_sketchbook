#include <DynamixelSerial.h>
// avoir un certain nb de repetition (ici 1)
#define LOOP_REPETITION 100

// le servo 1 
#define DOIGT_INDEX_1 1

// le servo 1 
#define DOIGT_INDEX_2 2

// nombre de position pour avoir un deux doigt qui se touche a partir de la position levé
#define QUART_DE_TOUR 50


void setup(){
  Dynamixel.begin(1000000,2);  // Inicialize the servo at 1Mbps and Pin Control 2
  delay(1000);

}

void loop(){
  int i = 0;
  Dynamixel.setEndless(DOIGT_INDEX_1,ON);
  Dynamixel.setEndless(DOIGT_INDEX_2,ON);
  
  //---------------------------------------------------------------------------
  //si i est paire on croise les doigts
  if (i%2 == 0){
  
    if (i != LOOP_REPETITION){
      /////////////////////////////////////////////////////////////////
      if (Dynamixel.turn(DOIGT_INDEX_1,LEFT,QUART_DE_TOUR) == 1){
        printf("pas de reponse du moteur 1 droite...");

      }
      else{
        //on allume la led du servo 1
        Dynamixel.ledStatus(DOIGT_INDEX_1,ON);
      } 
      //////////////////////////////////////////////////////////////////////

      /////////////////////////////////////////////////////////////////
      if (Dynamixel.turn(DOIGT_INDEX_2,RIGTH,QUART_DE_TOUR) == 1){
        printf("pas de reponse du moteur 2 gauche...");
      }
      else{
        //on allume la led du servo 2
        Dynamixel.ledStatus(DOIGT_INDEX_2,ON);
      } 
      //////////////////////////////////////////////////////////////////////
    }


    else{
     
      Dynamixel.ledStatus(DOIGT_INDEX_1,OFF);
      Dynamixel.ledStatus(DOIGT_INDEX_2,OFF);
    }  
  }
  //--------------------------------------------------------------------------------
  
  // on decroise les doigts si i est impaire 
  else {
    
    if (i != LOOP_REPETITION){
      /////////////////////////////////////////////////////////////////
      if (Dynamixel.turn(DOIGT_INDEX_1,RIGTH,QUART_DE_TOUR) == 1){
        printf("pas de reponse du moteur 1 droite...");

      }
      else{
        //on allume la led du servo 1
        Dynamixel.ledStatus(DOIGT_INDEX_1,ON);
      } 
      //////////////////////////////////////////////////////////////////////

      /////////////////////////////////////////////////////////////////
      if (Dynamixel.turn(DOIGT_INDEX_2,LEFT,QUART_DE_TOUR) == 1){
        printf("pas de reponse du moteur 2 gauche...");

      }
      else{
        //on allume la led du servo 2
        Dynamixel.ledStatus(DOIGT_INDEX_2,ON);
      } 
      //////////////////////////////////////////////////////////////////////
    }


    else{
     
      Dynamixel.ledStatus(DOIGT_INDEX_1,OFF);
      Dynamixel.ledStatus(DOIGT_INDEX_2,OFF);
    }  
  }
//------------------------------------------------------------------------------------------


}




