int pinRed=11;
int pinGreen=9;
int pinBlue=10;
String color;
String msg1="What color would you like to see?";

void setup() 
{
  Serial.begin(9600);
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
}

void loop() 
{
 Serial.println(msg1);
 while(Serial.available()==0)
 {
  
 }
color=Serial.readString();

if (color == "red")
{
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}
if (color == "green")
{
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, HIGH);
  digitalWrite(pinBlue, LOW);
}
if (color == "blue")
{
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, HIGH);
}
if (color == "aqua")
{
  digitalWrite(pinRed, LOW);
  analogWrite (pinGreen, 255);
  analogWrite (pinBlue, 155);
}
if (color == "yellow")
{
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 255);
  analogWrite(pinBlue, 0);
}
if (color == "cyan")
{
  analogWrite(pinRed, 0);
  analogWrite(pinGreen, 255);
  analogWrite(pinBlue, 255);
}
if (color == "magenta")
{
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 255);
}
  
}
