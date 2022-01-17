int pin=11;
int pin2=A0;
int myNumber;
String msg1="Please give as an intiger";
int wait =500;
int readVal;
void setup() 
{
 Serial.begin(9600);
 pinMode(pin, OUTPUT);
 pinMode(pin2, INPUT);

}

void loop() 
{
  readVal= analogRead(pin2);
  Serial.println(readVal);
 if(readVal>=1000)
{
  digitalWrite(pin, HIGH);
 
}
 if(1000>=readVal)
{
  digitalWrite(pin, LOW);
 
}
 
}
