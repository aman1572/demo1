void setup() {
  pinMode(9, INPUT);
  pinMode(4, OUTPUT);

}
int i = 0;
void loop() {

  if ((digitalRead(9) == HIGH && i == 0) )
  {
    digitalWrite(4, 1);
    i = 1;
  }
  else if (digitalRead(9) == LOW && i == 1)
  {
    digitalWrite(4, HIGH);
    i = 2;
  }
  else if ((digitalRead(9) == HIGH && i == 2))
  {
    digitalWrite(4, LOW);
    i = 3;
  }
  else if ((digitalRead(9) == LOW && i == 3))
  {
    digitalWrite(4, LOW);
    i = 0;
  }
}
