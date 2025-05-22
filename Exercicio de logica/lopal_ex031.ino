// Faça um programa que receba um número 
// e exiba o seu dobro

// Variáveis
int numero = 0;
int dobro = 0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  // Entrada
  Serial.println("Digite um numero:");
  while (!Serial.available()) {}       
  numero = Serial.parseInt();          
  delay(500);                          

  // Processamento
  dobro = numero * 2;                  

  // Saída
  Serial.print("O dobro de ");
  Serial.print(numero);
  Serial.print(" eh: ");
  Serial.println(dobro);

  delay(5000); 
}
