#include "Arduino.h"

// The setup function is called once at startup of the sketch
void setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
    }
    Serial.println();
    Serial.println("Starting device for temperature monitor test");
}

void loop()
{
    Serial.println("Looping");
    delay(1000);
    //
}
