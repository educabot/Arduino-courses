const int LedPin = 13;
int buzzer = 11;
const int PirPin = 2;
#include <Servo.h>
Servo miservo;

void setup(){
pinMode(LedPin, OUTPUT);
pinMode(PirPin, INPUT);
pinMode(buzzer, OUTPUT);
miservo.attach(9);
miservo.write(0);
}

void loop(){
int value = digitalRead(PirPin);
if (value == HIGH){
value = LOW;
digitalWrite(LedPin, HIGH);
miservo.write(90);
delay(500);
analogWrite(buzzer, 128);
delay(100);
digitalWrite(LedPin, LOW);
digitalWrite(buzzer, LOW);
miservo.write(0);
}
}
