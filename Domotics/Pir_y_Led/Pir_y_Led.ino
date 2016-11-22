const int LedPin = 13;
const int PirPin = 2;

void setup(){
pinMode(LedPin, OUTPUT);
pinMode(PirPin, INPUT);
}

void loop(){
int value = digitalRead(PirPin);
if (value == HIGH) {
digitalWrite(LedPin, HIGH);
delay(500);
digitalWrite(LedPin, LOW);
value = LOW;
}
}
