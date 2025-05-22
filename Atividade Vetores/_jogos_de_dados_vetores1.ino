//Variáveis Globais


void cabecalho()
{
  Serial.println();
  Serial.println("                  --Programa Jogo De Dados--                  ");
  Serial.println("                         -iniciar-                            ");
  Serial.println();
}//fim do cabecalho

void pontilhado()
{
  Serial.print("Jogando o dado");
  for( int ponto = 0; ponto <= 3; ponto++){
    Serial.print(".");
    delay(700);
  }//fim do for

}//fim do pontilhado

void pontilhado2()
{
  Serial.print("Reiniciando o jogo ");
  for( int ponto = 0; ponto <= 3; ponto++){
    Serial.print(".");
    delay(700);
  }//fim do for

}//fim do pontilhado

void setup()
{
  Serial.begin(9600);//configura o monitor
}

void loop()
{
  cabecalho();//chama a função

  Serial.println("Quantas vezes voce quer jogar? ");
  while(! Serial.available () ){}
  int rodadas = Serial.parseInt();

  int vetPalpites[rodadas];
  int vetResultados[rodadas];

  for(int r = 1; r <= rodadas; r++){//aqui dentro, o jogo todo!!!

    Serial.println();
    Serial.println("Digite um numero de 1 a 6: ");
    while(! Serial.available () ){}//solicita um número para o usuário e aguarda o próprio dar <Enter>
    int numeroSolicitado = Serial.parseInt();

    Serial.println("Sua escolha bbzao: " + String(numeroSolicitado));

    pontilhado();//chama a função

    Serial.println(" ");//pula linha
    Serial.println(" ");//pula linha

    //jogar dado
    int numeroSorteado = random(1, 7); //sorteia um número randomico/aleatório de 1 até 7 - 1, ou seja, 6

    vetPalpites[r-1] = numeroSolicitado;
    vetResultados[r-1] = numeroSorteado;

    Serial.println("Numero sorteado: " + String(numeroSorteado));

    if (numeroSolicitado == numeroSorteado){
      Serial.println("Boa meu bom, voce acertou!!");
    } else {
      Serial.println("Lamentavel seu ruim, voce errou, tente outra vez!");
    }

    pontilhado2();//chama a função

    delay(2000);



  }//fim do for da rodada

  
  Serial.println("ESTATISTICAS DAS JOGADAS");
  Serial.println();
  for(int i = 1; i <= rodadas; i++){

    
    Serial.println("rodadas " + String(i) + ":");
    Serial.println("Palpites:" + String(vetPalpites[i]));
    Serial.println("Dado:" + String(vetResultados[i]));
    Serial.println("Resultado:" + String(vetResultados[i] == vetPalpites[i] ? "Acertou": "Errou ruim"));
    Serial.println("------------------------------");
    Serial.println();

  }


  Serial.println();
  Serial.println("ACABOU, REINICIANDO O SISTEMA!!");
  pontilhado2();
  Serial.println(" ");//pula linha



}//fim do loop 
