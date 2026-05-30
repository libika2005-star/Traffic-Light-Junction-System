// C++ code
//
int r1 =13;
int y1 =12;
int g1 =11;

int r2 =10;
int y2=9;
int g2=8;

void setup()
{
 pinMode(r1,OUTPUT);
 pinMode(y1,OUTPUT);
 pinMode(g1,OUTPUT);
  
 pinMode(r2,OUTPUT);
 pinMode(y2,OUTPUT);
 pinMode(g2,OUTPUT);
}

void loop()
{
  digitalWrite(g1,HIGH);
  digitalWrite(r2,HIGH);
  delay(5000);
  digitalWrite(g1,LOW);
  digitalWrite(y1,HIGH);
  delay(2000);
  digitalWrite(y1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(g2,HIGH);
  digitalWrite(r1,HIGH);
  delay(5000);
  digitalWrite(g2,LOW);
  digitalWrite(y2,HIGH);
  delay(2000);
  digitalWrite(y2,LOW);
  digitalWrite(r1,LOW);
}