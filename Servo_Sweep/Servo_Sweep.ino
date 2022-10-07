#include <Servo.h> 
const int photo = A1;
const int potPin = A0; 
const int servoPin = 9;
const int LED = 4;  
const int LED2 = 2;
const int LED3 = 8;
const int LED4 = 7;
int value = 0;
int readingPot = 0;
int readingPhoto = 0; 
int angle = 0; 
Servo servo; 
void setup() {
  servo.attach(servoPin); 
  pinMode (LED, OUTPUT);  
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  Serial.begin(9600);  
}
void loop() {
  
  readingPot = analogRead(potPin);                
  if (readingPot >25 && readingPot <= 512) { 
  digitalWrite (LED, HIGH);
    delay (50);
    digitalWrite (LED, LOW);
    delay (50);
    digitalWrite (LED2, HIGH);
    delay (50);
    digitalWrite (LED2, LOW);
    delay (50);
    
  value = analogRead(photo);
  delay(10);
  value = value / 4;
  analogWrite(LED,value);
  delay(10);
  analogWrite(LED2,value);
  analogWrite(LED3,value);
  analogWrite(LED4,value);
  delay(10);
  Serial.println(value);
  
  } else if (readingPot > 512 && readingPot <= 815) {  
   
    for (angle = 0; angle < 150; angle++) {
      servo.write(angle);
      delay(10);
    }
    
    for (angle = 150; angle > 0; angle--) {
      servo.write(angle);
      delay(20);
    }
  }else if (readingPot > 815 && readingPot <= 1000){
    digitalWrite (LED3, HIGH);
    delay (50);
    digitalWrite (LED3, LOW);
    delay (50);
    digitalWrite (LED4, HIGH);
    delay (50);
    digitalWrite (LED4, LOW);
    delay (50);
  value = analogRead(photo);
  delay(10);
  value = value / 4;
  analogWrite(LED,value);
  analogWrite(LED2,value);
  delay(10);
  analogWrite(LED3,value);
  delay(10);
  analogWrite(LED4,value);
  Serial.println(value);
  }else {
  }
    digitalWrite (LED, LOW);  
    digitalWrite (LED2, LOW);
    digitalWrite (LED3, LOW);
    digitalWrite (LED4, LOW);

  }
