#include <NewPing.h>
#define TRIGGER_PIN 6
#define ECHO_PIN 7
#define MAX_DISTANCE 200

NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
int sswitch = 2;
const int trigPin = 6;
const int echoPin = 7;
long duration;
int distance;
void setup()
{
	Serial.begin(9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	pinMode(sswitch, INPUT);
}

void loop()
{
	if (digitalRead(sswitch) == HIGH)
	{

		distance = myHCSR04.ping_cm();
		Serial.print("Distance: ");
		Serial.println(distance);
		return distance;
	}
	if (digitalRead(sswitch) == LOW)
	{
		//Serial.println("off");
	}
}
