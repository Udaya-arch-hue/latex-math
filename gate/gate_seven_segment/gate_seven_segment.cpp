#include <Arduino.h>

int P = 0, Q = 0, R = 0;

void sevenseg(int a, int b, int c, int d, int e, int f, int g)
{
  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);
}

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);

  // Q31 : F = (Q + R)'
  int F = (!Q) && (!R);

  if(F == 1)
  {
    // Display 0
    sevenseg(1,1,1,1,1,1,0);
  }
  else
  {
    // Display 1
    sevenseg(0,1,1,0,0,0,0);
  }

  digitalWrite(13, LOW);
  delay(100);
}
