int mypin=A1;
int readVal;
float voltage;
int wait=250;
int pin2=8;
int warning=4;

void setup() {
  
Serial.begin(9600);
pinMode(mypin, INPUT);
pinMode(pin2, OUTPUT);

}

void loop() {
  readVal=analogRead(mypin);
  voltage=(5./1023.)*readVal;
  Serial.print( "potentiometer voltage is ");
  Serial.println(voltage);
  if(voltage >  warning)
  {
    digitalWrite(pin2, HIGH);
  }
  if (warning > voltage)
  {
    digitalWrite(pin2, LOW);
  }
  delay(wait);
  }
