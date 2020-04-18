/* Semaforo - Andres Gomez */

//** Definiciones **//
int rojo=2;      //definimos el valor del pin para el led rojo
int amarillo=4;  //definimos el valor del pin para el led amarillo
int verde=7;     //definimos el valor del pin para el led verde

//** Programa **//

void setup() {
  pinMode(verde,OUTPUT);   //Se defime el pin verde como salida  
  pinMode(amarillo,OUTPUT);//Se define el pin amarillo como salida
  pinMode(rojo,OUTPUT);    //Se define el pin rojo como salida  
}

void loop() {
 digitalWrite(verde,HIGH);  //encendemos el led rojo
 delay(2000);               //esperamos 2 segundos
 digitalWrite(verde,LOW);   //apagamos el led rojo
 delay(2000);               //esperamos 2 segundo
 
 digitalWrite(amarillo,HIGH); //encendemos el led amarillo
 delay(2000);                 //esperamos 2 segundos
 digitalWrite(amarillo,LOW);  //apagamos el led amarillo
 delay(2000);                 //esperamos medio segundo
 
 digitalWrite(rojo,HIGH);   //encendemos el led verde
 delay(2000);               //esperamos 2 segundos
 digitalWrite(rojo,LOW);    //apagamos el led verde
 delay(2000);               //esperamos 2 segundo
}
