float temperature = 0;
int czujnik = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temperature = (5.0 * analogRead(czujnik) * 100.0) / 1023.0;
  Serial.println(temperature);
  delay(1000);
}
