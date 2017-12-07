import processing.serial.*;

Serial port;  // Create object from Serial class
int value=0; // Data received from the serial port

void serialEvent(Serial Port) {
    String inString = new String(Port.readBytesUntil('\n'));
    if (inString != null) {
        inString = trim(inString);
        float col = float(inString);
        value=floor(col*1);
    }
}


void setup()
{
    size(500, 500);
    frameRate(10);
    println(Serial.list());
    // Open the port that the board is connected to and use the same speed (9600 bps)
    port = new Serial(this, Serial.list()[32],9600);
    port.bufferUntil('\n');
}

// Visual output
void draw()
{
    // print value to serial
    println(value);
    // Set background to white
    background(255);

    // inner square - set color and size - various options
    // fill(value, value, value);   // grey
    // fill(0, value, value);       // cyan
    // fill(0, 0, value);           // blues
    fill(value, 0, 0);           // reds
    //fill(0, value, 0);           // greens
    rect(50, 50, 400, 400);
}