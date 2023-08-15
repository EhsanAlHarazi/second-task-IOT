 int Buttonpin = 7;
 int ledPin = 8;
char d=Buttonpin;
void setup() {
  Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
  pinMode(Buttonpin, INPUT_PULLUP);
}

void loop() {
  int a=digitalRead(8);
  Serial.print(a);
   Serial.write(ledPin);
  if (Buttonpin == 1) {
   
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
  
}