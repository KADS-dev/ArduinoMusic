



void setup() {
   


  // put your setup code here, to run once:
pinMode (9, OUTPUT);

//Do mi sol mi do mi sol mi
// do re mi fa sol la si do re mi fa sol
// SOL  SOL SOL  SOL SOL SOL  SOL SOL
sonar();
}

void loop() {

}

void sonar(){
  
  for(int i = 0; i < 1; i++){

  float redonda = 4000*.32,
  blanca = 2000*.32,
  negra = 1000*.32,
  corchea = 500*.32,
  semiCorchea = 250*.32,
  fusa = 125*.32,
  semiFusa = 62*.32;

  float a = .32;
  
  double DO4=261.63,
  RE4=293.67,
  MI4=329.63,
  FA4=349.23,
  SOL4=392.00,
  LA4=440.00,
  SI4=493.88,
  DO5=523.25,
  RE5=587.33,
  MI5=659.26,
  FA5=698.46,
  SOL5=783.99,
  PAUS=30000; //pausa

 double notas[] = {DO5, MI5, SOL5, MI5,
 DO5, MI5, SOL5, MI5,
 LA4, DO5, MI5, DO5,
 LA4, DO5, MI5, DO5,
 SOL4, SI4, RE5, SI4,
 SOL4, SI4, RE5, SI4,
 SOL4, SOL4, SOL4, SOL4,
 SOL4, SOL4, SOL4, SOL4,
 DO5, MI5, SOL5, MI5,
 DO5, MI5, SOL5, MI5,
 SI4, RE5, FA5, RE5,
 SI4, RE5, FA5, RE5,
 LA4, DO5, MI5, DO5,
 LA4, DO5, MI5, DO5,
 SOL4, SOL4};
   float tiempos[] = {negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  negra, negra, negra, negra,
  negra, corchea, (negra + corchea), negra,
  blanca, blanca};
    
  
  
  // put your main code here, to run repeatedly:

for(int i = 0; i < 58; i++){

  tone(9,notas[i],tiempos[i]);
  delay(tiempos[i]);
  
}




/*
 
  tone(9,DO5,negra);
  delay(a*negra);
  tone(9,MI5,negra);
  delay(a*negra);
  tone(9,SOL5,negra);
  delay(a*negra);
  tone(9,MI5,negra);
  delay(a*negra);

  
  tone(9,DO5,negra);
  delay(a*negra);
  tone(9,MI5,corchea);
  delay(a*corchea);
  tone(9,SOL5,(negra+corchea));
  delay((negra+corchea)*a);
  tone(9,MI5,negra);
  delay(a*negra);
  

  tone(9,LA4,negra);
  delay(a*negra);
  tone(9,DO5,negra);
  delay(a*negra);
  tone(9,MI5,negra);
  delay(a*negra);
  tone(9,DO5,300);
  delay(a*negra);

  
  tone(9,LA4,negra);
  delay(a*negra);
  tone(9,DO5,corchea);
  delay(a*corchea);
  tone(9,MI5,(negra+corchea));
  delay(a*(negra+corchea));
  tone(9,DO5,negra);
  delay(a*negra);
  
  tone(9,SOL4,negra);
  delay(a*negra);
  tone(9,SI4,negra);
  delay(a*negra);
  tone(9,RE5,negra);
  delay(a*negra);
  tone(9,SI4,negra);
  delay(a*negra);
  
  tone(9,SOL4,negra);
  delay(a*negra);
  tone(9,SI4,corchea);
  delay(a*corchea);
  tone(9,RE5,(negra+corchea));
  delay(a*(negra+corchea));
  tone(9,SI4,negra);
  delay(a*negra);

  tone(9,SOL4,negra);
  delay(negra*a);
  tone(9,SOL4,negra);
  delay(negra*a);
  tone(9,SOL4,negra);
  delay(negra*a);
  tone(9,SOL4,negra);
  delay(negra*a);
  
  tone(9,SOL4,negra);
  delay(negra*a);
  tone(9,SOL4,corchea);
  delay(corchea*a);
  tone(9,SOL4,(negra + corchea));
  delay((negra + corchea)*a);
  tone(9,SOL4,negra);
  delay(negra*a);


  tone(9,DO5,negra);
  delay(negra*a);
  tone(9,MI5,negra);
  delay(negra*a);
  tone(9,SOL5,negra);
  delay(negra*a);
  tone(9,MI5,negra);
  delay(negra*a);

  
  tone(9,DO5,negra);
  delay(negra*a);
  tone(9,MI5,corchea);
  delay(corchea*a);
  tone(9,SOL5,(negra + corchea));
  delay((negra + corchea)*a);
  tone(9,MI5,negra);
  delay(negra*a);

  
  tone(9,SI4,negra);
  delay(negra*a);
  tone(9,RE5,negra);
  delay(negra*a);
  tone(9,FA5,negra);
  delay(negra*a);
  tone(9,RE5,negra);
  delay(negra*a);

  
  tone(9,SI4,negra);
  delay(negra*a);
  tone(9,RE5,corchea);
  delay(corchea*a);
  tone(9,FA5,(negra + corchea));
  delay((negra + corchea)*a);
  tone(9,RE5,negra);
  delay(negra*a);

  
  tone(9,LA4,negra);
  delay(negra*a);
  tone(9,DO5,negra);
  delay(negra*a);
  tone(9,MI5,negra);
  delay(negra*a);
  tone(9,DO5,negra);
  delay(negra*a);


  
  tone(9,LA4,negra);
  delay(negra*a);
  tone(9,DO5,corchea);
  delay(corchea*a);
  tone(9,MI5,(negra + corchea));
  delay((negra + corchea)*a);
  tone(9,DO5,negra);
  delay(negra*a);


 tone(9,SOL4,blanca);
  delay(blanca*a);

  
 tone(9,SOL4,blanca);
  delay(blanca*a);
  */

  }
  

  
}
