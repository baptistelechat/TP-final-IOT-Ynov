int sensorPin = A0;
int ledPin = 7;
float sensorValue = 0.0;
bool ledChanged = true;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(500);
  if(Serial.readString() == "changeLed") {
    ledChanged = !ledChanged;
  }
  sensorValue = formatTemp(analogRead(sensorPin));
  Serial.println(sensorValue);
  if (ledChanged) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin, HIGH);
  }
  
}

float formatTemp(float tension) {
  return (((tension * 5) / 1023.0) * 100.0 )*100 -273.15;
}
