const int pushButton = 7
const int led = 2

int leitura = 0
int statusLed = 0

void setup() {
pinMode(pushButton, INPUT_PULLUP)
pinMode(led, OUTPUT)

void loop(){
  leitura = digitalRead(pushButton)

  if((leitura == 0) && (statusLed == 0)){ 
  statusLed = 1
  delay(200)
  }else{
    if((leitura == 0) && (statusLed == 1)){ 
      digitalWrite(led, LOW)
      statusLed = 0
      delay(200)
    }
  }
}
