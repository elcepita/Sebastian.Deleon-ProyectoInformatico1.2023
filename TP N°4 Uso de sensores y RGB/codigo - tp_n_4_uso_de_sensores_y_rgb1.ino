#define rojo 2
#define azul 3
#define verde 4

#define ldr  A0
#define temp A1

int tmp;
int luz;
int valtemp;
int valluz;

void setup()
{
  pinMode(  ldr , INPUT  );
  pinMode(  temp , INPUT  );
  pinMode(  rojo , OUTPUT );
    pinMode(  azul , OUTPUT );
    pinMode(  verde , OUTPUT );
 
  Serial.begin( 9600 );
}

void loop()
{
   
    int luz = analogRead( ldr );
  int valluz = map(luz , 1 , 310 , 0 , 100);
Serial.print( "El nivel de luz actual es: " );
  Serial.println( valluz );
int tmp = analogRead(temp);
  float volt = (tmp * 5.0 / 1024);
  float valtemp = ( volt * 100 - 50 );
    Serial.print( " y la temperatura actual: "  );
    Serial.print( valtemp );
    Serial.println( "°C" );
    delay(1000);
   
    if(valluz == 0){
      if(valtemp >= 90 ){
          digitalWrite(rojo, HIGH);
          digitalWrite(azul, LOW);
          digitalWrite(verde, LOW);
      }
      if(valtemp <= 18){
          digitalWrite(rojo, LOW);
          digitalWrite(azul, HIGH);
          digitalWrite(verde, LOW);
      }
      if(valtemp > 18 && valtemp < 90 ){
          digitalWrite(rojo, LOW);
          digitalWrite(azul, LOW);
          digitalWrite(verde, HIGH);
      }
    }
    else{
    digitalWrite(rojo,  LOW);
    digitalWrite(azul,  LOW);
    digitalWrite(verde, LOW);
  }
 
}
