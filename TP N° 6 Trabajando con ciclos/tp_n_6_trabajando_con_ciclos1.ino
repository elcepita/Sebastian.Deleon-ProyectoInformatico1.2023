#define rojo 3
#define azul 5
#define verde 6

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  for (int r = 0; r < 255; r++) {
    for (int a = 0; a < 255; a++) {
      for (int v = 0; v < 255; v++) {
        analogWrite(rojo, r);
        analogWrite(azul, a);
        analogWrite(verde, v);
        delay(1);
      }
    }
  }
}