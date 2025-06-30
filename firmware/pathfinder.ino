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
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH;
    digitalWrite(LED3, HIGH);
    if (digitalRead(BUT1) == HIGH) {
        digitalWrite(LED1, LOW);
    } else if (digitalRead(BUT2) == HIGH) {
        digitalWrite(LED2, LOW);
    } else if (digitalRead(BUT3) == HIGH) {
        digitalWrite(LED3, LOW);
    } else if(digitalRead(BUT4) == HIGH){
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
    }
    else if (digitalRead(BUT1) == HIGH && digitalRead(BUT2) == HIGH && digitalRead(BUT3) == HIGH && digitalRead(BUT4) == HIGH ) {
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

