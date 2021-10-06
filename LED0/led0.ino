#include <FastLED.h>

// Using WS2812B 

#define LED_PIN   2
#define NUM_LEDS  10
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

CRGB colors[] = {
  CRGB::Blue,
  CRGB::Red,
  CRGB::Green
};

void loop() {
  for(int j=0; j<sizeof(colors)/sizeof(CRGB); j++)
   {
      for(int i=0; i<NUM_LEDS; i++)
      {
        leds[i] = colors[j];
        FastLED.show();
        delay(100);
        leds[i] = CRGB(0, 0, 0);
      }
   }
}
