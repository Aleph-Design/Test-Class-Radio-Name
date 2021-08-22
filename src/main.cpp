/*
* Testing ESP32 memory in first commit.
*/
#include <Arduino.h>
#include <displayName.h>

TFT_eSPI *pTft = NULL;
DisplayName *pDisp = NULL;


void setup() 
{
  Serial.begin(115200);
  vTaskDelay(300 / portTICK_PERIOD_MS);

  pTft = new TFT_eSPI();

  uint32_t radioIndex = 2;  // Index comes from preferences

  pDisp = new DisplayName(pTft, radioIndex);

  pDisp->displayRadioName(radioIndex);



}

void loop() 
{
  // put your main code here, to run repeatedly:
}