int Led = 12;
int pb = 2;
int b1 =7;

void setup()
{
  pinMode(Led, OUTPUT);
  pinMode(pb, INPUT_PULLUP);
  pinMode(b1, OUTPUT);
}

void loop()
{
  int buttonstate = digitalRead(pb);  
  if(buttonstate == HIGH)
  {
     digitalWrite(Led, HIGH);
  }
  else 
  {
     digitalWrite(Led, LOW);
     tone(b1, 500, 1000);
     delay(500);
  }
}