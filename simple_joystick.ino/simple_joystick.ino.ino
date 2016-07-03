int x = A0;
int y = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("x, y: ");
  Serial.print(analogRead(x));
  Serial.print(",");
  Serial.println(analogRead(y));
  delay(500);
}
