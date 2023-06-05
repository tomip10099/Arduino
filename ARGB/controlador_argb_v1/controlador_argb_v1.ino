#include <FastLED.h>

#define DATA_PIN    3;
#define LED_TYPE    WS2811;
#define COLOR_ORDER GRB;
#define NUM_LEDS    35;
CRGB leds[NUM_LEDS];

#define BRIGHTNESS 100;
#define FRAMES_PER_SECOND  120;

DEFINE_GRADIENT_PALETTE (heatmap_gp) {
    0,   0,   0,   0, //Black
    128, 255,   0,   0, //Red
    200, 255, 255,   0, //Bright Yellow
    255, 255, 255, 255, //Full White
};

uint8_t paletteIndex = 0; 

CRGBPalette16 myPal = heatmap_gp;

void setup() {
  delay(3000); // 3 second delay for recovery

  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}

  
void loop()
{
  // Call the current pattern function once, updating the 'leds' array
  COLOR_1();
  
  // send the 'leds' array out to the actual LED strip
  FastLED.show();  
  // insert a delay to keep the framerate modest
  
  //FastLED.delay(1000/FRAMES_PER_SECOND); 

}

void COLOR_1() 
{
  fill_palette(leds, NUM_LEDS, paletteIndex, 255 / NUM_LEDS, myPal, 255, LINEARBLEND);

}