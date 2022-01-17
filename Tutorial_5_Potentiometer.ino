int VoltPin=A1;
int ReadVal=0;
float voltage=0;
int waitt=500;

void setup()
{
  Serial.begin(9600);
  pinMode(VoltPin, INPUT);
  
}

void loop()
{
  ReadVal=analogRead(VoltPin);
  voltage=(5./1023.)*ReadVal;
  Serial.print("the voltage is = ");
  Serial.println(voltage);
  delay(waitt);
  
}
