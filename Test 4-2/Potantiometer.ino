int ledpin = 9;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  float Voltage = val * (5.0 / 1023.0);
  Serial.println(Voltage);
  delay(1000);
}
