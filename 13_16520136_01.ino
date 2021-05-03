#include <LiquidCrystal.h>
LiquidCrystal lod(7, 6, 5, 4, 3, 2);

void setup() {
  lod.begin(16, 2);
  lod.print("Hello, World!");
}

void loop() {
  lod.setCursor(0, 1);
  lod.print(millis() / 1000);
}