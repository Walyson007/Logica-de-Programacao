//While - È uma estrutura de repteição que só executa repetição/laço enquanto a condição for vedadeira
//

/*Do While - É uma estrutura de repetição que executa PELO MENOS UMA VEZ independente da condição.
Em seguida continuará executando enquanto a condição for verdadeira.
*/

/* For - É uma estrutura de repetição que tem dentro da condição a 
iniciaização, a propria condição do for e incremento.
Ponto de atenção: as definições são separados pro ;
*/

void setup()
{
 Serial.begin(9600);
}
//função
void loop()
{
  //while 
  int contadorWhile = 1; //variavel local
  
  while(contadorWhile >= 5 ){
    Serial.println(String(contadorWhile));
    //contadorWhile = contadorWhile + 1;
    contadorWhile--;
  }
  delay(1000);
  
  
  
  
  //do while
  int contadorDoWhile = 1;
    
   do{
   Serial.println("Contando Do while" + String(contadorDoWhile));
   contadorDoWhile++; 
  }
  while(contadorDoWhile <= 5); //Executa pelo menos uma vez e a partir de então só irá entrar no corpo se a condição for verdadeira
    delay(1200);
  
  
  
  //for
  for(int contador = 1; contador <= 5; contador++){
    Serial.println("contador do for" + String(contador));
  }
  delay(1200);
}
