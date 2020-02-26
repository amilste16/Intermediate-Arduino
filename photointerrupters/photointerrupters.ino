
int ledPin = 9;
int photoPin1 = 2;  
int photoPin2 = 3;
int thing =0; 

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(photoPin1, INPUT_PULLUP); 
    pinMode(photoPin2, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(photoPin2), ledhigh, RISING); 
    attachInterrupt(digitalPinToInterrupt(photoPin1), ledlow, FALLING); 

  }

void ledhigh (){
  digitalWrite(ledPin, HIGH); 
  thing++; 
}
void ledlow(){
  digitalWrite(ledPin, LOW); 
}
void loop (){
  Serial.println(thing); 
  delay(100);
}
