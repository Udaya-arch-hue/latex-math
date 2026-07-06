/*
   Boolean Expression:
   Y = P ^ Q ^ R

   ESP32 Output Pins:
   GPIO16 -> 7447 A (LSB)
   GPIO17 -> 7447 B
   GPIO18 -> 7447 C
   GPIO19 -> 7447 D (MSB)

   Displays:
   Y = 0 -> 0
   Y = 1 -> 1
*/

#include <Arduino.h>

#define BCD_A 16
#define BCD_B 17
#define BCD_C 18
#define BCD_D 19

void displayDigit(int digit)
{
  digitalWrite(BCD_A, digit & 1);
  digitalWrite(BCD_B, (digit >> 1) & 1);
  digitalWrite(BCD_C, (digit >> 2) & 1);
  digitalWrite(BCD_D, (digit >> 3) & 1);
}

void setup()
{
  pinMode(BCD_A, OUTPUT);
  pinMode(BCD_B, OUTPUT);
  pinMode(BCD_C, OUTPUT);
  pinMode(BCD_D, OUTPUT);
}

void loop()
{
  // Generate all combinations of P,Q,R
  for (int i = 0; i < 8; i++)
  {
    bool P = (i >> 2) & 1;
    bool Q = (i >> 1) & 1;
    bool R = i & 1;

    // Option B: Y = P XOR Q XOR R
    bool Y = P ^ Q ^ R;

    if (Y)
      displayDigit(1);
    else
      displayDigit(0);

    delay(1000);
  }
}
