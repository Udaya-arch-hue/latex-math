#include <Arduino.h>

int P=0,Q=0,R=0;
int D,C,B,A;

void disp_7447(int D,int C,int B,int A)
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
  int F=(!Q)&&(!R);

  if(F==1)
  {
    A=1;
    B=0;
    C=0;
    D=0;
  }
  else
  {
    A=0;
    B=0;
    C=0;
    D=0;
  }

  disp_7447(D,C,B,A);
}
