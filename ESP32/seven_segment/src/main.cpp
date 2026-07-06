/*
   ESP32
   Boolean Function:
   F = P ⊕ Q ⊕ R

   Display:
   F = 0  --> Displays 0
   F = 1  --> Displays 1

   Inputs P,Q,R are generated automatically.
*/

#include <Arduino.h>

int segA = 13;
int segB = 12;
int segC = 14;
int segD = 27;
int segE = 26;
int segF = 25;
int segG = 33;

void display0()
{
  // Common Anode (LOW = ON)
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
}

void display1()
{
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 8; i++)
  {
    bool P = (i >> 2) & 1;
    bool Q = (i >> 1) & 1;
    bool R = i & 1;

    // Boolean Expression (Option B)
    bool Y = P ^ Q ^ R;

    if(Y)
      display1();
    else
      display0();

    delay(1000);
  }
}

