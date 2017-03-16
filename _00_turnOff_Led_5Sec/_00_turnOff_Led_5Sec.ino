// Turning off the LED 
// by button press for 5 seconds

const int keyPin = 12; //the number of the key pin
const int ledPin = 13;//the number of the led pin

void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input 
  pinMode(ledPin,OUTPUT);//initialize the led pin as output
}
/**********************************/
void loop()
{
  //read the state of the key value
  //and check if the kye is pressed
  //if it is,the state is HIGH 
  
  if(digitalRead(keyPin) == HIGH )
  {
   digitalWrite(ledPin,LOW);//turn on the led
   delay(5000); // wait 5 seconds
  }
  
  else
  {
   digitalWrite(ledPin,HIGH);//turn off the led
  }
}

