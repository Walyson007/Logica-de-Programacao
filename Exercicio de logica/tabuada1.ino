// C++ code
//
int resultado;
int tabuada = 0;
void setup()
{
  Serial.begin(9600);
}

void loop(){
 Serial.println("Escolha uma tabuada:");
  Serial.println("-------------------");
 while(!Serial.available());
 tabuada = Serial.parseInt();
  
 for(int contador = 1; contador <= 10; contador ++ ){
   resultado = tabuada * contador;
   Serial.println(String(tabuada) + " X " + String(contador) + " = " + String(resultado));
  }
  delay(1200);
}