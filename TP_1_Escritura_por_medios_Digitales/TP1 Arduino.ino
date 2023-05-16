#define RGB1_G 1
#define RGB1_B 2
#define RGB1_R 3

#define RGB2_G 4
#define RGB2_B 5
#define RGB2_R 6

#define RGB3_G 7
#define RGB3_B 8
#define RGB3_R 9

void setup()
{
  pinMode( RGB1_G , OUTPUT );
  pinMode( RGB1_B , OUTPUT );
  pinMode( RGB1_R , OUTPUT );
  pinMode( RGB2_G , OUTPUT );
  pinMode( RGB2_B , OUTPUT );
  pinMode( RGB2_R , OUTPUT );
  pinMode( RGB3_G , OUTPUT );
  pinMode( RGB3_B , OUTPUT );
  pinMode( RGB3_R , OUTPUT );
}


void loop()
{
  
	analogWrite(  RGB1_G , 0  );
  	analogWrite(  RGB1_B , 0 );
  	analogWrite(  RGB1_R , 100  );
 	delay(1000);
  	digitalWrite(RGB1_R , LOW );
  	delay(1000);
	analogWrite(  RGB2_G , 118  );
  	analogWrite(  RGB2_B , 52 );
  	analogWrite(  RGB2_R , 207  );
  	delay(1000);
  	digitalWrite(RGB2_G , LOW );
  	digitalWrite(RGB2_B , LOW );
  	digitalWrite(RGB2_R , LOW );
  	delay(1000);
  	analogWrite(  RGB3_G , 255  );
  	analogWrite(  RGB3_B , 255 );
  	analogWrite(  RGB3_R , 0  );
  	delay(1000);
    digitalWrite(RGB3_G , LOW );
  	digitalWrite(RGB3_B , LOW );
  	digitalWrite(RGB3_R , LOW );
  	delay(1000);
}