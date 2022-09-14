
String input = "AYUSH";
char ch;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);                                  
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);                                  
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}


void morse_print()
{
  if (ch = 'A')
  {
    dot();
    dash();
    delay(900);
  }

  if (ch = 'B')
  {

    dash();
    dot();
    dot();
    dot();
    delay(900);
  }
  if (ch = 'C')
  {

    dash();
    dot();
    dash();
    dot();
    delay(900);
  }
  if (ch = 'D')
  {

    dash();
    dot();
    dot();
    delay(900);
  }
  if (ch = 'E')
  {
    dot();
    delay(900);
  }
  if (ch = 'F')
  {
    dot();
    dot();
    dash();
    dot();
    delay(900);
  }
  if (ch = 'G')
  {

    dash();
    dash();
    dot();
    delay(900);
  }
  if (ch = 'H')
  {
    dot();
    dot();
    dot();
    dot();
    delay(900);
  }
  if (ch = 'I')
  {
    dot();
    dot();
    delay(900);
  }
  if (ch = 'J')
  {
    dot();
    dash();
    dash();
    dash();
    delay(900);
  }
  if (ch = 'K')
  {
    dash();
    dot();
    dash();
    delay(900);
  }
  if (ch = 'L')
  {
    dot();
    dash();
    dot();
    dot();
    delay(900);
  }
  if (ch = 'M')
  {

    dash();
    dash();
    delay(900);
  }
  if (ch = 'N')
  {
    dash();
    dot();
    delay(900);
  }
  if (ch = 'O')
  {
    dash();
    dash();
    dash();
    delay(900);
  }
  if (ch = 'P')
  {
    dot();
    dash();
    dash();
    dot();
    delay(900);
  }
  if (ch = 'Q')
  {
    dash();
    dash();
    dot();
    dash();
    delay(900);
  }

  if (ch = 'R')
  {
    dot();
    dash();
    dot();
    delay(900);
  }
  if (ch = 'S')
  {
    dot();
    dot();
    dot();
    delay(900);
  }
  if (ch = 'T')
  {
    dash();
    delay(900);
  }
  if (ch = 'U')
  {
    dot();
    dot();
    dash();
    delay(900);
  }
  if (ch = 'V')
  {
    dot();
    dot();
    dot();
    dash();
    delay(900);
  }
  if (ch = 'W')
  {
    dot();
    dash();
    dash();
    delay(900);
  }
  if (ch = 'X')
  {
    dash();
    dot();
    dot();
    dash();
    delay(900);
  }
  if (ch = 'Y')
  {
    dash();
    dot();
    dash();
    dash();
    delay(900);
  }
  if (ch = 'Z')
  {

    dash();
    dash();
    dot();
    dot();
    delay(900);
  }
  else
  {
    Serial.println("Enter a valid input");
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < input.length(); i++)
  {
    ch = input.charAt(i);
    Serial.println(ch);
    morse_print();
  }
}
