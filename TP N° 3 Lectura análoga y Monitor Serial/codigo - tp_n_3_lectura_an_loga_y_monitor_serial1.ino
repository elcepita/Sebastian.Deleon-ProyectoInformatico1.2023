#define Rojo 2
#define Azul 5
#define Verde 6

#define boton 8

int pot_R=A0;
int pot_R_val;

int pot_A=A1;
int pot_A_val;

int pot_V=A2;
int pot_V_val;

int color_R;
int color_A;
int color_V;

int count=0;
void setup()
{
 pinMode(Rojo , OUTPUT);
 pinMode(Azul , OUTPUT);
 pinMode(Verde , OUTPUT);
  
 pinMode(boton,INPUT);
  
 Serial.begin(9600); 
}

void loop()
{
  pot_R_val=analogRead(pot_R);
  color_R=map(pot_R_val,0,1023,0,255);
  
  pot_A_val=analogRead(pot_A);
  color_A=map(pot_A_val,0,1023,0,255);
  
  pot_V_val=analogRead(pot_V);
  color_V=map(pot_V_val,0,1023,0,255);
  
  if(digitalRead(boton)==LOW && count==0)
  {
  Serial.println("10 sengundos para cambiar el color del led");
  delay(10000);
  analogWrite(Rojo , color_R);
  analogWrite(Azul , color_A);
  analogWrite(Verde , color_V);
  Serial.print("El led esta usando estos colores: ");
  Serial.print(" Rojo: ");
  Serial.print(color_R);
  Serial.print("  Azul: ");
    Serial.print(color_A);
  Serial.print("  Verde: ");
  Serial.println(color_V);
  }
  
   if(digitalRead(boton)==LOW && count==1)
  {
  Serial.println("10 s para cambiar el color del led");
  delay(10000);
  analogWrite(Rojo , color_R);
  analogWrite(Azul , color_A);
  analogWrite(Verde , color_V);
  Serial.print("El led esta usando estos colores: ");
  Serial.print(" Rojo: ");
  Serial.print(color_R);
  Serial.print("  Azul: ");
  Serial.print(color_A);
  Serial.print("  Verde: ");
  Serial.println(color_V);
  }
  
}