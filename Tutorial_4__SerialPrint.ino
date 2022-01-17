int j=1;
int wait=750;
int x=3;
int y=7;
int z;
String myString=" + ";
void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  z=x+y;
  Serial.print(x);
  Serial.print(myString);
  Serial.print(y);
  Serial.print(" = ");
  Serial.println(z);
  delay(wait);
  

}
