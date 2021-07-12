char ch=' ';
int i=0;
void setup()
{
  Serial.begin(9600);
  for(i=0;i<14;i++)
    pinMode(i,OUTPUT);
  Serial.println("Ready!");
}
void loop()
{
  if(Serial.available()>0)
  {
  ch=Serial.read();
    ch=ch-'0';
  }
  switch(ch)
  {
    case 0:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,LOW);
    	break;
    case 1:
    	digitalWrite(2,LOW);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    	digitalWrite(7,LOW);
    	digitalWrite(8,LOW);
    	break;
    case 2:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,LOW);
    	digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
    	digitalWrite(7,LOW);
    	digitalWrite(8,HIGH);
   	 	break;
    case 3:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
    	digitalWrite(7,LOW);
    	digitalWrite(8,HIGH);
    	break;
    case 4:
        digitalWrite(2,LOW);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,HIGH);
    	break;
    case 5:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,LOW);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,HIGH);
    	break;
    case 6:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,LOW);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,HIGH);
    	break;
    case 7:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    	digitalWrite(7,LOW);
    	digitalWrite(8,LOW);
   	 	break;
    case 8:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,HIGH);
    	break;
    case 9:
    	digitalWrite(2,HIGH);
    	digitalWrite(3,HIGH);
    	digitalWrite(4,HIGH);
    	digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
    	digitalWrite(7,HIGH);
    	digitalWrite(8,HIGH);
    default:
    	break;
  }
}