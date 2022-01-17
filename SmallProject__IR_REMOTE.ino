#include <IRremote.h>
int IRpin=9;
int redPin=A2;
int greenPin=A1;
int bluePin=A0;
int redVal;
int blueVal;
int greenVal;
IRrecv IR(IRpin);
decode_results cmd;
int myCom;

void setup() 
{
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  
}

void loop() 
{
  while (IR.decode(&cmd) ==0)
  {
    
  }
Serial.println(cmd.value, HEX);
delay(1500);
IR.resume();
switch (cmd.value)
{
  case 0xFF6897:
  myCom=0;
  Serial.println("You pressed zero");
  break;
  
  case 0xFF30CF:
  myCom=1;
  Serial.println("You pressed one");
  break;

  case 0xFF18E7:
  myCom=2;
  Serial.println("You pressed two");
  break;

  case 0xFF7A85:
  myCom=3;
  Serial.println("You pressed three");
  break;

  case 0xFF10EF:
  myCom=4;
  Serial.println("You pressed four");
  break;

  case 0xFF38C7:
  myCom=5;
  Serial.println("You pressed five");
  break;

  case 0xFF5AA5:
  myCom=6;
  Serial.println("You pressed six");
  break;

  case 0xFF42BD:
  myCom=7;
  Serial.println("You pressed seven");
  break;

  case 0xFF4AB5:
  myCom=8;
  Serial.println("You pressed eight");
  break;

  case 0xFF52AD:
  myCom=9;
  Serial.println("You pressed nine");
  break;

  
}
if (myCom ==0)
{
  redVal=255;
  blueVal=0;
  greenVal=0;
}

if (myCom ==1)
{
  redVal=0;
  blueVal=255;
  greenVal=0;
}

if (myCom ==2)
{
  redVal=0;
  blueVal=0;
  greenVal=255;
}

if (myCom ==3)
{
  redVal=255;
  blueVal=255;
  greenVal=255;
}

if (myCom=7) //dimming
{
  if (redVal>50)
  {
    redVal=redVal-40;
  }
  if (blueVal>50)
  {
    blueVal=blueVal-40;
  }
  if (greenVal>50)
  {
    greenVal=greenVal-40;
  }
}

if (myCom=9) //brighten
{
  if (redVal<210)
  {
    redVal=redVal+40;
  }
  if (blueVal<210)
  {
    blueVal=blueVal+40;
  }
  if (greenVal<210)
  {
    greenVal=greenVal+40;
  }
}

analogWrite(redPin, redVal);
analogWrite(bluePin, blueVal);
analogWrite(greenPin, greenVal);







}
