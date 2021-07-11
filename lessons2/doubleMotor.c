char ch=' ';
int i=0;
void setup()
{
  Serial.begin(9600);
  for(i=0;i<14;i++)
    pinMode(i,OUTPUT);
  Serial.println("Ready!");
}
/*
约定
'g'表示前进
'b'表示后退
'r'表示右转
'l'表示左转
's'表示停止
*/
void loop()
{
  digitalWrite(13,LOW);
  if(Serial.available()>0)
  {
  ch=Serial.read();
  }
  switch(ch)
  {
    case 'g':
    	digitalWrite(2,LOW);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,LOW);
    	digitalWrite(10,LOW);
    	digitalWrite(11,LOW);
    	digitalWrite(12,LOW);
    	digitalWrite(6,HIGH);
  		digitalWrite(7,LOW);
  		digitalWrite(8,HIGH);
  		digitalWrite(9,LOW);
    	break;
    case 'b':
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,LOW);
    	digitalWrite(5,HIGH);
    	digitalWrite(10,HIGH);
    	digitalWrite(11,LOW);
    	digitalWrite(12,HIGH);
    	digitalWrite(7,HIGH);
  		digitalWrite(6,LOW);
  		digitalWrite(9,HIGH);
  		digitalWrite(8,LOW);
    	break;
    case 'r':
        digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
    	digitalWrite(10,LOW);
    	digitalWrite(11,LOW);
    	digitalWrite(12,HIGH);
   	 	digitalWrite(7,HIGH);
        digitalWrite(6,LOW);
     	digitalWrite(8,HIGH);
  		digitalWrite(9,LOW);
   	 	break;
    case 'l':
        digitalWrite(2,LOW);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,LOW);
    	digitalWrite(10,LOW);
    	digitalWrite(11,HIGH);
    	digitalWrite(12,HIGH);
        digitalWrite(6,HIGH);
  		digitalWrite(7,LOW);
    	digitalWrite(9,HIGH);
  		digitalWrite(8,LOW);
    	break;
    case 's':
        digitalWrite(2,HIGH);
    	digitalWrite(3,LOW);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
    	digitalWrite(10,LOW);
    	digitalWrite(11,HIGH);
    	digitalWrite(12,HIGH);
    	digitalWrite(6,LOW);
  		digitalWrite(7,LOW);
  		digitalWrite(8,LOW);
  		digitalWrite(9,LOW);
    	break;
    default:
    	break;
  }
}