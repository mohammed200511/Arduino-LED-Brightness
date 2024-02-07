// C++ code
//
int x = 5 ;
int y = 0 ;
void setup()
{
  pinMode(3,OUTPUT);
}

void loop()
{
y = y+x ;
analogWrite(3,y);
  delay(30);
  if (y<=0 || y>=255){
  x = -x ;
  }
}