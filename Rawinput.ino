#include "HX711.h"

HX711 scale; 

#define DOUT  8
#define CLK   9

void setup() {
  Serial.begin(9600);
  scale.begin(DOUT, CLK); 
  
  scale.tare();
}

void loop() {
  Serial.println(scale.get_units(), 2);
}   