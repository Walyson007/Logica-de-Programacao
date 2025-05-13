float resultado;
float somar;
float subtrair;
float multiplicar;
float dividir;

int escolhaDaOperacao;
int contador = 0;

float soma (float numero1, float numero2, float numero3 = 0){
  
  return (numero1 + numero2 + numero3);
}
  
float subtrai (float numero1, float numero2, float numero3 = 5){
  
  return (numero1 - numero2 - numero3);
}

float multiplica (float numero1, float numero2, float numero3 = 5){
  
  return (numero1 * numero2 * numero3);
}

float dividi (float numero1, float numero2, float numero3 = 5){
  
  return (numero1 / numero2 / numero3);
}


void setup()
{
  Serial.begin(9600);
  
  float numero1 = 0.0;
  float numero2 = 0.0;
  
  do{
    Serial.println("Bem-vindo(a) a calculadora mega inteligente :P!!!");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available()){} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variável

    Serial.println("Agora, para realizar a operacao, digite o 1º numero:");
    while(!Serial.available()){} //Espera o usuário digitar
    numero1 = Serial.parseFloat();


    Serial.println("Agora, digite o segundo numero:");
    while(!Serial.available()){} //Espera o usuário digitar
    numero2 = Serial.parseFloat();
    
    //VERIFICANDO A ESCOLHA DA OPERAÇÃO  
    switch(escolhaDaOperacao){
      case 1:
        resultado = soma(numero1, numero2);
      	Serial.println("WOW!!! O resultado foi: " + String(resultado));      
      	
      //2a opção - Serial.println("WOW!!! O resultado foi: " + String(somar()));
      	break;
      
      case 2:
       resultado = subtrai(numero1, numero2);
      	Serial.println("WOW!!! O resultado foi: " + String(resultado));
      
      	break;
      
      case 3:
      resultado = multiplica(numero1, numero2);
      	Serial.println("WOW!!! O resultado foi: " + String(resultado));
      	break;
      
      case 4:
      resultado = dividi(numero1, numero2);
      	Serial.println("WOW!!! O resultado foi: " + String(resultado));
      	break;
      
      default:
   		Serial.println("Opção inválida");
      
    }
    
    
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available()){} //Espera o usuário digitar
    
    if(Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      
      //Serial.println("");
      Serial.println("\nAte breve, obrigado por usar a calculadora inteligente ^^");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
  }
  while(contador != 0);
}

void loop()
{
  //sem código
}




