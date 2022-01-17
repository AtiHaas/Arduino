int redPin=9;
int yellowPin=6;
int yellowTime=500;
int redTime=500;
int yellowBlink=3;
int redBlink=5;
int j;
void setup() 
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

}

void loop() 
{
  for(j=1; yellowBlink >= j ; j=j+1)
  {
 digitalWrite(yellowPin, HIGH);
 delay(yellowTime);
 digitalWrite(yellowPin, LOW);
 delay(yellowTime);
  }
 

 for (j=1; redBlink >= j ; j=j+1)
 {
  digitalWrite(redPin, HIGH);
 delay(redTime);
 digitalWrite(redPin, LOW);
 delay(redTime);
 }
 

}
