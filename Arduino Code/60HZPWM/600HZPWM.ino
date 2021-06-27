int frequency = 60; // frequency in Hertz

int period = 1000/frequency;

void setup() 
{
 
pinMode(11, OUTPUT);
}

void loop() 
{
 digitalWrite(11, LOW);
 delay(period);

 digitalWrite(11, HIGH);
 delay(period);
}
