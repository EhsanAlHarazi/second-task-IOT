
char t0='1',t;

bool s=0;
 int Buttonpin = 8;
 byte ledPin = 7;
char d=Buttonpin;
//int buttonState = 0;
//int oldButtonState = LOW;
//int ledState = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(Buttonpin, INPUT_PULLUP);
}

void loop() {
  
 digitalRead(Buttonpin);
  Serial.println(Buttonpin);
 delay(1000);
  
   if(Serial.available())
   {
      d = Serial.read();
      if (t0=='1'&&t=='0') 
      { 
        s=!s;
        digitalWrite(ledPin, s);        
      }
      t0=t;
}
}