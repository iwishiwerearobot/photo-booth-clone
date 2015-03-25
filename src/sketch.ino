#define irLED 12
#define button 2
#define GREEN1 4
#define GREEN2 5
#define YELLOW1 6
#define RED1 7

void setup()
{
  pinMode(button,INPUT);
  pinMode(irLED,OUTPUT);
  pinMode(GREEN1,OUTPUT);
  pinMode(GREEN2,OUTPUT);
  pinMode(YELLOW1,OUTPUT);
  pinMode(RED1,OUTPUT);
}

void loop()
{
  if (digitalRead(button) == HIGH)
  {
    //TURN ON ALL LEDS MINUS THE IRLED
    delay(2000);
    //TURN OFF ALL LEDS MINUS THE IRLED
    startSeq();
  }
}

void startSeq()
{
  for(int i=0; i<4; i++)
  {
   digitalWrite(GREEN1, HIGH);
   delay(1333);
   digitalWrite(GREEN2, HIGH);
   delay(1333);
   digitalWrite(YELLOW1, HIGH);
   delay(1333);
   digitalWrite(RED1, HIGH);
   delay(1000);
   fireIR();
   digitalWrite(RED1, LOW);
   digitalWrite(YELLOW1, LOW);
   digitalWrite(GREEN2, LOW);
   digitalWrite(GREEN1, LOW);
   delay(500);
  }
}

void fireIR()
{
  for(int i=0; i<16; i++)
  {
    digitalWrite(irLED, HIGH);
    delayMicroseconds(11);
    digitalWrite(irLED, LOW);
    delayMicroseconds(11);
  }
  delayMicroseconds(7330);
  for(int i=0; i<16; i++)
  {
    digitalWrite(irLED, HIGH);
    delayMicroseconds(11);
    digitalWrite(irLED, LOW);
    delayMicroseconds(11);
  }
}
