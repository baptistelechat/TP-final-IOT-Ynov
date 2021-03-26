int sensorPin = A0;
float sensorValue = 0.0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(500);
  sensorValue = formatTemp(analogRead(sensorPin));
  Serial.println(sensorValue);

}

float formatTemp(float tension) {
  return (((tension * 5) / 1023.0) * 100.0 )*100 -273.15;
}
