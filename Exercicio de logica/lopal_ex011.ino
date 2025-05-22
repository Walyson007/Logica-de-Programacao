//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("Digite a idade");//pergunta a idade do usuário
  while( ! Serial.available() ){}//Aguarda o usuário
  idade = Serial.parseInt();
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = 24 * 365 * idade;
  idadeMinutos = idadeHoras * 60;
  
  //Saída
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) );
  Serial.println("Sua idade em horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
}