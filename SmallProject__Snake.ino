// The variables for the joystick
int xPin=A0;
int yPin=A1;
int sPin=2;
int xVal; //x coorinate value of joystick
int yVal; //y coorinate value of joystick
int sVal; //switch value of joystick
//The variables for the paralell shift register
int dataPin=3;
int latchPin=4;
int clockPin=5;


//The variables for the 8x8 matrix
int y1Pin=6;
int y2Pin=7;
int y3Pin=8;
int y4Pin=9;
int y5Pin=10;
int y6Pin=11;
int y7Pin=12;
int y8Pin=13;

//Variables for the controlled dot
int xDot; //x coordinte of the controlled dot
int yDot; //y coordinte of the controlled dot
String msg1="please give the x coordinate of the dot";
String msg2="please give the y coordinate of the dot";
int numb=1; //Number to help revert to original position
byte LED; // HEX to paralell shift register
int n=0;  // number to help slow down the joytick controls

//Variables for the chasen dot
int xChase; //x coordinate of controlled dot
int yChase; //y coordinate of controlled dot
byte LED2;  // HEX to paralell shift register

// other variables
int dt=20; // delay time
int velocity=10; // How quickly the joytick makes the dot move
byte reset=0x00;

void setup() 
{
  Serial.begin(9600);
  //Setup for the joystick
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
  //Setup for the paralell shift register
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  //Setup for the 8x8 matrix
  pinMode(y1Pin, OUTPUT);
  pinMode(y2Pin, OUTPUT);
  pinMode(y3Pin, OUTPUT);
  pinMode(y4Pin, OUTPUT);
  pinMode(y5Pin, OUTPUT);
  pinMode(y6Pin, OUTPUT);
  pinMode(y7Pin, OUTPUT);
  pinMode(y8Pin, OUTPUT);
}

void loop() 
{

  //THE DOT THAT IS CONTROLLED BY THE JOYSTICK:
  if (numb==1)
  {
    xDot=1;
    yDot=1;
  }

  //Readding the joystick
  xVal=analogRead(xPin);
    yVal=analogRead(yPin);
    sVal=digitalRead(sPin);
    Serial.print(xVal);
    Serial.print(" ");
    Serial.print(yVal);
    Serial.print(" ");
    Serial.println(sVal);
  
  //Changing the coordinates of the dot
  if(xVal>=1000 || xVal<=100 || yVal>=1000 || yVal<=100) //Slowing mechanism
  {
    n=n+1;
  }

  if (n>=velocity) //Changing mechanism
  {
    
  
  if (xVal>=1000 && xDot>1)
  {
    xDot=xDot-1;
    numb=2;
    n=0;
  }

  if (xVal<=100 && xDot<8)
  {
    xDot=xDot+1;
    numb=2;
    n=0;
  }

  if (yVal>=1000 && yDot<8)
  {
    yDot=yDot+1;
    numb=2;
    n=0;
  }

  if (yVal<=100 && yDot>1)
  {
    yDot=yDot-1;
    numb=2;
    n=0;
  }
  //Jumpinp back to the strating point
  if (sVal == 0)
  {
    numb=1;
    n=0;
  }
}
  
  //Setting up the parelell shifter HEX value
  switch(xDot)
  {
    case 1:
    LED=0b11111110;
    break;

    case 2:
    LED=0b11111101;
    break;

    case 3:
    LED=0b11111011;
    break;

    case 4:
    LED=0b11110111;
    break;

    case 5:
    LED=0b11101111;
    break;

    case 6:
    LED=0b11011111;
    break;

    case 7:
    LED=0b10111111;
    break;

    case 8:
    LED=0b01111111;
    break;
    
  }

  //Setting up the arduiono pins
  switch(yDot)
  {
    case 1:
    digitalWrite(y1Pin, HIGH);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 2:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, HIGH);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 3:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, HIGH);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 4:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, HIGH);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 5:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, HIGH);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 6:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, HIGH);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 7:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, HIGH);
    digitalWrite(y8Pin, LOW);
    break;

    case 8:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, HIGH);
    break;

    default:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;
    
  }
  
  
  

  //Writing on the parallell shift register
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST,LED);
  digitalWrite(latchPin, HIGH);

  delay(dt);

  //RESETTING THE 8x8 MATRIX

  //Writing on the parallell shift register all to low
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST,reset);
  digitalWrite(latchPin, HIGH);

  //setting every pin to low
  digitalWrite(y1Pin, LOW);
  digitalWrite(y2Pin, LOW);
  digitalWrite(y3Pin, LOW);
  digitalWrite(y4Pin, LOW);
  digitalWrite(y5Pin, LOW);
  digitalWrite(y6Pin, LOW);
  digitalWrite(y7Pin, LOW);
  digitalWrite(y8Pin, LOW);
    
  // THE RANDOM DOT THAT IS BEING CHASED

  //Giving the random coordinates
  if (numb==1 || (xDot==xChase && yDot==yChase))
  {
    xChase=random(1,8);
    yChase=random(1,8);
    
  }

  //Making the chasen dot light up

   //Setting up the parelell shifter HEX value
  switch(xChase)
  {
    case 1:
    LED2=0b11111110;
    break;

    case 2:
    LED2=0b11111101;
    break;

    case 3:
    LED2=0b11111011;
    break;

    case 4:
    LED2=0b11110111;
    break;

    case 5:
    LED2=0b11101111;
    break;

    case 6:
    LED2=0b11011111;
    break;

    case 7:
    LED2=0b10111111;
    break;

    case 8:
    LED2=0b01111111;
    break;
    
  }

  //Setting up the arduiono pins
  switch(yChase)
  {
    case 1:
    digitalWrite(y1Pin, HIGH);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 2:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, HIGH);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 3:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, HIGH);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 4:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, HIGH);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 5:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, HIGH);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 6:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, HIGH);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;

    case 7:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, HIGH);
    digitalWrite(y8Pin, LOW);
    break;

    case 8:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, HIGH);
    break;

    default:
    digitalWrite(y1Pin, LOW);
    digitalWrite(y2Pin, LOW);
    digitalWrite(y3Pin, LOW);
    digitalWrite(y4Pin, LOW);
    digitalWrite(y5Pin, LOW);
    digitalWrite(y6Pin, LOW);
    digitalWrite(y7Pin, LOW);
    digitalWrite(y8Pin, LOW);
    break;
    
  }
  
  
  

  //Writing on the parallell shift register
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST,LED2);
  digitalWrite(latchPin, HIGH);

  delay(dt);
  

  

  

}
