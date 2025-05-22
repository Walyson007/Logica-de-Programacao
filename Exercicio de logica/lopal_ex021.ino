// Faça um programa que receba o ano de nascimento
// de uma pessoa e o ano atual. Calcule e imprima:
// a. A idade dessa pessoa
// b. Essa idade convertida em semanas

// Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  // Entrada
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available()) {}         
  anoNascimento = Serial.parseInt();     
  delay(500);                            

  Serial.println("Digite o ano atual:");
  while (!Serial.available()) {}         
  anoAtual = Serial.parseInt();          
  delay(500);

  // Processamento
  idade = anoAtual - anoNascimento;      
  idadeSemanas = idade * 52;             

  // Saída
  Serial.println("Resultado:");
  Serial.print("Idade: ");
  Serial.println(idade);
  Serial.print("Idade em semanas: ");
  Serial.println(idadeSemanas);  

  delay(5000); 
}
