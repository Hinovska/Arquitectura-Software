/* Codigo con interruptor externo */

int pinButton = 9;    //Se define el Pin para el boton
int LED = 3;          //Se define el led que controla en Led o intermitente
int stateLED = LOW;   //Se define el estado del led
int stateButton;      //Variable para guardo del estado del led
int previous = LOW;   //Se define el estado previo del led
long time = 0;        
long debounce = 200;

void setup() {
  pinMode(pinButton, INPUT); //Entrada de la interrupcion externa
  pinMode(LED, OUTPUT);
}

void loop() {
  stateButton = digitalRead(pinButton); //lectura del estado del boton
  if(stateButton == HIGH && previous == LOW && millis() - time > debounce) { //Si el boton es presionado y el Led esta apagado
    if(stateLED == HIGH){
      stateLED = LOW; // Cambio de estado
    } 
    else {
       stateLED = HIGH;  //Cambio de estado
    }
    time = millis();
  }
  digitalWrite(LED, stateLED); //escritura del estado del led
  previous == stateButton;
}
