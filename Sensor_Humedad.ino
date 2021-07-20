const int pin = 10; //pin de la bomba de agua                                                                                                                                     by K3vinC

void setup() {
    Serial.println("Gracias por utilizar mi code: by K3vinC ");
    Serial.println("Valor obtenido:  ");
    
    Serial.begin(9600);
    pinMode(pin, OUTPUT);
}

void loop() {


    digitalWrite(pin, LOW);
    int Sh = analogRead(A0);

    if(Sh >= 260 & Sh <= 300){
        
        digitalWrite(pin,HIGH); // activa la bomb
        delay(750);//espera ideal de 5000(5seg), en este caso esta colocado a una espera de 0.75 seg
        
        Serial.print("Estado del suelo: seco, valor obtenido:  "); 
        Serial.println(Sh); 
        Serial.println(" ");
      
        digitalWrite(pin, LOW);

    } else if(Sh < 260 & Sh >= 160){
        
        digitalWrite(pin, LOW);// apaga la bomba 
        Serial.print("Estado del suelo: húmedo, valor obtenido:  ");                                                                                                             
        Serial.println(Sh); 
        Serial.println(" ");           

    }else if(Sh < 160){
        
        digitalWrite(pin, LOW);
        Serial.print("Estado del suelo: exceso de agua, valor obtenido:  ");
        Serial.println(Sh);
        Serial.println("by K3vinC ");
    }
    delay(750);

}































































//by K3vinC
