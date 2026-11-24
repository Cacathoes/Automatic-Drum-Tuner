const int PIN_HALL = A0; // Mettre 34 sur ESP32
const int NB_ECHANTILLONS = 30;

float valeurZero = 0.0;
bool zeroCalibre = false;

float lireHallMoyen() {
  long somme = 0;
  for (int i = 0; i < NB_ECHANTILLONS; i++) {
    somme += analogRead(PIN_HALL);
    delayMicroseconds(500);
  }
  return (float)somme / (float)NB_ECHANTILLONS;
}

void setup() {
  Serial.begin(115200);
  delay(500);
  valeurZero = lireHallMoyen();
  zeroCalibre = true;
  Serial.println("Pret. Envoie 'z' pour recalibrer le zero.");
}

void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();
    if (c == 'z' || c == 'Z') {
      valeurZero = lireHallMoyen();
      zeroCalibre = true;
      Serial.print("Nouveau zero : ");
      Serial.println(valeurZero, 2);
    }
  }

  float mesure = lireHallMoyen();
  float delta = mesure - valeurZero;

  Serial.print("Brut: ");
  Serial.print(mesure, 2);
  if (zeroCalibre) {
    Serial.print(" | Delta (enfoncement): ");
    Serial.println(delta, 2);
  } else {
    Serial.println();
  }

  delay(80);
}