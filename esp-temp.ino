void setup()
{
    pinMode(17, OUTPUT);
}

void loop()
{
    digitalWrite(17, HIGH);
    delay(100);
    digitalWrite(17, LOW);
    delay(100);
}
