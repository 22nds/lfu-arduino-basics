
int redPin = 3;
int greenPin = 6;
int bluePin = 5;
int i;

void setup() {
  // set up OUTPUTS
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
    for (i=0; i<=255; i++) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, i);
        delay(5);
    }

    for (i=255; i>=0; i--) {
        analogWrite(redPin, i);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
        delay(5);
    }

    for (i=0; i<=255; i++) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, i);
        analogWrite(bluePin, 0);
        delay(5);
    }
}
