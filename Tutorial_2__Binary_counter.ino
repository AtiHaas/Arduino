int Pin1=10;
int Pin2=11;
int Pin3=12;
int Pin4=13;
int wait=1000;

void setup() 
{
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
}

void loop() 
{
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,LOW );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,LOW);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,LOW );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  digitalWrite(Pin1,HIGH );
  digitalWrite(Pin2,HIGH);
  digitalWrite(Pin3,HIGH);
  digitalWrite(Pin4,HIGH );
  delay(wait);
  
}
