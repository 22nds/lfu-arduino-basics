

int sensorPin = A7;
int led = 3;
int input;
int output;

void setup() {
    Serial.begin(9600);
}

void loop()
{
    // read the sensor value (0-1023)
    input = analogRead(sensorPin);

    // compute the led output value (0-255)
    output = input / 4;

    // wait 1 second 
    delay(1000);
    
    // change the led light brightness
    analogWrite(led, output);

    // write values to serial port
    Serial.print( input);
    Serial.print( " - ");
    Serial.println( output);
}
