int pin=8;
int pin2=A0;
int readVal;

float t1=1;
int j;

void setup() 
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  pinMode(pin2, INPUT);
  
}

void loop() 
{
  readVal=analogRead(pin2);
  t1 = readVal *(9940./1023.)+60;

  
  digitalWrite(pin, HIGH);
  delayMicroseconds(t1);
  digitalWrite(pin, LOW);
  delayMicroseconds(t1);
}
