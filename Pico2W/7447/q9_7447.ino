#include <Arduino.h>

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

pinMode(10,INPUT_PULLDOWN);
pinMode(11,INPUT_PULLDOWN);
pinMode(12,INPUT_PULLDOWN);
}

void loop()
{
int P=digitalRead(10);
int Q=digitalRead(11);
int R=digitalRead(12);

int F=P^Q^R;

if(F==1)
{
disp_7447(0,0,0,1);
}
else
{
disp_7447(0,0,0,0);
}
}
