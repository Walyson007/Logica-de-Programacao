
// Faça um programa que receba a medida em centímetros
// e exiba esse número em polegadas. 

// Variáveis
float centimetros = 0;
float polegadas = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  // Entrada
  Serial.println("Digite a medida em centimetros:");
  while (!Serial.available()) {}       
  centimetros = Serial.parseFloat();   
  delay(500);                           

  // Processamento
  polegadas = centimetros / 2.54;     

  // Saída
  Serial.print(centimetros);
  Serial.print(" centimetros equivale a ");
  Serial.print(polegadas, 2);          
  Serial.println(" polegadas.");
  
  delay(5000);
}

