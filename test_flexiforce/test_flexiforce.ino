

int fsrReading;
 

void setup(){
   Serial.begin(9600);
}
void loop(){
   fsrReading = analogRead(A0);
   Serial.print("Analog reading = ");
   Serial.println(fsrReading);
   delay(100);
} 
