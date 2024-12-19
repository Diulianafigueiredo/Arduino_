 /*void setup() {
 pinMode(9, OUTPUT); //apenas uma ligação com o buzzer 

}
//buzzer - usado para emitir som e indicar que algo está funcionando corretamente


void loop() {
tone(9, 523,1000);
delay(1000);
noTone(9);
delay(1000);

}*/


void setup(){
  pinMode(9,OUTPUT);//faz uma ligação com o buzzer 
  pinMode(11,OUTPUT);//faz uma ligação com LED
}
  void loop(){
    digitalWrite(9, HIGH);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    delay(1000);
  }
