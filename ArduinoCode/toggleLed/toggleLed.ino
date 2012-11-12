int ledPins[] = {2,3,4,5};
char var = '0';

void setup(){
  for (int i=0; i<4;i++){
    pinMode(ledPins[0],OUTPUT);
  }
  
  Serial.begin(9600);
  Serial.print("Program Initiated\n");
}

void loop(){
  
  while (Serial.available() > 0){
    var = Serial.read();
  }
  
  switch (var) {
   case '1':
      digitalWrite(ledPins[0],HIGH);
      Serial.print("First LED Activated\n");
      break;
   case '2':
      digitalWrite(ledPins[1],HIGH);
      Serial.print("Second LED Activated\n");
      break;
   case '3':
      digitalWrite(ledPins[2],HIGH);
      Serial.print("Third LED Activated\n");
      break;
   case '4':
      digitalWrite(ledPins[3],HIGH);
      Serial.print("Forth LED Activated\n");
      break;
  } 
}
