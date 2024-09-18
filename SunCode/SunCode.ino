#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>  //
#endif
#define PIN 6  //
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 12  // Popular NeoPixel ring size
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define BETWEEN 5000  // Time (in milliseconds) to pause between pixels

void setup() {

  pixels.begin();  // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  pixels.clear();  // Set all pixel colors to 'off'

  for (int i = 0; i < NUMPIXELS; i++) {  // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255, 215, 0));

    pixels.show();  // Send the updated pixel colors to the hardware.
  }
  delay(BETWEEN);  // Pause before next pass through loop
  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(255, 255, 255));

    pixels.show();
  }
  delay(BETWEEN);
  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(254, 242, 80));

    pixels.show();
  }
  delay(BETWEEN);
}
