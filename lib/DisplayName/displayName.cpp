/*
* Implementation class DisplayName
*/
#include <displayName.h>

void DisplayName::displayRadioName(uint32_t radioIndex)
{
    Serial.printf("\nradioIndex: %d\n\n", radioIndex);

    // _pRadio = &sRadioStation[radioIndex];
    // String radioName = _pRadio->name;

    // Serial.printf("\nradioName: %s radioIndex: %d\n\n", radioName, radioIndex);

}   // end displayRadioName()
