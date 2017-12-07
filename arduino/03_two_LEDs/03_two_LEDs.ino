// the one LED is connected to Pin 2 of the Arduino and
// the second to Pin 3

int led_one = 2;
int led_two = 3;

void setup() {
  // set up LED as OUTPUT
  pinMode(led_one, OUTPUT);
  pinMode(led_two, OUTPUT);
}

void loop() {
  digitalWrite(led_one, HIGH);
  digitalWrite(led_two, LOW);
  delay(500);    // wait 0.5 second
  digitalWrite(led_one, LOW);
  digitalWrite(led_two, HIGH);
  delay(500);    // wait 0.5 second
}


