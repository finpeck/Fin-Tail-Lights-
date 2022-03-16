int blueLED = 13;
int greenLED = 12;
int yellowLED = 11;
int redLED = 10;


void setup() {
  // put your setup code here, to run once:
pinMode(blueLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(yellowLED, OUTPUT);
pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);
digitalWrite(blueLED, HIGH);
delay(2000);
digitalWrite(greenLED, HIGH);
delay(2000)
digitalWrite(yellowLED, HIGH);
delay(2000);
digitalWrite(redLED, HIGH);
delay(2000)
digitalWrite(blueLED, LOW);
digitalWrite(greenLED, LOW);
digitalWrite(yellowLED, LOW);
digitalWrite(redLED, LOW);
}
