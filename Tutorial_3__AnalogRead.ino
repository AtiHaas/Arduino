int ReadPin=A3;
float V2=0;
int ReadVal=0;
int wait=500;

void setup() 
{
  pinMode(ReadPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  ReadVal=analogRead(ReadPin);
  V2=(5./1023.)*ReadVal;
  Serial.println(V2);
  delay(wait);
}
