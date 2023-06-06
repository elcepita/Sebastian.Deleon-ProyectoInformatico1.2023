#define RGB1_R 2
#define RGB1_A 3
#define RGB1_V 4

#define RGB2_R 6
#define RGB2_A 7
#define RGB2_V 8

#define boton 10
#define potenciometro A0
int lectura = 0;


void setup()
{
  pinMode( RGB1_R , OUTPUT );
  pinMode( RGB1_A , OUTPUT );
  pinMode( RGB1_V , OUTPUT );
  
  pinMode( RGB2_R , OUTPUT );
  pinMode( RGB2_A , OUTPUT );
  pinMode( RGB2_V , OUTPUT );
  
  pinMode( boton , INPUT );
  Serial.begin(9600);
}

void loop()
{
  int estado = digitalRead(boton);
  lectura = analogRead(0);
  
  Serial.print("boton:");
  Serial.println(estado);
  Serial.print("velocidad:");
  Serial.println(lectura);
  
  if (estado==0 ){  
	digitalWrite( RGB2_R , 200  );//naranja
  	digitalWrite( RGB2_A , 0 );
  	digitalWrite( RGB2_V , 100 );
    Serial.print("naranja-");
    delay(lectura);  	
    digitalWrite( RGB2_R , LOW );
  	digitalWrite( RGB2_A , LOW );
  	digitalWrite( RGB2_V , LOW );
    delay(lectura);
    digitalWrite( RGB2_R , 207  );//magenta
  	digitalWrite( RGB2_A , 52 );
  	digitalWrite( RGB2_V , 118 );
    Serial.print("magenta-");
    delay(lectura);
    digitalWrite( RGB2_R , LOW );
  	digitalWrite( RGB2_A , LOW );
  	digitalWrite( RGB2_V , LOW );
    delay(lectura);
    digitalWrite( RGB2_R , 100  );//rojo
  	digitalWrite( RGB2_A , 0 );
  	digitalWrite( RGB2_V , 0 );
    Serial.print("rojo-");
    delay(lectura);
    digitalWrite( RGB2_R , LOW );
  	digitalWrite( RGB2_A , LOW );
  	digitalWrite( RGB2_V , LOW );
    delay(lectura);
    digitalWrite( RGB2_R , HIGH  );//amarrillo
  	digitalWrite( RGB2_A , LOW );
  	digitalWrite( RGB2_V , HIGH );
    Serial.print("amarrillo-");
    delay(lectura);
    digitalWrite( RGB2_R , LOW );
  	digitalWrite( RGB2_A , LOW );
  	digitalWrite( RGB2_V , LOW );
    delay(lectura);
  }else{
	digitalWrite( RGB1_R , 200  );//naranja
  	digitalWrite( RGB1_A , 0 );
  	digitalWrite( RGB1_V , 100 );
    Serial.print("naranja-");
    delay(lectura);  	
    digitalWrite( RGB1_R , LOW );
  	digitalWrite( RGB1_A , LOW );
  	digitalWrite( RGB1_V , LOW );
    delay(lectura);
    digitalWrite( RGB1_R , 207  );//magenta
  	digitalWrite( RGB1_A , 52 );
  	digitalWrite( RGB1_V , 118 );
    Serial.print("magenta-");
    delay(lectura);
    digitalWrite( RGB1_R , LOW );
  	digitalWrite( RGB1_A , LOW );
  	digitalWrite( RGB1_V , LOW );
    delay(lectura);
    digitalWrite( RGB1_R , 100  );//rojo
  	digitalWrite( RGB1_A , 0 );
  	digitalWrite( RGB1_V , 0 );
    Serial.print("rojo-");
    delay(lectura);
    digitalWrite( RGB1_R , LOW );
  	digitalWrite( RGB1_A , LOW );
  	digitalWrite( RGB1_V , LOW );
    delay(lectura);
    digitalWrite( RGB1_R , HIGH  );//amarrillo
  	digitalWrite( RGB1_A , LOW );
  	digitalWrite( RGB1_V , HIGH );
    Serial.print("amarrillo-");
    delay(lectura);
    digitalWrite( RGB1_R , LOW );
  	digitalWrite( RGB1_A , LOW );
  	digitalWrite( RGB1_V , LOW );
    delay(lectura);
    
  }
}