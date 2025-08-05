const int ledRed    = 2;
const int ledYellow = 4;
const int ledGreen  =  5;

void setup() {

  Serial.begin(115200); // Inicia o monitor serial
  Serial.println("Sistema iniciado!");

  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  //verde
  Serial.println("Sinal VERDE");
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);
  delay(20000); //20 segundos
  desligarTodos();
  delay(500); //sleep de 0.5s

  //amarelo
  Serial.println("Sinal AMARELHO");
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledRed, LOW);
  delay(10000); // 10 segundos
  desligarTodos();
  delay(500); //sleep de 0.5s

  //vermelho
  Serial.println("Sinal VERMELHO");
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, HIGH);
  delay(7000); //7 segundos
  desligarTodos();
  delay(500); //sleep de 0.5s

}

void desligarTodos() {
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, LOW);

}
