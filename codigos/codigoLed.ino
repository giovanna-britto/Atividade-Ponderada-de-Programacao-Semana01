void setup()
{
  //Definição da porta 11 do Arduino como saída
  pinMode(11, OUTPUT);
}
  
void loop()
{
  //Liga o Led conectado na porta 11
  digitalWrite(11, HIGH);
  //Espera 1 segundo
  delay(1000);
  //Desliga o led conectado na porta 11
  digitalWrite(11, LOW);
  //Espera 1 segundo
  delay(1000);
}