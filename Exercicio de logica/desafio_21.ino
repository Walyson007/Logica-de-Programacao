void setup()
{
 Serial.begin(9600);
}
//função
void loop()
{
  for(int contador = 0 ; contador <=100 ; contador += 5){
    Serial.println ("Contador: " + String(contador));
    delay(500);
  }
}