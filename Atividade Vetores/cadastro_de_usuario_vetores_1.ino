// C++ code
//

String convidados[4];
 int idadeConvidados [4];
  String emailConvidados[4];

//Funções
void desenhaCabecalho(){
  Serial.println("----------------------------------------");
  Serial.println("*VOCE FOI CONVIDADO PRO CHURRAS DANIEL*");
  Serial.println("");
  Serial.println("       informe seu cadastro:   ");
  Serial.println("----------------------------------------");
  Serial.println("");
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  desenhaCabecalho();//chama a função pra desenhar o cabeçalho
     
  //cadastrar os dados
  for(int i = 0; i < 2; i++){
  
  //solitar o nome do usuario
    Serial.println(String(i + 1) + "o: Informe   o seu nome bbzao:");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
  //solicitar a idade
    // forma de fazer Serial.println("Sua idade" + convidados[i] + ":");
    Serial.println("Sua idade:");
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
  //solicitar o email
    Serial.println("Seu email:");
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    Serial.println("");
    
  }//fim do for
  delay(2000);
  
  Serial.println("**CONVIDADOS ACEITOS**");
  Serial.println("           -           ");
  
  for(int i = 0; i < 2; i++){
   Serial.println("Nome: " + convidados[i]);
    Serial.println("Idade: " + String(idadeConvidados[i]));
    Serial.println("Email: " + emailConvidados[i]);
    Serial.println("Permissao para a festa: " +  String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));

    Serial.println("----------");
    Serial.println();
      }
  
}//Fim do loop
                                                     /*Serial.println("Nome: " + convidados[i]);
                                                       Serial.println("Idade: " + String(idadeConvidados[i]));
                                                        Serial.println("Email: " + emailConvidados[i]); 
                                                        Serial.println("------------");
                                                        if(idadeConvidados[i] >= 18){
                                                        Serial.println("So vem");
                                                         Serial.println("  -  ");
                                                        } else{
                                                        Serial.println("Nao vai ta podendo bbzao");*/  
