
// create by Luoyi W Feb 11th 2026

int minBurHam = 500;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(minBurHam);
    digitalWrite(LED_BUILTIN,LOW);
    delay(minBurHam);

    minBurHam = minBurHam + 50;

}
