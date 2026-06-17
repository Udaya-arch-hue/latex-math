#include <Arduino.h>

void setup()
{
  pinMode(1, OUTPUT);   // LED on GP1
}

void loop()
{
  int P=1;
  int Q=0;
  int R=0;

  int F=P^Q^R;
  digitalWrite(1, F);
}

