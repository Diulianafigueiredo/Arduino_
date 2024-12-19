void setup(){
    serial.begin(9600);
}
voidloop ()
{
    int pot = analogRead(A0); //Conectado ao potenciometro 
    int canal = map (pot,0 , 1023, 0, 3);

    serial.print(pot);
    serial.print("");
    serial.println(canal);

    if(canal == 0){
        digitalWrite(6, LOW); //R
        digitalWrite(5, LOW); //G
        digitalWrite(3, LOW); //B
        serial.println("DESLIGADO")
    }else if(canal == 1){
        digitalWrite(6, 234); //R
        digitalWrite(5, 179); //G
        digitalWrite(3, 64); //B
        serial.println("VERMELHO")
    }else if (canal == 2){
        digitalWrite(6, 0); //R
        digitalWrite(5, 255); //G
        digitalWrite(3, 0); //B
        serial.println("GREEN")
    }else if (canal == 3){
        digitalWrite(6, 0); //R
        digitalWrite(5, 0); //G
        digitalWrite(3, 255); //B
        serial.println("BLUE")
    }
}