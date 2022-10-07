#define Do 262  
#define Re 294  
#define Mi 330  
#define Fa 349  
#define Sol 392  
#define La 440  
#define Si 494  
#define Do_h 523  
#define Re_h 587  
#define Mi_h 659  
#define Fa_h 698  
#define Sol_h 784  
#define La_h 880  
#define Si_h 988
int length;
int scale[]={Sol,Sol,La,Sol,Do_h,Si,
             Sol,Sol,La,Sol,Re_h,Do_h,
             Sol,Sol,Sol_h,Mi_h,Do_h,Si,La,
             Fa_h,Fa_h,Mi_h,Do_h,Re_h,Do_h};      
float durt[]=
{
  0.5,0.5,1,1,1,1+1,
  0.5,0.5,1,1,1,1+1,
   0.5,0.5,1,1,1,1,1,
    0.5,0.5,1,1,1,1+1,};               

const int potPin = A0;                                   
int piezo = 8;  
int LED = 13;

int reading = 0;
int angle = 0; 
void setup()
{
  pinMode(piezo,OUTPUT);
  pinMode(LED,OUTPUT);
  length=sizeof(scale)/sizeof(scale[0]);  
}
void loop()
{
  reading = analogRead(potPin);     
  angle = reading / 6;              
  if (reading >25 && reading <= 512) {
  for(int x=0;x<length;x++)
  {
    tone(piezo,scale[x]);
    digitalWrite(LED,HIGH);
    delay(500*durt[x]);  
    digitalWrite(LED,LOW);
    delay(100*durt[x]);
    noTone(piezo);
  }

}
}
