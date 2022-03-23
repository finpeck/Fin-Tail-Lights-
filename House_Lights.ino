int redLED = 11;
int buttonONE = 2;
int buttonTWO = 4;

int ledstatus = 0;

void setup()
{
  // Setting up the pins as OUTPUTS.
  pinMode(redLED, OUTPUT); 
  pinMode(buttonONE, INPUT);
  pinMode(buttonTWO, INPUT);
  
}

void loop()
{
   if (digitalRead(buttonONE) == 1){ 
    delay(250);
    if (ledstatus == 1){
      ledstatus = 0;
    }
  
    else if (ledstatus == 0){
      ledstatus = 1;
    }
   }
   else if (digitalRead(buttonTWO) == 1){ 
        delay(250);
    if (ledstatus == 1){
      ledstatus = 0;
    }
  
    else if (ledstatus == 0){
      ledstatus = 1;
    }
   }

   if (ledstatus == 0){
      digitalWrite(redLED, LOW);
   }

   else if (ledstatus == 1){
      digitalWrite(redLED, HIGH);
   }
}
