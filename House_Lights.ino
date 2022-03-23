int blueLED = 10;
int yellowLED = 11;
int redLED = 12;
 
int solidLED = 0;

void setup() {
  // put your setup code here, to run once:
  solidLED = random(11, 12); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (solidLED == blueLED)
  {
    digitalWrite(greenLED, HIGH);
  }
    else if (blinkingLED == yellowLED)
  {
    digitalWrite(yellowLED, HIGH);
  }
  else if (solidLED == redLED)
  {
    digitalWrite(redLED, HIGH);
  }
