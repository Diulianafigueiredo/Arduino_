#define BUZZER_PIN 8  // Define o pino do buzzer

// Notas musicais em frequências (Hz)
#define C4  262
#define Cs4 277
#define D4  294
#define Ds4 311
#define E4  330
#define F4  349
#define Fs4 370
#define G4  392
#define Gs4 415
#define A4  440
#define As4 466
#define B4  494
#define C5  523
#define Cs5 554
#define D5  587
#define Ds5 622
#define E5  659
#define F5  698
#define Fs5 740
#define G5  784
#define Gs5 831
#define A5  880
#define As5 932
#define B5  988

// Notas da música "Pantera Cor de Rosa"
int melody[] = {E4, G4, C5, B4, E4, G4, C5, B4, E4, G4, C5, B4, G4, C5, B4, G4, C5, B4, F4, Fs4};
int durations[] = {8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 4, 8, 8, 8, 8, 8, 4, 8, 8};  // Duração das notas

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 20; i++) {
    int duration = 1000 / durations[i];
    tone(BUZZER_PIN, melody[i], duration);
    delay(duration * 1.3);  // Pequena pausa entre as notas
    noTone(BUZZER_PIN);
  }
  delay(2000);  // Espera antes de repetir a música
}
