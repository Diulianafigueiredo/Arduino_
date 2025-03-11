#define LED_PIN 9  // Define o pino do LED

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Define o pino como saída
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Acende o LED
}
