const int GatePin2 = 3; 
const int GatePin3 = 2;
const int LEDPin = 9;
int counter = 0;
int Blocked;
 
 
void setup()
{
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
attachInterrupt(GatePin2, LEDon, RISING);
attachInterrupt(GatePin3, LEDoff, FALLING); 
}
 
void loop(){
 
}
 
 
 void LEDon()
{
  digitalWrite(LEDPin, HIGH); 
  counter ++; 
  Serial.println("");
  Serial.print("LEDon Interruptions:");
  Serial.print(counter);
 
}
void LEDoff()
{
  digitalWrite(LEDPin, LOW); }
