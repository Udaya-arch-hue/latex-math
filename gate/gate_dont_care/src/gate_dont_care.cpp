#include <Arduino.h>

int A=2;
int B=3;
int C=4;
int D=5;

void setup()
{
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
}

void loop()
{
int P=1;
int Q=1;
int R=1;

int F=(!Q)&&((!P)||(!R));

if(F==1)
{
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}
else
{
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}

delay(1000);
}
