//Use comments to make code more readable.
//Comments get ignored when the program runs.

const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;

void setup() {
  // put your setup code here, to run once:
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(LED1,HIGH);
 delay(1000);
 digitalWrite(LED1,LOW);
 delay(1000);
 
 digitalWrite(LED2,HIGH);
 delay(2000);
 digitalWrite(LED2,LOW);
 delay(2000);
 
  digitalWrite(LED3,HIGH);
 delay(2000);
 digitalWrite(LED3,LOW);
 delay(2000);
 
  digitalWrite(LED4,HIGH);
 delay(1000);
 digitalWrite(LED4,LOW);
 delay(1000);
}
