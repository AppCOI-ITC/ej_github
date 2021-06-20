#define LEDPIN 2
bool prendido = true;
long ciclos = 0;

void setup() {
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
//  lo que se supone que se tendria que hacer
//  digitalWrite(LEDPIN, HIGH);
//  digitalWrite(LEDPIN, LOW);
//  delay(1000);

//pero aca vamos a hacer las cosas mal, porque? porque se puede
if(prendido){
  digitalWrite(LEDPIN, HIGH);
} else{
  digitalWrite(LEDPIN, LOW);  
}
ciclos++;
if(ciclos > 150000){
  prendido = !prendido;
  ciclos = 0;  
}
}
