#include<Servo.h>

const int potPin = A0;
const int servoPin = 9;

Servo servo;

int reading = 0;
int angle = 0;

void setup() {
  servo.attach(servoPin); 

}

void loop() {
 reading = analogRead(potPin);
 angle = reading / 6;
 servo.write(angle);
 
}
