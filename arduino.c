const int LDR_PIN = A0;     
const int LED_VERDE = 2;    
const int LED_AMARELO = 3;  
const int LED_VERMELHO = 4;  
const int BUZZER_PIN = 5;   

const int LIMITE_OK = 300;         
const int LIMITE_ALERTA = 600;     

int luminosidade = 0;
bool alertaAtivo = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  
  luminosidade = analogRead(LDR_PIN);
  Serial.println(luminosidade);

  if (luminosidade < LIMITE_OK) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    noTone(BUZZER_PIN);
    alertaAtivo = false;
  } 
  else if (luminosidade < LIMITE_ALERTA) {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    
    if (!alertaAtivo) {
      alertaAtivo = true;
      tone(BUZZER_PIN, 1000); 
      delay(3000);            
      noTone(BUZZER_PIN);
    }
  } 
  else {
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    noTone(BUZZER_PIN);
    alertaAtivo = false;
  }

  delay(500);
}
