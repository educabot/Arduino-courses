void setup(){ 

      for(int x =2; x <=7; x++){ 
      pinMode (x, OUTPUT);
}

void loop(){

      for (int x =2; x <=7; x++){
            digitalWrite(x, HIGH); 
            delay(500);
}

      for (int x =7; x >=2; x--){ 
            digitalWrite(x, LOW);
            delay(500); 
}
            delay(1000); 
} 
