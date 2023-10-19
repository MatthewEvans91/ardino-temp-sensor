#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS D4

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// The setup function is called once at startup of the sketch
void setup(void)
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
    sensors.requestTemperatures();
    Serial.print("Celsius temperature: ");
    Serial.print(sensors.getTempCByIndex(0));
    Serial.println("Looping");
    delay(1000);
}
