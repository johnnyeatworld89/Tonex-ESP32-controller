#include <Arduino.h>
#include "display.h"
#include "tonex.h"

void displayInit()
{
    Serial.println("Display Init");
}

void displayUpdate()
{
    Serial.printf("Gain=%d Volume=%d Preset=%s\n",
                  tonexState.gain,
                  tonexState.volume,
                  tonexState.presetName);
}
