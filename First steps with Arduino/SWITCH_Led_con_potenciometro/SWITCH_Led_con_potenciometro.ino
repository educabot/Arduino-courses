void setup() { 
        pinMode(4, OUTPUT); 
        pinMode(3, OUTPUT); 
        pinMode(2, OUTPUT); 
        Serial.begin(9600); } 

void loop(){ 
int volumen = analogRead(0);  
int opcion = map(volumen, 0, 1023, 0, 3); 
switch(opcion){ 
  case 0: 
        digitalWrite(2, LOW);
        digitalWrite(3, LOW); 
        digitalWrite(4,LOW); 
        break;
  case 1: 
        digitalWrite(2, HIGH); 
        digitalWrite(3, LOW); 
        digitalWrite(4,LOW); 
        break; 
  case 2: 
        digitalWrite(2, HIGH); 
        digitalWrite(3, HIGH); 
        digitalWrite(4,LOW); 
        break;
  case 3: 
        digitalWrite(2, HIGH); 
        digitalWrite(3, HIGH); 
        digitalWrite(4,HIGH); 
        break;
} 
delay (200);
}
