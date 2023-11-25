//declaracion de la libreria 
//Emos descargado el servo v.s 1.2.1
#include <Servo.h>
// se define los servos con una funcion de la libreria
Servo servo1;
Servo servo2;

//estas son dos variables que son la posicion de los ejes como va de 0 a 180 se inicliazan en 90
int eje1 = 90;
int eje2 = 90;


void setup() {
  //aca se declaran donde estan los servo moteres uno esta en el (7) y el otro en (6)
  servo1.attach (7);
  servo2.attach (6);
  //se inicializan en 90 grados para que cuando empiezen lo primero que haga es ponerse en en 90 ambos servos 
  servo1.write (90);
  servo1.write (90);
  // put your setup code here, to run once:

}

//el void loop es lo que se esta ejecutando infinitamente mientras que se use el programa
void loop() {
  //SERVO 1 
  //esta es una direcion 
  if (analogRead (0) <200 && eje1<180){//si el pin analogico detecta que es menor que 200 y el eje no hallegado a la posicion final
  //salta este if y pasa al siguiente si el servo motor llega a los 180
    eje1 ++;
    servo1.write(eje1);
  }
  if (analogRead(0)>700 && eje1>0){//en este es si le estamos dando hacia el oro lado y no llega al valor de 0 resta 1 ej si esta en 96 
    eje1--;
    servo1.write(eje1);
  }
    //SERVO 2
  if (analogRead (1) <200 && eje2<180){
    eje2 ++;
    servo2.write(eje2);
  }
  if (analogRead(1)>700 && eje2>0){
    eje2--;
    servo2.write(eje2);
  }
  //este delay sirve para que el bucle no se ejecute demasiado rapido 
  //y que cuando llegue a esta linea de codigo se para 15 milesengundos aca se controla la velocidad 
  delay(15);
  // put your main code here, to run repeatedly:

}
