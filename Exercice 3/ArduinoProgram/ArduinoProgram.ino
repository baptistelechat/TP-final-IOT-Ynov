int sensorPin = A0;
int ledPin = 7;
float sensorValue = 0.0;


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(300);
  sensorValue = formatTemp(analogRead(sensorPin));
  Serial.println(sensorValue);
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  if (Serial.available()) {
    Serial.write(sensorValue);
  }
}

float formatTemp(float tension) {
  return (((tension * 5) / 1023.0) * 100.0 )*100 -273.15;
}