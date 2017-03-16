// Police lights Pattern R/L - R/L
// write by Oleksandra Baga

const int ledPinBlueL = 10; 
const int ledPinBlueR = 9;
const int ledPinRedL = 6;
const int ledPinRedR = 5;

void setup ()
{
  
}

void loop()
{
  for (int i = 0; i < 2; i++)
  {
    analogWrite(ledPinBlueL, 255);
    analogWrite(ledPinRedR, 255);
    delay(300);
    analogWrite(ledPinBlueL, 0);
    analogWrite(ledPinRedR, 0);
    delay(300);
  }
  for (int i = 0; i < 2; i++)
  {
    analogWrite(ledPinBlueR, 255);
    analogWrite(ledPinRedL, 255);
    delay(300);
    analogWrite(ledPinBlueR, 0);
    analogWrite(ledPinRedL, 0);
    delay(300);
  }
}

