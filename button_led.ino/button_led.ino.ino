
int button1 = 2;
int led1 = 13;
int led2 = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //inicjalizacja terminala
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP); // ustawienie pinu jako wejsciowego oraz podciagniecie pod stan wysoki  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button1); //odczyt stanu pinu
  if(digitalRead(button1) == 0) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  Serial.println(buttonState); //wyswietleamy stan przycisku
  delay(1); 
}
