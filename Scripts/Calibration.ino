#include "HX711.h"
// -433.07    -433.11    -433.25
const int DOUT = 8;
const int CLK  = 9;

bool should_print = false;

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(DOUT, CLK);
  scale.set_scale();

  Serial.println("=== Calibration HX711 ===");
  Serial.println("1. Tare en cours...");
  delay(2000);
  scale.tare();
  Serial.println("2. Tare OK.");
  Serial.println("3. Tapez le poids en grammes et envoyez (ex: 100, 500)...");

  float poids = 0;
  while (!Serial.available()) delay(10);
  poids = Serial.parseFloat();

  Serial.print("4. Placez ");
  Serial.print(poids);
  Serial.println(" g sur le plateau, puis tapez 'go' et envoyez...");

  while (true) {
    if (Serial.available()) {
      String s = Serial.readStringUntil('\n');
      s.trim();
      if (s == "go") break;
    }
    delay(100);
  }

  delay(1000);
  float brut = scale.get_units(20);
  float facteur = brut / poids;

  Serial.print("Lecture brute : ");
  Serial.println(brut);
  Serial.print("CALIBRATION = ");
  Serial.println(facteur, 2);
  scale.set_scale(facteur);
  delay(3000);
  should_print = true;
}

void loop() {
  if (should_print) {
  Serial.println(scale.get_units(5));
  delay(200);
  }
}   