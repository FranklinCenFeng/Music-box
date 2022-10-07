const int buttonPin = 2;
const int LED1 = 11;
const int LED2 = 10;
const int LED3 = 9;
const int LED4 = 6;

int buttonState = 0;

void setup() {
  pinMode(LED1, OUTPUT);  
  pinMode(LED2, OUTPUT);  
  pinMode(LED3, OUTPUT);  
  pinMode(LED4, OUTPUT);  
  pinMode(buttonPin, INPUT);  
}

// loop function runs infinitely
void loop() {
  buttonState = digitalRead(buttonPin);
  delay(10);

 if (buttonState == HIGH){
  analogWrite(LED1, 0);  
  analogWrite(LED2, 225);  
  analogWrite(LED3, 225);   
  analogWrite(LED4, 0);  
  delay(1000);   
  
  analogWrite(LED1, 40);  
  analogWrite(LED2, 215);  
  analogWrite(LED3, 205);   
  analogWrite(LED4, 40);  
  delay(1000);    
            
  analogWrite(LED1, 64);   
  analogWrite(LED2, 191); 
  analogWrite(LED3, 191); 
  analogWrite(LED4, 64); 
  delay(1000);           
      
  analogWrite(LED1, 127);  
  analogWrite(LED2, 127);
  analogWrite(LED3, 127);
  analogWrite(LED4, 127); 
  delay(2000);         
       
  analogWrite(LED1, 191);  
  analogWrite(LED2, 64); 
  analogWrite(LED3, 64); 
  analogWrite(LED4, 191);  
  delay(1000);       
          
  analogWrite(LED1, 225);  
  analogWrite(LED2, 40);  
  analogWrite(LED3, 40);  
  analogWrite(LED4, 225);  
  delay(1000);

  analogWrite(LED1, 225);  
  analogWrite(LED2, 0);  
  analogWrite(LED3, 0);   
  analogWrite(LED4, 225);  
  delay(1000);   
 }
  else{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  delay(1000);
                  
  }
}
