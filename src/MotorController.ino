#include <Arduino.h>

const int readPinA = A0;
const int readPinB = A1;

const int pwmPin = 3;
const int posDirectionPin = 4;
const int negDirectionPin = 5;

void setup(){
    Serial.begin(9600);
       
}

void loop(){
    int a0 = analogRead(A0);
    int a1 = analogRead(A1);
    if( a0+a1 > 0 ){
        Serial.print(a0);
        Serial.print(", ");
        Serial.print(a1);
        Serial.println("");
    }    
    delay(10);
}