void setup() {
    pinMode(13, OUTPUT);
}

void loop() {
    int lightLevel = analogRead(3);
    delay(100);
    if (lightLevel < 20) { //20 is an arbitrary threshold to turn on LED
        digitalWrite(13, HIGH);
    }
    else {
        digitalWrite(13, LOW);
    }
}


