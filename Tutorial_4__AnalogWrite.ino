int redPin=9;
int bright=125;

void setup()
{
  pinMode(redPin, OUTPUT);
  

}

void loop()
{
  analogWrite(redPin, bright);

}
