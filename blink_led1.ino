void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); //inicializa o pino LED_BUILTIN como output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); //liga o LED
  delay(150); //espera 150milissegundos
  digitalWrite(LED_BUILTIN, LOW); //desliga o LED
  delay(200); // espera 200milissegundos
}
