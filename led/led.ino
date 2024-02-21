//Declaraçao de variavel que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  delay(1000);
}
void loop() {
  digitalwrite(ledAmarelo, HIGH);
  delay(1000);
  digitalwrite(ledAmarelo, LOW);
  delay(1000);
}



}

