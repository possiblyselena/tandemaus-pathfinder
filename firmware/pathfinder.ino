int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;

int LED1 = D4;
int LED2 = D5;
int LED3 = D6;

void setup() {

pinMode(BUT1, INPUT);
pinMode(BUT2, INPUT);
pinMode(BUT3, INPUT);
pinMode(BUT4, INPUT);

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);

}

void loop() {

    delay(100);
    if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == LOW && digitalRead(BUT3) == LOW && digitalRead(BUT4) == LOW){
        digitalRead(LED1, HIGH);
        digitalRead(LED2, HIGH);
        digitalRead(LED3, HIGH);
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == LOW && digitalRead(BUT3) == LOW && digitalRead(BUT4) == LOW){
        digitalWrite(LED1, LOW);
    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == LOW && digitalRead(BUT4) == LOW){
        digitalWrite(LED2, LOW);
    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == LOW && digitalRead(BUT3) == HIGH  && digitalRead(BUT4) == LOW){
        digitalWrite(LED3, LOW);
    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == LOW && digitalRead(BUT3) && digitalRead(BUT4) == HIGH){
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == LOW && digitalRead(BUT4) == LOW){        
        digitalWrite(LED1, LOW);
        delay(500);
        digitalWrite(LED2, LOW);
        delay(500);
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        delay(100);
        digitalWrite(LED2, LOW); 
        delay(100);
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
        }
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == LOW && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == LOW) {
        digitalWrite(LED1, LOW);
        delay(500);
        digitalWrite(LED3, LOW);
        delay(500);
        digitalWrite(LED1, HIGH);
        digitalWrite(LED3, HIGH);
        delay(100);
        digitalWrite(LED2, LOW);
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
        }
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == LOW && digitalRead(BUT3) == LOW && digitalRead(BUT4) == HIGH) {
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED1, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            delay(100);
        }
        delay(400);
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
        delay(400);
        for (int z = 0; z < 3; z++) {
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == LOW) {
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED2, LOW);
            delay(100);
            digitalWrite(LED2, LOW);
            delay(100);
        }
        delay(400);
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }

    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == LOW && digitalRead(BUT4) == HIGH) {
        for (int q = 0; q < 3; q++){
            digitalWrite(LED3, HIGH);
            digitalWrite(LED1, LOW);
            delay(200);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, LOW);
            delay(200);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, LOW);
            delay(200);
        }
        delay(300);
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == LOW && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == HIGH) {
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
        delay(400);
        for (int i = 0; i <3; i++) {
            digitalWrite(LED1, LOW); 
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == LOW) {
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            delay(100);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, HIGH);
            delay(100);
        }
        for (int z = 0; z < 3; z++) {
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }

    } else if (digitalRead(BUT1) == LOW && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == HIGH) {
        for (int q = 0; q < 3; q++) {
            digitalWrite(LED2, LOW);
            delay(100);
            digitalWrite(LED2, HIGH);
            delay(100);
        }
        delay(400);
        for (int i = 0; i < 3; i++){
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED3, HIGH);
            delay(100);
        }
        delay(400);
        for (int z = 0; z < 3; z++) {
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(100);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, HIGH);
            delay(100);
        }

    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == LOW && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == HIGH) {
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED1, LOW); 
            delay(400);
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            delay(200);
        }

    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == LOW && digitalRead(BUT4) == HIGH) {
        for (int i = 0; i < 3; i++) {
            digitalWrite(LED3, LOW);
            delay(200);
            digitalWrite(LED3, HIGH);
            digitalWrite(LED2, LOW);
            digitalWrite(LED1, LOW);
            delay(200);
        }
    } else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == HIGH ) {
        for (int i = 0; i < 5; i++) {
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        delay(200);
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        delay(200);
        }
    }
}

