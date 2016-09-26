//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output
  pinMode (3, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH); //turn the LED on (HIGH is the voltage level)
  delay(2500);            //wait for a scond
  digitalWrite(3,LOW);  //turn the LED off by making the voltage low
  delay(2500);            //wait for a scound
}
