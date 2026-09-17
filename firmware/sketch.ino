#include <Wire.h>
#include "model.h"

#define mq3pin 33
#define mq135pin 35
#define PIRpin 34
#define INTERVAL_MS 5000
#define WINDOW_SIZE 480
#define SEUIL_AMBRE_135 200    // air propre → légèrement élevé
#define SEUIL_ROUGE_135 400    // niveau dangereux MQ135
#define SEUIL_AMBRE_MQ3 900    // au-dessus des 700 de base
#define SEUIL_ROUGE_MQ3 1200
#define REI_CYCLES 1440        // 24h en cycles de 60 secondes
#define REI_WEAR_CYCLES 720    // 12h → passage de danger à wear-protection
  
Eloquent::ML::Port::RandomForest model;

float twa_buffer_135[WINDOW_SIZE];
float twa_buffer_mq3[WINDOW_SIZE];
int twa_index = 0;
int twa_count = 0;
unsigned long last_reading = 0;
int cycles_depuis_danger = 0;  
bool danger_detecte = false;  

float calculer_twa(float* buffer) {
  if (twa_count == 0) return 0;
  float somme = 0;
  int n = min(twa_count, WINDOW_SIZE);
  for (int i = 0; i < n; i++) {
    somme += buffer[i];
  }
  return somme / n;
}

String decider_alerte(String prediction_ai, float twa_135, float twa_mq3) {
  
  // Priorité 1 : TWA dépasse seuil rouge → danger cumulé
  if (twa_135 > SEUIL_ROUGE_135 || twa_mq3 > SEUIL_ROUGE_MQ3) {
    return "danger";
  }
  
  // Priorité 2 : TWA dépasse seuil ambre → protection nécessaire
  if (twa_135 > SEUIL_AMBRE_135 || twa_mq3 > SEUIL_AMBRE_MQ3) {
    return "wear-protection";
  }
  
  // Priorité 3 : prédiction AI instantanée
  return prediction_ai;
}

void setup() {
  pinMode(PIRpin, INPUT);
  Serial.begin(9600);
  Serial2.begin(9600);
  for (int i = 0; i < WINDOW_SIZE; i++) {
    twa_buffer_135[i] = 0;
    twa_buffer_mq3[i] = 0;
  }
  twa_index = 0;
  twa_count = 0;
  Serial.print("REI cycles: "); 
  Serial.print(cycles_depuis_danger);
  Serial.print("/"); 
  Serial.println(REI_CYCLES);
}
void loop() {
  unsigned long maintenant = millis();
  
  // PIR — détecter présence
  bool personne_presente = digitalRead(PIR_PIN);

  if (maintenant - last_reading >= INTERVAL_MS) {
    last_reading = maintenant;

    // Lecture capteurs — toujours, 24h/24
    int mq135_val = analogRead(mq135pin);
    int mq3_val = analogRead(mq3pin);

    // Buffer TWA — toujours
    twa_buffer_135[twa_index] = (float)mq135_val;
    twa_buffer_mq3[twa_index] = (float)mq3_val;
    twa_index = (twa_index + 1) % WINDOW_SIZE;
    if (twa_count < WINDOW_SIZE) twa_count++;

    float twa_135 = calculer_twa(twa_buffer_135);
    float twa_mq3 = calculer_twa(twa_buffer_mq3);

    float x[2] = { (float)mq135_val, (float)mq3_val };
    int prediction = model.predict(x);

    String classe;
    if (prediction == 0) classe = "danger";
    else if (prediction == 1) classe = "safe";
    else classe = "wear-protection";

    Serial.print("Prediction: "); Serial.println(classe);
    Serial.print("TWA MQ135: "); Serial.print(twa_135);
    Serial.print(" | TWA MQ3: "); Serial.println(twa_mq3);

    String alerte_actuelle = decider_alerte(classe, twa_135, twa_mq3);

    // REI
    if (alerte_actuelle == "danger") {
      danger_detecte = true;
      cycles_depuis_danger = 0;
    } else if (danger_detecte) {
      cycles_depuis_danger++;
      if (cycles_depuis_danger < REI_WEAR_CYCLES) {
        alerte_actuelle = "danger";
      } else if (cycles_depuis_danger < REI_CYCLES) {
        alerte_actuelle = "wear-protection";
      } else {
        danger_detecte = false;
        cycles_depuis_danger = 0;
      }
    }

    Serial.print("REI cycles: "); Serial.print(cycles_depuis_danger);
    Serial.print(" | Alerte finale: "); Serial.println(alerte_actuelle);

    // Audio — SEULEMENT si quelqu'un est présent
    if (personne_presente) {
      if (alerte_actuelle == "safe") {
        Serial.println("ALERTE: SAFE - Zone sûre");
        Serial2.write(0x7E); Serial2.write(0xFF); Serial2.write(0x06);
        Serial2.write(0x03); Serial2.write(0x00); Serial2.write(0x00);
        Serial2.write(0x01); Serial2.write(0xFE); Serial2.write(0xF7);
        Serial2.write(0xEF);
      } else if (alerte_actuelle == "wear-protection") {
        Serial.println("ALERTE: PROTECTION - Porter masque et gants");
        Serial2.write(0x7E); Serial2.write(0xFF); Serial2.write(0x06);
        Serial2.write(0x03); Serial2.write(0x00); Serial2.write(0x00);
        Serial2.write(0x02); Serial2.write(0xFE); Serial2.write(0xF6);
        Serial2.write(0xEF);
      } else {
        Serial.println("ALERTE: DANGER - Ne pas entrer !");
        Serial2.write(0x7E); Serial2.write(0xFF); Serial2.write(0x06);
        Serial2.write(0x03); Serial2.write(0x00); Serial2.write(0x00);
        Serial2.write(0x03); Serial2.write(0xFE); Serial2.write(0xF5);
        Serial2.write(0xEF);
      }
    } else {
      Serial.println("Pas de présence détectée — audio silencieux");
    }
  }
}