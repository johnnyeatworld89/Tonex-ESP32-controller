#include <Arduino.h>

#include "display.h"

void setup()
{
    Serial.begin(115200);

    displayInit();
}

void loop()
{
    displayUpdate();

    delay(1000);
}
