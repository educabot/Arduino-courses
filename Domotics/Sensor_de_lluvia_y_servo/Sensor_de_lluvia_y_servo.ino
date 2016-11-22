#include <Servo.h>
Servo myservo;
void setup(){
Serial.begin(9600);
pinMode(2, OUTPUT);
myservo.attach(11);
}

void loop(){
if(analogRead(0)<500){ myservo.write(180); }
else {myservo.write(0);
}

delay(250);
}
