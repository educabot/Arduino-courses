void setup(){
Serial.begin(9600);
pinMode(2, OUTPUT);
}

void loop(){
if(analogRead(0)<300) Serial.println("Tormenta");
else if(analogRead(0)<500) Serial.println("Lluvia");
else Serial.println("Sin lluvia");
}
