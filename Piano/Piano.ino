//Definição das costantes: pinos de entrdada
#define pinoBuzzer 2

//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo 10

byte doh, re, mi, fa, so, la, si, doh2 = 0;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);
  so = digitalRead(pinoSo);
  la = digitalRead(pinoLa);
  si = digitalRead(pinoSi);
  doh2 = digitalRead(pinoDo);

  //Verificando qual nota foi acionada
  if (doh == 1)
    ;
  {
    //Ativa a nota dó
    tone(pinoBuzzer, 523);
  }
  else if (re == 1);
  {
    tone(pinoBuzzer, 587);
  }

  else if (mi == 1);
  {
    tone(pinoBuzzer, 659);
  }

  else if (fa == 1);
  {
    tone(pinoBuzzer, 698);
  }

  else if (so == 1);
  {
    tone(pinoBuzzer, 783);
  }

  else if (la == 1);
  {
    tone(pinoBuzzer, 880);
  }


  {
     else if (si == 1);
    tone(pinoBuzzer, 987);
  }

 
  {
    else if (doh2 == 1);
    tone(pinoBuzzer, 523);
  }

  else {
    //desliga a buzzer
    noTone(pinoBuzzer);
  }

  delay(50);
}
