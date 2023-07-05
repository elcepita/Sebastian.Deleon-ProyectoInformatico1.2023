#define Led1_R 2
#define Led1_A 3
#define Led1_V 4

#define Led2_R 6
#define Led2_A 7
#define Led2_V 8

#define Led3_R 8
#define Led3_A 9
#define Led3_V 10

#define boton 12

int p=A0;
int pot_v;
int m;

void setup()
{
  pinMode( Led1_R, OUTPUT);
  pinMode( Led1_A, OUTPUT);
  pinMode( Led1_V, OUTPUT);
  
  pinMode( Led2_R, OUTPUT);
  pinMode( Led2_A, OUTPUT);
  pinMode( Led2_V, OUTPUT);
  
  pinMode( Led3_R, OUTPUT);
  pinMode( Led3_A, OUTPUT);
  pinMode( Led3_V, OUTPUT);
  pinMode( boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  pot_v=analogRead(p);
  m=map(pot_v,0,1000,250,500);
  Serial.println(m);
  
  if(digitalRead(boton)==HIGH)
  {
  analogWrite (Led1_R , 255);
  delay(m);
  analogWrite(Led1_R,0);
  delay(m);
  digitalWrite (Led2_R , HIGH);
  digitalWrite (Led2_A ,HIGH);
  delay(m);
  digitalWrite (Led2_R , LOW);
  digitalWrite (Led2_A ,LOW);
  delay(m);
  analogWrite (Led3_A,100);
  analogWrite (Led3_V,100);
  delay(m);
  analogWrite (Led3_A,0);
  analogWrite (Led3_V,0);
  delay(m);
  }else
  {
    analogWrite(Led1_R,0);
    digitalWrite (Led2_R , LOW);
    digitalWrite (Led2_A ,LOW);
    analogWrite (Led3_A,0);
    analogWrite (Led3_V,0);
  }
}