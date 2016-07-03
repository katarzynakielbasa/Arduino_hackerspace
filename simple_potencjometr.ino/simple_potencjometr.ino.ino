int analog = A0;
int led = 13;
int odczyt = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(5000);
  pinMode(led, OUTPUT);
  pinMode(analog, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  odczyt = analogRead(analog);
  Serial.println(odczyt);
  digitalWrite(led, HIGH);
  delay(odczyt);
  digitalWrite(led, LOW);
  delay(odczyt);
}
