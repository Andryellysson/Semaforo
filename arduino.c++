int carrovermelho = 11;
int carroamarelo = 12;
int carroverde = 13;
int button = 10;
int pedestrevermelho = 7;
int pedestreverde = 6;
bool estadoBotao;

void setup() {
  pinMode(carrovermelho, OUTPUT);
  pinMode(carroamarelo, OUTPUT);
  pinMode(carroverde, OUTPUT);
  pinMode(pedestrevermelho, OUTPUT);
  pinMode(pedestreverde, OUTPUT);
  pinMode(button, INPUT);


}
void loop() {

  estadoBotao = digitalRead(button);
  
  if(estadoBotao == true){
  
  digitalWrite(carrovermelho, LOW);
  digitalWrite(carroamarelo, HIGH);
  digitalWrite(carroverde, LOW);
  digitalWrite(pedestrevermelho, HIGH);
  digitalWrite(pedestreverde, LOW);
  delay(1000);
    
  digitalWrite(carrovermelho, HIGH);
  digitalWrite(carroamarelo, LOW);
  digitalWrite(carroverde, LOW);
  digitalWrite(pedestrevermelho, LOW);
  digitalWrite(pedestreverde, HIGH);
  delay(3000);
    
  }else{
    
  digitalWrite(carrovermelho, LOW);
  digitalWrite(carroamarelo, LOW);
  digitalWrite(carroverde, HIGH);
  digitalWrite(pedestrevermelho, HIGH);
  digitalWrite(pedestreverde, LOW);
              
	}
}

