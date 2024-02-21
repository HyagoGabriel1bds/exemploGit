// declaração de variavel para numeros decimais
float sal_atual, novo_sal;


void setup() {
  // Configuração do sistema
  // Sera executada apenas no inicio
  //Declaraçao de saida//

  sal_atual = 1200;

  //verificando o valor do salario com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //inicio
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual * 1.1;
  } else {
    novo_sal = 0;
  }


  //Iniciando a comunicaçao com o Monitor Serial
  Serial.begin(9600);
}

void loop() {
  // Código que sera executado repetidamente
  //Serial.print("Hoje é o ultimo dia do mês de janeiro ");  // Mostra a frase do monitor

  if (novo_sal == 0)
    Serial.println("Digite um salario valido!!!");

  else {

    //exibindo o novo salario
    Serial.print("Novo Salario: ");
    Serial.println(novo_sal);
    Serial.println("----------------");
  }

  delay(1000);  // espera 1 segundo antes de seguir o loop
}
