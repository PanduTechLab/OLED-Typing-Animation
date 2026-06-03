#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

// ESP32-S3 I2C Pins
#define SDA_PIN 8
#define SCL_PIN 9

// Three lines
String line1 = "Are you a resistor?";
String line2 = "Because you don'tjustcontrol current...";
String line3 = "you control my heart        too ...";

// Typing animation
void typeText(String text, int x, int y, int speedDelay)
{
  display.setCursor(x, y);

  for (int i = 0; i < text.length(); i++)
  {
    display.print(text[i]);
    display.display();
    delay(speedDelay);
  }
}

void setup()
{
  Wire.begin(SDA_PIN, SCL_PIN);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    while (true);
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);

  // Top ~5% empty (≈3 px)

  typeText(line1, 5, 3, 80);

  delay(900);

  // Small spacing

  typeText(line2, 0, 18, 80);

  delay(900);

  // Small spacing + keep bottom ~5% free

  typeText(line3, 0, 40, 80);

}

void loop()
{
}