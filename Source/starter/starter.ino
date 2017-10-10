//Include Esplora library
#include <Esplora.h>

void setup() {
}

void loop() {
  int red = random(255);
  int green = random(255);
  int blue = random(255);
  int slider = Esplora.readSlider();
  
  Esplora.writeRGB(red, green, blue);
  delay(slider);
}
