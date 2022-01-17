int pin1=7;
int pin3=A0;
int lightVal;
int wait;
void setup()
{
 Serial.begin(9600);
 pinMode(pin1, OUTPUT);
 pinMode(pin3, INPUT);
}

void loop() 
{
 lightVal= analogRead(pin3);
 Serial.println(lightVal);
 wait= lightVal * (9960./1023)+60;
 digitalWrite(pin1, HIGH);
 delay(wait);
 digitalWrite(pin1, LOW);
 delay(wait);
}
