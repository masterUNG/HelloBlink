

#define pin D2
int intTime = 5000;

//setup
void setup() {


  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(intTime);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(intTime);                       // wait for a second
}
