int gasSensor = A0;
int buzzer = 9;

void setup() {
  pinMode(gasSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int airValue = analogRead(gasSensor);
  Serial.print("Air Quality Level: ");
  Serial.println(airValue);

  if (airValue > 400) {
    digitalWrite(buzzer, HIGH);
    Serial.println("Poor Air Quality! Alert Sent.");
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}
