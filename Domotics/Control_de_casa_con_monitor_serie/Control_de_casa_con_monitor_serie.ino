int alarma;
int opcion;
int valor;
int lluvia;
const int led=13;
const int buzzer =11;
const int rain =2;
const int pir=5;
#include <Servo.h>
Servo miservo;

void setup(){
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(rain,INPUT);
pinMode(pir,INPUT);
miservo.attach(9);
miservo.write(0);
}

void loop(){
if(Serial.available()>0){
opcion=Serial.read();
delay(500);
}
switch (opcion){
case 49:
Serial.print("menu luces");
if (Serial.available()>0){
valor=Serial.read();
}
if(valor=='a') {
digitalWrite(led, LOW);
Serial.println("APAGADO");
}

if(valor=='p') {
digitalWrite(led, HIGH);
Serial.println("PRENDIDO");
break;
}
break;

case 50:
Serial.println("para encender la alarma ingrese p,para apagarla ingrese a");
if (Serial.available()>0){
alarma=Serial.read();
delay(500);
if (alarma == 'p'){
int sensor = digitalRead(pir);
if(sensor == HIGH);
analogWrite(buzzer,128);
delay(100);
digitalWrite(buzzer, LOW);
break;

}
if(alarma == 'a'){
digitalWrite(buzzer,LOW);
}
break;
}

case 51:
Serial.println("Para activar modo automatico ingrese p, para desactivarlo a,
para saber si llueve ingrese l");
if(Serial.available()>0){
lluvia = Serial.read();
delay(500);
}
if(lluvia == 'p'){

Serial.println(lluvia);
if(analogRead(0)>500){ miservo.write(90); }
else {miservo.write(0);

}}else if(lluvia == 'a'){
Serial.println(lluvia);
miservo.write(90);
}else if(lluvia == 'l'){if(analogRead(0)<300) Serial.println("Tormenta");
else if(analogRead(0)<500) Serial.println("Lluvia");
else Serial.println("Sin lluvia");}

}
}
