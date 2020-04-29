void setup() {
   
  sonar();

  // put your setup code here, to run once:
pinMode (9, OUTPUT);

//Do mi sol mi do mi sol mi
// do re mi fa sol la si do re mi fa sol 

/*

mi3, mi3, mi4, mi3,
mi3, re4, mi3, mi3,

do4, mi3, mi3, #la3,
mi3, mi3, si3, do4,

mi3, mi3, mi4, mi4,
mi3, re4, mi3, mi3,

do4, mi3, mi3, #la 3
_ la3


corchea, corchea, corchea
 
 */
}

void loop(){}


void sonar() {
  
  float redonda = 4000*.32,
  blanca = 2000*.32,
  negra = 1000*.32,
  corchea = 500*.32,

  terceraParte = 333*.32,
  
  semiCorchea = 250*.32,
  fusa = 125*.32,
  semiFusa = 62*.32;

  float a = .32;
  
  double DO3=130.81,
  DOs3=138.59,
  RE3=146.83,
  REs3=155.56,
  MI3=164.81,
  FA3=174.61,
  FAs3=185.00,
  SOL3=196.00,
  SOLs3=207.65,
  LA3=220.00,
  LAs3=233.00,
  SI3=246.94,
  
  DO4=261.63,
  DOs4=277.18,
  RE4=293.67,
  REs4=311.13,
  MI4=329.63,
  FA4=349.23,
  FAs4=369.99,
  SOL4=392.00,
  SOLs4=415.31,
  LA4=440.00,
  LAs4=466.16,
  SI4=493.88,
  
  DO5=523.25,
  DOs5=554.37,
  RE5=587.33,
  REs5=622.25,
  MI5=659.26,
  FA5=698.46,
  FAs5=739.99,
  SOL5=783.99,
  SOLs5=830.61,
  LA5=880.00,
  LAs5=932.33,
  SI5=987.77,
  PAUS=30000; //pausa

 double notas[] = {
  PAUS, 
  PAUS,
  LAs4, LAs5, LAs4, LAs5,
  
  PAUS,
  
  PAUS,
  
  PAUS,
  LAs4, LAs5, LAs4, LAs5,
  PAUS,

  PAUS,
  LAs4,DOs5, 
  MI5, LAs4, DOs5, REs5,

 
 };
 
   float tiempos[] = {
   
    blanca,
    negra,
    semiCorchea, semiCorchea, semiCorchea, semiCorchea,

    redonda,
    
    redonda,
    
    blanca,
    semiCorchea, semiCorchea, semiCorchea, semiCorchea,
    negra,
    
    corchea, corchea, corchea, corchea,
   };
        
for(int i = 0; i < 18; i++){

  tone(9,notas[i],tiempos[i]);
  delay(tiempos[i]);
  
}
  
}
