int potVal;
int wait=100;
int pin1=A1;
int pin2=7;

void setup() 
{
Serial.begin(9600);
pinMode( pin1, INPUT);
pinMode( pin2, OUTPUT);

}

void loop() 
{
  potVal=analogRead(pin1);
  Serial.println(potVal);
  delay(wait);

  while (potVal > 1000)
  {
    digitalWrite(pin2, HIGH);
    potVal=analogRead(pin1);
    Serial.println(potVal);
  delay(wait);
  }
  digitalWrite(pin2, LOW);
}
