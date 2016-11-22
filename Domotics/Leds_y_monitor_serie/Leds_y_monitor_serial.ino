int opcion;
int led = 2;
int led1 = 3;
int led2 = 4;
void setup(){
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop(){
if (Serial.available()>0){
opcion=Serial.read();
if(opcion=='a') {
digitalWrite(led, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
Serial.println("APAGADO");
}

if(opcion=='p') {
digitalWrite(led, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
Serial.println("PRENDIDO");
}
}
}
