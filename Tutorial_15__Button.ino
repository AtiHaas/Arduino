int buttonPin=8;
int ledPin=7;
int onoff1;
int onoff2;
int led=0;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
 onoff1=digitalRead(buttonPin);
  Serial.println(onoff1);
  
if (onoff1==1 && onoff2==0)
{
  if (led==0)
  {
    digitalWrite(ledPin, HIGH);
    led=1;
  }
  else
  {
    digitalWrite(ledPin, LOW);
    led=0;
  }
}
onoff2=onoff1;
}
