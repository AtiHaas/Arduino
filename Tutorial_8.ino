int myNumber;
int j;
int pin=7;
int wait=500;
String msg="Please enter the number of blinks you desire";
String msg2= "Your number is ";
void setup() 
{
  
Serial.begin(9600);
pinMode(pin, OUTPUT);
}

void loop() 
{
 Serial.println(msg);
 while (Serial.available ()==0)
 {
  
 }
 myNumber=Serial.parseInt ();
 j=1;
 while (j<=myNumber)
 {
  digitalWrite(pin, HIGH);
  delay(wait);
  digitalWrite(pin, LOW);
  delay(wait);
  j=j+1;
 }
}
