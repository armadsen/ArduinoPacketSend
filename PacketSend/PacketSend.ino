#include <Esplora.h>

int lastSliderValue;

void setup() {
  Serial.begin(57600);
}

void loop() {
  readAndSendSliderValueIfChange();
}

void readAndSendSliderValueIfChange(void)
{
  int newSliderValue = min(Esplora.readSlider() / 10, 100);
  if (newSliderValue == lastSliderValue) return;
  
  Serial.print("!pos");
  Serial.print(newSliderValue);
  Serial.print(";");
  lastSliderValue = newSliderValue;
}

