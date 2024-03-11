/*Declarão das variáveis / numéricos Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estrategica
}

void loop() {
  Serial.print("Digite a nota 1 : ");
  //Lê valor do serial e guarda na variavel nota1
  nota1 = aguardaEntradaNumerica();
  Serial.println(nota1);



  Serial.print("Digite a nota 2 : ");
  nota2 = aguardaEntradaNumerica();
  Serial.println(nota2);



  Serial.print("Digite a nota 3 : ");
  nota3 = aguardaEntradaNumerica();
  Serial.println(nota3);



  //Atribuição dos pesos
  Serial.print("Digite o peso 1 : ");
  peso1 = aguardaEntradaNumerica();
  Serial.println(peso1);



  Serial.print("Digite o peso 2 : ");
  peso2 = aguardaEntradaNumerica();
  Serial.println(peso2);



  Serial.print("Digite o peso 3 : ");
  peso3 = aguardaEntradaNumerica();
  Serial.println(peso3);



  //Calculo da media ponderada:
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  //exibe o valor da media calculada
  Serial.print("A media ponderada e : ");
  Serial.println(media, 1);
  delay(1000);
}

//criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available() > 0) { 
    //Aguarda ate que um valor seja digitado
  }

  //Verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.')
    {
      //Descarta a entrada não numerica
      Serial.read();
      while(Serial.available() == 0){
//Aguardo a nova entrada do usuario
  }
    }

  //Retornar o valor digitado no serial em um tipo floar
  return Serial.parseFloat();
}
