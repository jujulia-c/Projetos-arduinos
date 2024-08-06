void setup () {
  // Configure os pinos como saídas
  pinMode (7, OUTPUT) ;
  pinMode (8, OUTPUT) ;
} 
 void 1oop() {
// Pisca o LED no pino 7 digitalwrite (7, HIGH) ;
 digitalWrite(8, LOW) ;
 digitalWrite(8,HIGH);
 delay (1000); // espera por 1 segundo

 // Pisca o LED no pino 8
  digitalWrite (7, LOW) ;
  digitalWrite (8, HIGH) ;
  delay (1000); // espera por 1 segundo
 }
