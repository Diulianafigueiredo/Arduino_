const byte RED = 11;
const byte BLUE = 10;
const byte GREEN = 9;

void setup()
{
  pinMode(RED, OUTPUT );
  pinMode(BLUE, OUTPUT );
  pinMode(GREEN, OUTPUT );
}
void loop()
{
  
  analogWrite(RED,100);
  analogWrite(BLUE,0);
  analogWrite(GREEN,0);
  delay(100);
  
  
  analogWrite(RED,0);
  analogWrite(BLUE,100);
  analogWrite(GREEN,0);
  delay(100);
  
  
  analogWrite(RED,50);
  analogWrite(BLUE,0);
  analogWrite(GREEN,100);
  delay(100);
  
  analogWrite(RED,255);
  analogWrite(BLUE,255);
  analogWrite(GREEN,255);
  delay(100);


}