#include <Arduino.h>

void disp_7474(int D,int C,int B,int A)
{
  digitalWrite(2,A);
  digitalWrite(3,B);
  digitalWrite(4,C);
  digitalWrite(5,D);
}

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  int P=0;
  int Q=0;
  int R=0;

  int F=(!Q)&&(!R);

  if(F==1)
  {
    disp_7474(0,0,0,1);
  }
  else
  {
    disp_7474(0,0,0,0);
  }

  delay(1000);
}
