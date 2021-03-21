
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);  
  delay(1000);                       
  digitalWrite(8, LOW);   
  delay(1000);                      
}
