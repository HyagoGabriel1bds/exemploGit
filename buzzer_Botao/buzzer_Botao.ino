//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
int LED = 3;

void setup() {
  Serial.begin(9600);


  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(LED, OUTPUT);

  delay(1000);  // parada estrategica
}

void loop() {
  digitalWrite(pinoBuzzer, HIGH);  //Desliga o buzzer
  digitalWrite(LED, HIGH);
  delay(1000);
  noTone(pinoBuzzer);      //Desliga o buzzer
  digitalWrite(LED, LOW);  //apaga o LED

  delay(1000);
}
