#include "Volume.h" // Include the Volume library

Volume vol; // Plug your speaker into Pin 5 or 6

void setup() {
  vol.begin();
}

void loop() {
  // vol.delay() replaces the standard delay function (Timer0's prescaler has been altered, throwing the default delay() 64 x faster!)

  vol.tone(1000, 255); // 100% volume
  vol.delay(1000);
  vol.tone(1000, 192); // 75% volume
  vol.delay(1000);
  vol.tone(1000, 127); // 50% volume
  vol.delay(1000);
  vol.tone(1000, 51); // 20% volume
  vol.delay(1000);
  vol.tone(1000, 12); // 5% volume
  vol.delay(1000);
}
