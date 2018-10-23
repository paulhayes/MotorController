#include <Arduino.h>

const int readPinA = A0;
const int readPinB = A1;

const int pwnPin = 3;
const int posDirectionPin = 4;
const int negDirectionPin = 5;
const int8_t threshold = 5;

void setup(){
    Serial.begin(9600);
       
}

void loop(){
    int a0 = analogRead(A0);
    int a1 = analogRead(A1);
    if( a0+a1 < threshold ){
        digitalWrite(posDirectionPin, LOW);
        digitalWrite(negDirectionPin, LOW);
        digitalWrite(pwnPin, LOW);  
    }    
    else if(a0>a1){
        digitalWrite(posDirectionPin, HIGH);
        Serial.println("pos");
        digitalWrite(negDirectionPin, LOW);
        analogWrite(pwnPin, 255);
    }
    else if(a0<a1){
        digitalWrite(posDirectionPin, LOW);
        digitalWrite(negDirectionPin, HIGH);
        Serial.println("neg");
        analogWrite(pwnPin, 255);
    }
   

    
    delay(10);
}