// Created By Krishna Rajput UP61
// Copyright available
// give me credit for use this tool
#define TRANSDUCER_PIN 25
#define FREQUENCY_MIN 24000
#define FREQUENCY_MAX 26000

void setup() {
  Serial.begin(115200); // Serial monitor start
  pinMode(TRANSDUCER_PIN, OUTPUT);
}

void loop() {
  int freq = random(FREQUENCY_MIN, FREQUENCY_MAX); // Random frequency select
  tone(TRANSDUCER_PIN, freq); // Transducer pe send karo
  Serial.print("Frequency sending: ");
  Serial.print(freq);
  Serial.println(" Hz"); // Terminal pe show karo

  delay(500); // Half second wait
}
