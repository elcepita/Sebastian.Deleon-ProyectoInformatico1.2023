#define Rojo 2
#define Azul 3
#define Verde 4

#define LDR A0

#define TMP A1

int LDR_val;

void setup()
{
  pinMode(Rojo , OUTPUT);
  pinMode(Azul , OUTPUT);
  pinMode(Verde , OUTPUT);
  
  pinMode(LDR , INPUT);
  pinMode(TMP , INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  LDR_val=map(analogRead(LDR),0,310,0,100);
  
  int senal = analogRead(TMP);
  float volt = (senal * 5.0/1024);
  float temperatura =(volt*100-50);
  
  Serial.print("La luz actual es: ");
  Serial.print(LDR_val );
  Serial.print(" y la temperatura es: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  if (LDR_val==0 && temperatura>90)
  {
    digitalWrite(Rojo , HIGH);
    digitalWrite(Verde , LOW);
    digitalWrite(Azul , LOW);
  }
  if (LDR_val==0 && temperatura<90 && temperatura>18)
  {
    digitalWrite(Verde , HIGH);
    digitalWrite(Azul , LOW);
    digitalWrite(Rojo , LOW);
  }
  if (LDR_val==0 && temperatura<18)
  {
    digitalWrite(Azul , HIGH);
    digitalWrite(Rojo , LOW);
    digitalWrite(Verde , LOW);
  }
  delay(1500);
}