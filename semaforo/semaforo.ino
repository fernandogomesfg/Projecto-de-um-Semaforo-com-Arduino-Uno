// -------------------------------------------------------------------------------
// O código abaixo diz respeito ao funcionamento de um semaforo (um sentido)
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 16/06/2021
// -------------------------------------------------------------------------------
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  //Luz Vermelha
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
 

  //Luz Verde
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);

   //Luz Amarela
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);

}
