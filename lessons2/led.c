int i=0;
int j=0;
void setup()
{
  for(i=0;i<11;i++)
  pinMode(i,OUTPUT); //pinMode设置引脚模式
}

void loop()
{
  for(i=0;i<11;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(11-i,HIGH);
 	delay(70);
  	digitalWrite(i, LOW);
    digitalWrite(11-i,LOW);
  	delay(70);
  }
}