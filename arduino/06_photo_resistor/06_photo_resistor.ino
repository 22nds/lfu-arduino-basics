
int sensorPin = A7;

void setup() {
    Serial.begin(9600);
}

void loop()
{
    delay(50);
    Serial.println( analogRead(sensorPin));
}
