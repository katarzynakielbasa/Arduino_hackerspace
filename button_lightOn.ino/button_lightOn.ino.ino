
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
  int i = 0;
  if(i == 0, digitalRead(button1) == 1) {
    digitalWrite(led1, LOW);
    i++;
    delay(500); 

  }else {
    digitalWrite(led1, HIGH);
    
    delay(500); 
  }
  Serial.println(buttonState); //wyswietleamy stan przycisku
  delay(1); 
}
