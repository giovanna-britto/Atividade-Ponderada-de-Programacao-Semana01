void setup() {
  //Define o pino como saída
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //Liga o Led do pino selecionado
  digitalWrite(LED_BUILTIN, HIGH);  
  //Aguarda 1 segundo
  delay(1000);       
  //Desliga o Led               
  digitalWrite(LED_BUILTIN, LOW); 
  //Aguarda um segundo  
  delay(1000);                      
}
