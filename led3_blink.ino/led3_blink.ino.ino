int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT); //ustawiamy tryb pinu na wyjściowy(input, output, input_pullup)
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led2, HIGH); //ustawiamy pin 13 na stan wysoki
  delay(100);  //odczekujemy 1s
  digitalWrite(led2, LOW); // ustawiamy diode na stan niski
  delay(50);
  digitalWrite(led1, HIGH); //ustawiamy pin 13 na stan wysoki
  delay(100);
  digitalWrite(led1, LOW); // ustawiamy diode na stan niski
  delay(50);
  digitalWrite(led3, HIGH); //ustawiamy pin 13 na stan wysoki
  delay(100);
  digitalWrite(led3, LOW); // ustawiamy diode na stan niski
  delay(50);
}
