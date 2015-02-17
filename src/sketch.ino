
#define irLED 12
#define button 2

void setup()
{
  pinMode(button,INPUT);
  pinMode(irLED,OUTPUT);
}

void loop()
{
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

