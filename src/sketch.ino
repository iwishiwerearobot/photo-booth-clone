
#define irLED 12
#define button 2

void setup()
{
  pinMode(button,INPUT);
  pinMode(irLED,OUTPUT);
}

void loop()
{
  if (digitalRead(button) == HIGH)
  {
    delay(2000);
    startSeq();
  }
}

void startSeq()
{
  for(int i-0; i<4; i++)
  {
   fireIR();
   delay(5000);
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
