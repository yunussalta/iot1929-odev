int ledler[] = {2,3,4};

void setup() {

  for(int i=0; i<3; i++){
    
  pinMode(ledler[i], OUTPUT);
  
  }

}

void loop() {

  digitalWrite(2,HIGH);
  delay(10000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
    delay(10000);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(4,HIGH);
  delay(5000);
   digitalWrite(4,LOW);
  
  
}    
