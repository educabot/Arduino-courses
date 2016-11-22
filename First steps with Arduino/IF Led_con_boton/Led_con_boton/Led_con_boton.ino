void setup(){

     pinMode(3, OUTPUT); 
     pinMode(2, INPUT); 
   

} 

void loop(){
     
     int estado = 0;
     estado = digitalRead(2);
     if (estado == 1){
     digitalWrite(3, HIGH); 
     }else{
           digitalWrite(3, LOW);
}
     delay(100);
}
