const int NUM_SLIDERS = 7;
const int analogInputs[NUM_SLIDERS] = {A0, A1, A2, A3, A4, A5, A6};
const int BUTTON_LED = 2;
byte lastButtonState = LOW;
byte ledState = LOW;

int analogSliderValues[NUM_SLIDERS];

unsigned long debounceDuration = 50; // millis
unsigned long lastTimeButtonStateChanged = 0;

void setup() { 
  for (int i = 0; i < NUM_SLIDERS; i++) {
    pinMode(analogInputs[i], INPUT);
  }
  pinMode(BUTTON_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  updateSliderValues();
  sendSliderValues(); // Actually send data (all the time)
  // printSliderValues(); // For debug
  delay(10);
}

void updateSliderValues() {
  for (int i = 0; i < NUM_SLIDERS; i++) {
     analogSliderValues[i] = analogRead(analogInputs[i]);
  }
}

void sendSliderValues() {
  String builtString = String("");

  if (millis() - lastTimeButtonStateChanged > debounceDuration) {
    byte buttonState = analogRead(analogInputs[6]);
    if (buttonState != lastButtonState) {
      lastTimeButtonStateChanged = millis();
      lastButtonState = buttonState;
      if (buttonState == LOW) {
        ledState = (ledState == HIGH) ? LOW: HIGH;
        digitalWrite(BUTTON_LED, ledState);
      }
    }
  }

  for (int i = 0; i < NUM_SLIDERS; i++) {
    if((i == 6) && (ledState == HIGH)){
      builtString += String("0");
    }
    else if((i == 6) && (ledState == LOW)){
      builtString += String("1023");
    }
    else{
      builtString += String((int)analogSliderValues[i]);
    }
    
    if (i < NUM_SLIDERS - 1) {
      builtString += String("|");
    }
  }

  Serial.println(builtString);
}

void printSliderValues() {
  for (int i = 0; i < NUM_SLIDERS; i++) {
    String printedString = String("Slider #") + String(i + 1) + String(": ") + String(analogSliderValues[i]) + String(" mV");
    Serial.write(printedString.c_str());

    if (i < NUM_SLIDERS - 1) {
      Serial.write(" | ");
    } else {
      Serial.write("\n");
    }
  }
}