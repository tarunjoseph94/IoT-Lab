

// the setup function runs once when you press reset or power the board
const int ledPin = 13;
const int ldrPin = A0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 200) {

  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
}
else
{  
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
}
  delay(1000);                       // wait for a second
}
