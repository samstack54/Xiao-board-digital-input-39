     
 int LED =  9 ;  
 int Button = 4 ;   
 
 void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
 }
 
 void loop() {
  int ButtonVal = digitalRead(Button) ;
  
  if (ButtonVal == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
 }


 
