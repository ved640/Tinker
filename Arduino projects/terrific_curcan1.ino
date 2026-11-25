#include<Servo.h>

Servo myServo;
int pb=2;
int red=12;
int green=13;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pb, INPUT_PULLUP);
  myServo.attach(9);
  
}

void loop()
{
  
  int b_status=digitalRead(pb);
  
  
  if(b_status==HIGH)
  {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    myServo.write(90);
  }  
  else
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    myServo.write(0);
  }
}