int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup() {
  // set up OUTPUTS
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
    setColor(255, 0, 0);  // red
    delay(3000);
    setColor(0, 255, 0);  // green
    delay(2000);
    setColor(0, 0, 255);  // blue
    delay(1000);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
