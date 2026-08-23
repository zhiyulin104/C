int a = 1, up = 1;
void setup() {
  pinMode(6, OUTPUT);
}

void loop () {
  a += up;
  if (a <= 1 || a >= 253) {
    up *= (-1);
  }
  analogWrite(6, a);
  delay(10);
}

