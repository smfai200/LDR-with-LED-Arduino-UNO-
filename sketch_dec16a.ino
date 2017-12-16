const int ledPin = 13;

const int ldrPin = A0;
int value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  value = analogRead(ldrPin);
  if (value <= 25) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    Serial.println(value);
  }else {
    digitalWrite(ledPin, LOW);
    Serial.println(value);
  }
}
