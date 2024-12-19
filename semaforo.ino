int ledPinvermelho = 13; // Pino digital onde o LED está conectado
int ledPinamarelo = 12;
int ledPinverde = 11;

void setup() {
  pinMode(ledPinvermelho, OUTPUT); // Define o pino como saída
  pinMode(ledPinamarelo, OUTPUT);
  pinMode(ledPinverde, OUTPUT);
}

void loop() {
  digitalWrite(ledPinvermelho, HIGH); // Liga o LED
  delay(4000); // Espera 1 segundo
  digitalWrite(ledPinvermelho, LOW); // Desliga o LED
  delay(1000); // Espera 1 segundo
  
  digitalWrite(ledPinamarelo, HIGH); // Liga o LED
  delay(4000); // Espera 1 segundo
  digitalWrite(ledPinamarelo, LOW); // Desliga o LED
  delay(1000); // Espera 1 segundo
  
  digitalWrite(ledPinverde, HIGH); // Liga o LED
  delay(10000); // Espera 1 segundo
  digitalWrite(ledPinverde, LOW); // Desliga o LED
  delay(1000); // Espera 1 segundo
}
// falta buzzer 
//botao 
//semaforo ja foi 
//sensor de movimento 
//potenciometro 
//led rgb