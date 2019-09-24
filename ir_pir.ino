const int led_pin=13;
const int ir_pin=4;
const int pir_pin=2;
void setup() {
  // put your setup code here, to run once:
pinMode(led_pin, OUTPUT);
pinMode(ir_pin, INPUT);
pinMode(pir_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pir_pin) && digitalRead(ir_pin))
{
 digitalWrite(led_pin,HIGH) ;
 }
 else
 {
  digitalWrite(led_pin,LOW);
  }
  delay(500);
}
