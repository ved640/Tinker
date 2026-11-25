
int pb=5;

void setup()
{
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int bs=digitalRead(5);
  
  if(bs==HIGH)
  {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
  }  
  else
  {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
}