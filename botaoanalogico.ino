const byte LED = 13;
const byte BOTAO = 12;

byte valorBotao;
byte valorBotaoAnterior;
boolean ledLigado = false;

void setup(){
pinMode(LED, OUTPUT);
pinMode(BOTAO,INPUT_PULLUP );

}
void loop(){
valorBotao = digitalRead(BOTAO);
  if (valorBotao !=valorBotaoAnterior){
    if(valorBotao){
    ledLigado = !ledLigado;
    digitalWrite(LED, ledLigado);
    }
  }
valorBotaoAnterior = valorBotao;
  delay(10);
}
