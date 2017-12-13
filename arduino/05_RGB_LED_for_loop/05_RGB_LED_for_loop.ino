int redPin = 3;
int greenPin = 5;
int bluePin = 6;
int i;

void setup() {
  // set up OUTPUTS
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
    // red
    for (i=255; i>=0; i--) {
        analogWrite(redPin, i);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
        delay(5);
    }

    // blue
    for (i=0; i<=255; i++) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, i);
        delay(5);
    }

    // green
    for (i=0; i<=255; i++) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, i);
        analogWrite(bluePin, 0);
        delay(5);
    }
}