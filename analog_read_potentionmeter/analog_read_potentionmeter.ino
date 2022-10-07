const int photo = A0;
const int sensor = A1;
const int LED1 = 11;
const int LED2 = 10;
const int LED3 = 6;
const int LED4 = 5;
int value = 0;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensor);
  delay(10);
  value = value/4;
  analogWrite(LED1,value);
  analogWrite(LED2,value);
  Serial.println(value);

  value = analogRead(photo);
  delay(10);
  value = value/4;
  analogWrite(LED3,value);
  analogWrite(LED4,value);
  
  
}
