
const int ledPin = 9; // the pin that the LED is attached to

void setup ()
{
  
}

void loop()
{
  for (int i = 0; i <= 255; i++) //loop from 0 to 255
  {
    analogWrite(ledPin, i); // set the brightness of pin 9:
    delay(8); //wait for 8 microseconds 
  }
  
  for (int i = 255; i >= 0; i--) //loop from 255 down to 0
  {
    analogWrite(ledPin, i); // set the brightness of pin 9:
    delay(8); //wait for 8 microseconds 
  }
  delay(800); //wait for 800 microseconds 
}

