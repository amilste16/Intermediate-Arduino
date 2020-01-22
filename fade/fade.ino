 #include "Arduino.h"
#define ledPin    10  
int fade;
int i;

void setup(){
  Serial.begin(9600);
}

 
void loop() {

  for (fade = 0 ; fade <= 255; fade += 5) {
    
    analogWrite(ledPin, fade);
  
    delay(30);
 
               for(i=0; i<fade; i=i+4){
              }
    
    
 
  
 

  for (fade = 255 ; fade >= 0; fade -= 5) {

    analogWrite(ledPin, fade);
  
    delay(30);
 
               for(i=0; i<fade; i = i+4){
                }  }
    

