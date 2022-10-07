#include <Servo.h> // include Arduino Servo library

const int potPin = A0;  // create potPin variable, assign pin A0
const int servoPin = 9;  // create servoPin variable, assign 9
const int LED = 4;  // create LED variable, assign 4
const int LED2 = 7;

int reading = 0; //variable to track potentiometer reading
int angle = 0; // variable to track motor angle between 0-180 degrees

Servo servo; // create Servo object

void setup() {
  servo.attach(servoPin);  //attach servo variable to control pin
  pinMode (LED, OUTPUT);  //set LED pin as output
  pinMode (LED2, OUTPUT); 
  Serial.begin(9600);  //begin serial communication at 9600 baud rate
}

void loop() {
  reading = analogRead(potPin);     // reads pot 0 to 1023
  angle = reading / 6;              // reduces pot value to 0 to 180-ish to match servo range
  if (reading >25 && reading <= 512) { // if pot value between 25 and half

    //*******modify the LED behavior to do something else*********
    digitalWrite (LED, HIGH);  // write HIGH voltage to LED pin
    delay (50);  // delay 1/2 a second
    digitalWrite (LED, LOW);  // write no/LOW voltage to LED pin
    delay (50);

  } else if (reading > 512 && reading <= 815) {  // else if pot value between half and max
    //********modify the sweep's speed and range***************

    // sweep 0 to 180
    for (angle = 0; angle < 150; angle++) {
      servo.write(angle);
      delay(10);
    }
    // sweep 180 to 0
    for (angle = 150; angle > 0; angle--) {
      servo.write(angle);
      delay(20);
    }
  }else if (reading > 815 && reading <= 1000){
    digitalWrite(LED2,HIGH);
    delay(50);
    digitalWrite(LED2,LOW);
    delay(50);
  }else {
  }
    digitalWrite (LED, LOW);  // write no/LOW voltage to LED pin
    digitalWrite (LED2, LOW);
  }
