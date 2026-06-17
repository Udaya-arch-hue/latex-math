#include <Arduino.h>

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);
  digitalWrite(8,g);
}

void setup()
{
  for(int i=2;i<=8;i++)
    pinMode(i,OUTPUT);

  pinMode(10,INPUT_PULLDOWN); // P
  pinMode(11,INPUT_PULLDOWN); // Q
  pinMode(12,INPUT_PULLDOWN); // R
}

void loop()
{
  int P = digitalRead(10);
  int Q = digitalRead(11);
  int R = digitalRead(12);

  int F = P ^ Q ^ R;   // Q9 Answer (B)

  if(F == 1)
  {
    sevenseg(1,0,0,1,1,1,1);   // Display 1
  }
  else
  {
    sevenseg(0,0,0,0,0,0,1);   // Display 0
  }

  delay(100);
}


