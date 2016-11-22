void setup(){ 
     pinMode(2, OUTPUT); 
     pinMode(3, OUTPUT); 
     pinMode(4, INPUT);
     } 

void loop(){
     while(digitalRead(4) == 0){
       digitalWrite(3, LOW);
       digitalWrite(2, HIGH); 
       delay(200);
       digitalWrite(2, LOW);
       delay(200); } 
       digitalWrite(2, LOW);
       digitalWrite(3, HIGH); 
       delay(200); 
       }  
