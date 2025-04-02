#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Create display object (128x64 pixels, using I2C)
Adafruit_SSD1306 lcd(128, 64, &Wire, -1);

void setup() {
  screenSettings();
}

void loop() {
  // Nothing needed here yet
}

void screenSettings(){
  if (!lcd.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { //This is needed to intiate and turn screen on.
  for (;;); // Halt if screen isn't found
}
  lcd.clearDisplay();
  lcd.setTextSize(1);             // Normal 1:1 pixel scale
  lcd.setTextColor(SSD1306_WHITE);// Draw white text
  lcd.setCursor(0,0);             // Start at top-left x,y value
  lcd.println(F("Hello, From"));
  lcd.println(F("Arduino!"));
  lcd.display();                  // Show on screen
}