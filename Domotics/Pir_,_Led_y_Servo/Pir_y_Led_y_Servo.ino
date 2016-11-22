const int LedPin = 13;
const int PirPin = 2;
#include <Servo.h>
Servo miservo;

void setup(){
pinMode(LedPin, OUTPUT);
pinMode(PirPin, INPUT);
miservo.attach(9);
miservo.write(0);
}

void loop(){
int value = digitalRead(PirPin);
if (value == HIGH) {
digitalWrite(LedPin, HIGH);
miservo.write(90);
delay(500);
digitalWrite(LedPin, LOW);
miservo.write(0);
value = LOW;
}
}
