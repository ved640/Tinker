int red = 13;
int blue = 12;
int orange = 8;
int yellow = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(yellow, OUTPUT);

}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);

  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);
  delay(1000);
  
  digitalWrite(orange, HIGH);
  delay(1000);
  digitalWrite(orange, LOW);
  delay(1000);
 
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
}