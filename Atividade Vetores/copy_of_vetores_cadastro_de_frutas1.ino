// C++ code
//
String frutas[6];/*cria um vetor tamanho 6 (preenchendo as posições com string vazia
                     EXEMPLO : String frutas[6] = {"","","","","",""};*/
float precosFrutas[6];
void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO DAVI ***");
  Serial.println();
  //vetor tamanho 6: vai de 0 até 5
  
  Serial.println("Oh DAVIZAO, bora cadastras as frustas!");
  
  Serial.println();
  //Pede a fruta para o usuário
  for(int i = 0; i <= 5; i++){
   Serial.println("Informa qual a" + String(i + 1) +" fruta");
   while(!Serial.available());
   String fruta = Serial.readString();
   
   //pega o preço da fruta
   Serial.println("Qual o preco da" + String(i + 1) +"");
   while(!Serial.available());
   float precosDigitado= Serial.parseFloat();
  
    //põe a fruta na sacola / cadastra a fruta no array/vetor
    frutas[i] = fruta;
    precosFrutas[i] = precosDigitado; 
    
  } //fim do for
  
  
  
  
  
   
  Serial.println("CADASTRO COMPLETO :)");
  Serial.println("--------------------");
  Serial.println("Exibindo os valores cadastrados");
 
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i +1) + "a Fruta: " + frutas[i]);
  Serial.println("Preco da fruta: " + String(precosFrutas[i]));
  Serial.println();
  }
  
}

void loop()
{
}