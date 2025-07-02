const int potPin = 32;


void setup() {
  Serial.begin(115200);


}

void loop() {
  int potValue = analogRead(potPin);
  
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  
  delay(500);

}
