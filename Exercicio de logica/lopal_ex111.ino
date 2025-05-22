// C++ code
//
int numero = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Fale um numero");
  while(!Serial.available());
  numero = Serial.parseInt();

  if (numero >= 0){
    Serial.println("-------------------------------");
    Serial.println("Este numero eh positivo:" + String(numero));
  } else {
    Serial.println("-------------------------------");
    Serial.println("Este numero eh negativo:" + String(numero));
  }
  delay(1000);
}