int  randNumber; 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  randNumber = random(50,500); //random number from 50 to 500
  delay(randNumber);                       // wait for random time
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  randNumber = random(50,500); //random number from 50 to 500
  delay(randNumber);                       // wait for random time
}



