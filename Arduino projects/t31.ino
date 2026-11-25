int baseTemp =0;
int celsius=0;
int faranheit=0;
int led1=12, led2=8, led3=7;
int b1 = 13;

void setup()
{
	pinMode(A0, INPUT);
  	Serial.begin(9600);
  	pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);
  	pinMode(led3, OUTPUT);
  	pinMode(b1, OUTPUT);
}

void loop()
{

	baseTemp = 30;
      
 	celsius = map(((analogRead(A0)-20)*3.04),0,1023,-40,125);
  	faranheit = ((celsius*9)/5+32);
  	Serial.print(celsius);
  
  	Serial.print("C");
  	Serial.print(faranheit);
  
  	Serial.println("F");
  	
  	if(celsius < baseTemp) 
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW); 
    }
  	if(celsius>= baseTemp && celsius < baseTemp+10)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW); 
      
    }
  	if(celsius>= baseTemp+10 && celsius < baseTemp+20)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      
    }
  	if(celsius>= baseTemp+20 && celsius < baseTemp+30)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH); 
    }
  delay(1000);
  
    if(celsius>= baseTemp+30)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH); 
      tone(b1, 500, 1000);
    }
}