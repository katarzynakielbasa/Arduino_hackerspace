
int button1 = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //inicjalizacja terminala
  pinMode(button1, INPUT_PULLUP); // ustawienie pinu jako wejsciowego oraz podciagniecie pod stan wysoki  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button1); //odczyt stanu pinu
  Serial.println(buttonState); //wyswietleamy stan przycisku
  delay(1); 
}
