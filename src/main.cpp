#include <Arduino.h>

void setup() 
{
  Serial.begin(115200);
  Serial.printf("getHeapSize().......: %d bytes.\n", ESP.getHeapSize());
  Serial.printf("getFreeHeap().......: %d bytes.\n", ESP.getFreeHeap());
  Serial.printf("getSketchSize().....: %d bytes.\n", ESP.getSketchSize());
  Serial.printf("getFreeSketchSpace(): %d bytes.\n", ESP.getFreeSketchSpace());
  Serial.printf("getFlashChipSize()..: %d bytes.\n", ESP.getFlashChipSize());

  /*
  Output from sketch:
  getHeapSize().......: 402288 bytes.
  getFreeHeap().......: 376072 bytes.     Heap used 402288 - 376072 = 26216
  getSketchSize().....: 218672 bytes.     Compressed 218672 bytes to 113475...
  getFreeSketchSpace(): 1310720 bytes.    Total sketch space 218672 + 1310720 = 1529392?
  getFlashChipSize()..: 4194304 bytes.    Auto-detected Flash size: 4MB

  Output from compiler:
  RAM:   [          ]   4.1% (used 13508 bytes from 327680 bytes)
  Flash: [==        ]  16.7% (used 218562 bytes from 1310720 bytes)

  Configuring flash size...
  Auto-detected Flash size: 4MB

  Compressed 17104 bytes to 11191...
  Writing at 0x00001000... (100 %)
  Wrote 17104 bytes (11191 compressed) at 0x00001000 in 0.3 seconds (effective 503.7 kbit/s)...
  Hash of data verified.
  Compressed 3072 bytes to 128...
  Writing at 0x00008000... (100 %)
  Wrote 3072 bytes (128 compressed) at 0x00008000 in 0.0 seconds (effective 1023.8 kbit/s)...
  Hash of data verified.
  Compressed 8192 bytes to 47...
  Writing at 0x0000e000... (100 %)
  Wrote 8192 bytes (47 compressed) at 0x0000e000 in 0.0 seconds (effective 3039.0 kbit/s)...
  Hash of data verified.

  17104 + 3072 + 8192 = 28368
  11191 + 128 + 47 = 11366
  */

}

void loop() {
  // put your main code here, to run repeatedly:
}