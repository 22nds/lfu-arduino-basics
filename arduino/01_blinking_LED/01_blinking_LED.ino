// the red LED is connected to Pin 2 of the Arduino
int led = 2;

void setup() {
  // set up LED as OUTPUT
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);    // wait 1 second
  digitalWrite(led, LOW);
  delay(500);    // wait 2 seconds
  digitalWrite(led, HIGH);
  delay(600);    // wait 3 seconds
  digitalWrite(led, LOW);
  delay(600);    // wait 2 seconds
  digitalWrite(led, HIGH);
  delay(600);    // wait 3 seconds
  digitalWrite(led, LOW);
  delay(700);    // wait 2 seconds
  digitalWrite(led, HIGH);
  delay(700);    // wait 3 seconds
}


