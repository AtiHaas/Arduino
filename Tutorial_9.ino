String myColor;
int pin1=7;
int pin2=8;
int pin3=9;
int wait=1000;
String msg1= "What color LED would you like to light up?";
String msg2= "Plese enter a color that is available";

void setup()
{
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);

}

void loop() 
{
  Serial.println (msg1);
  while (Serial.available ()==0)
  {
    
  }
myColor= Serial.readString();
 if (myColor == "Yellow")
 {
  digitalWrite(pin2, HIGH);
  digitalWrite(pin1, LOW);
  digitalWrite(pin3, LOW);
 }
  if (myColor == "Red")
 {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin2, LOW);
  
 }
  if (myColor == "Green")
 {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  
 }
  
}
