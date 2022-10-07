const int piezo = 2;

const int LED1 = 10;
const int LED2 = 9;
const int LED3 = 8;
const int LED4 = 7;
const int LED5 = 6;
const int LED6 = 5;
const int LED7 = 4;
const int LED8 = 11;
const int LED9 = 12;

void setup() {
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(LED3,OUTPUT);
   pinMode(LED4,OUTPUT);
   pinMode(LED5,OUTPUT);
   pinMode(LED6,OUTPUT);
   pinMode(LED7,OUTPUT);
   pinMode(LED8,OUTPUT);
   pinMode(LED9,OUTPUT);

}

void loop() {
  tone(piezo,262,1000);
  digitalWrite(LED1,HIGH);
  delay(1000);
  
  tone(piezo,294,1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(1000);
  
  tone(piezo,330,1000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(1000);
  
  tone(piezo,349,1000);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  delay(1000);
  
  tone(piezo,392,1000);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  delay(1000);
  
  tone(piezo,440,1000);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,HIGH);
  delay(1000);
  
  tone(piezo,494,1000);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,HIGH);
  delay(1000);
  digitalWrite(LED7,LOW);
  delay(1000);
  delay(3000);
}
