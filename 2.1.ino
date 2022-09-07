void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);   // Creating dash effect
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
}
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);   // Creating dot effect
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
void loop() {
  // put your main code here, to run repeatedly:
  dot();

  dash();

  dash();

  dot();

  dash();

  dash();

  dot();

  dot();

  dash();

  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();

}
