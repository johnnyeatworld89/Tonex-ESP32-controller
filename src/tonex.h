#pragma once

#include <stdint.h>

struct TonexState
{
    uint8_t gain;
    uint8_t volume;

    uint8_t bass;
    uint8_t mid;
    uint8_t treble;

    uint8_t gate;
    uint8_t compressor;
    uint8_t reverb;

    uint16_t presetNumber;

    const char* presetName;
};

extern TonexState tonexState;
