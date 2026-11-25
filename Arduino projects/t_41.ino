#define Led 13;
#define knob A0;

void setup()
{
  	pinMode(Led, OUTPUT);
  	Serial.begin(9600);
}

void loop()
{
  int value = map((analogRead(A0);
  int ledpower = map(value,0,1023,0,240));
  Serial.println(value);
               
               
  analogWrite(Led, HIGH);
  delay(1000);
  
  analogWrite(Led, LOW);
  delay(1000);
  
}



