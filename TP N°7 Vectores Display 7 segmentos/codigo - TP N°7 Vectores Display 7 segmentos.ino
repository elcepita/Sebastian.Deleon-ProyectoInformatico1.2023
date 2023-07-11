#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8

 
int pines[]={a,b,c,d,e,f,g, 10, 11, 12, 13};
int senal[]={1,1,1,1,1,1,1,  0,  0,  0,  0};

int binario[4];
int peso[]={8, 4, 2, 1};

/////////////////////(a,b,c,d,e,f,g)
int numeroUNO[]		={0,1,1,0,0,0,0};
int numeroDOS[]		={1,1,0,1,1,0,1};
int numeroTRES[]	={1,1,1,1,0,0,1};
int numeroCUATRO[]	={0,1,1,0,0,1,1};
int numeroCINCO[]	={1,0,1,1,0,1,1};
int numeroSEIS[]	={1,0,1,1,1,1,1};
int numeroSIETE[]	={1,1,1,0,0,0,0};
int numeroOCHO[]	={1,1,1,1,1,1,1};
int numeroNUEVE[]	={1,1,1,1,0,1,1};
int numeroA[]		={1,1,1,0,1,1,1};
int numeroB[]		={0,0,1,1,1,1,1};
int numeroC[]		={0,0,0,1,1,0,1};
int numeroD[]		={0,1,1,1,1,0,1};
int numeroE[]		={1,0,0,1,1,1,1};
int numeroF[]		={1,0,0,0,1,1,1};

int* numeros[]= {0, numeroUNO, numeroDOS, numeroTRES, numeroCUATRO, numeroCINCO, numeroSEIS,  numeroSIETE, numeroOCHO, numeroNUEVE, numeroA,numeroB,numeroC,numeroD,numeroE,numeroF};

void setup()
{

  Serial.begin(9600);
  randomSeed( analogRead(A0) );
  
  
  //16 8 4 2 1 <=peso
  // 1 0 1 0 1 <=bin
  
  //(sizeof(senal)/sizeof(int))
  //for(int i< (sizeof(pines)/sizeof(int)) ) sirve para cuando no sabes la cantidad
  
  for(int i=0 ; i<(sizeof(pines)/sizeof(int)) ; i++)
  {
    pinMode(pines[i] , senal[i] );
  }
  
  // messi++ == messi=messi+1, messi--
  for(int saf=0 ; saf<(sizeof(pines)/sizeof(int)) ; saf++)
  {
    //Serial.println( pines[saf] ); 
    


    
    

    
  }
 
}

void loop()
{
  int aleatorio=random(0,101);
  Serial.println(aleatorio);
  delay(250);
  
  binario[0]=digitalRead(10);
  binario[1]=digitalRead(11);
  binario[2]=digitalRead(12);
  binario[3]=digitalRead(13);
  
  Serial.print(binario[0] );
  Serial.print(binario[1] );
  Serial.print(binario[2] );
  Serial.print(binario[3] );
  
  int dec=0;
  
  for(int i=0 ; i<4 ; i++)
  {
    dec = dec + peso[i]*binario[i];
  }
  //int dec = (8*binario[0])+
  			//(4*binario[1])+
  			//(2*binario[2])+
  			//(1*binario[3]);
  Serial.print("=");
  Serial.println(dec);
  
      
   for(int mussolini=0 ; mussolini<3 ; mussolini++)
   {
     for (int videla=0 ; videla<7 ; videla++)
     {
       digitalWrite(pines[videla], numeros[dec][videla]);
     }     
     delay(100);
   }
}
  
  
  
  
  
  
  
 