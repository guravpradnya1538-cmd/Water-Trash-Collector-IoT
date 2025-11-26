int motor1 = 5;   // Motor driver pin
int motor2 = 6;   // Motor driver pin

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  // Rotate motor forward
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);

  delay(2000);  // Motor runs for 2 seconds

  // (Optional) Add stop or reverse logic here
}
