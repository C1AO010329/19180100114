#define SHORT 200
#define LONG 1000
#define PIN 13
char ch=' ';
void setup()
{
  Serial.begin(9600);
  Serial.println("Ready!");
  pinMode(PIN, OUTPUT);
  
}

void loop()
{
  delay(500);//字母间停顿
  if(Serial.available()>0)
  {
  ch=Serial.read();
  MorseOut(ch);
  }
}
void MorseOut(char c)
{
  c=tolower(c);
  switch(c)
  {
    case 'a':
      dot();
      pause();
      line();
      break;
    case 'b':
      line();
      pause();
      dot();
      pause();
      dot();
      pause();
      dot();
      break;
    case 'c':
      line();
      pause();
      dot();
      pause();
      line();
      pause();
      dot();
      break;
    case 'd':
      line();
      pause();
      dot();
      pause();
      dot();
      break;
    case 'e':
      dot();
      break;
    case 'f':
      dot();
      pause();
      dot();
      pause();
      line();
      pause();
      dot();
      break;
    case 'g':
      line();
      pause();
      line();
      pause();
      dot();
      break;
    case 'h':
      dot();
      pause();
      dot();
      pause();
      dot();
      pause();
      dot();
      break;
    case 'i':
      dot();
      pause();
      dot();
      break;
    case 'j':
      dot();
      pause();
      line();
      pause();
      line();
      pause();
      line();
      break;
    case 'k':
      line();
      pause();
      dot();
      pause();
      line();
      break;
    case 'l':
      dot();
      pause();
      line();
      pause();
      dot();
      pause();
      dot();
      break;
    case 'm':
      line();
      pause();
      line();
      break;
    case 'n':
      line();
      pause();
      dot();
      break;
    case 'o':
      line();
      pause();
      line();
      pause();
      line();
      break;
    case 'p':
      dot();
      pause();
      line();
      pause();
      line();
      pause();
      dot();
      break;
    case 'q':
      line();
      pause();
      line();
      pause();
      dot();
      pause();
      line();
      break;
    case 'r':
      dot();
      pause();
      line();
      pause();
      dot();
      break;
    case 's':
      dot();
      pause();
      dot();
      pause();
      dot();
      break;
    case 't':
      line();
      break;
    case 'u':
      dot();
      pause();
      dot();
      pause();
      line();
      break;
    case 'v':
      dot();
      pause();
      dot();
      pause();
      dot();
      pause();
      line();
      break;
    case 'w':
      dot();
      pause();
      line();
      pause();
      line();
      break;
    case 'x':
      line();
      pause();
      dot();
      pause();
      dot();
      pause();
      line();
      break;
    case 'y':
      line();
      pause();
      dot();
      pause();
      line();
      pause();
      line();
      break;
    case 'z':
      line();
      pause();
      line();
      pause();
      dot();
      pause();
      dot();
      break;
    default:
      segment();
      break;
  }
}
void dot()
{
  digitalWrite(PIN,HIGH);
  delay(SHORT);
  digitalWrite(PIN,LOW);
}
void line()
{
  digitalWrite(PIN,HIGH);
  delay(LONG);
  digitalWrite(PIN,LOW);
}

void pause()//短停顿
{
  digitalWrite(PIN,LOW);
  delay(SHORT);
}
void segment()//长停顿
{
  digitalWrite(PIN,LOW);
  delay(LONG);
}