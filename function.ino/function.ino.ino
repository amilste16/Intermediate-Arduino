#include <Servo.h>
Servo myservo;
int trigPin = 6;
int echoPin = 7;
long duration, cm, inches, distance;
void setup()
{
	myservo.attach(9);
	Serial.begin(9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

void loop()
{
	Serial.println(getdist());
	if (getdist() < 5)
		myservo.write(151);
	else
		if (getdist() < 10)
			myservo.write(60);
	else
		myservo.write(90);
}

int getdist()
{
	digitalWrite(trigPin, LOW);
	delayMicroseconds(5);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	pinMode(echoPin, INPUT);
	duration = pulseIn(echoPin, HIGH);
	distance = (duration *.0343) /2;
	return distance;
}
