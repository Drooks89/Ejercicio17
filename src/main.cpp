#include <Arduino.h>


void setup() {
  Serial.begin(9600);  

  int numero, unidades, decenas, centenas, millar;
  
  Serial.println("Digite un número: ");

  while (!Serial.available()) {  // Espera a que el usuario ingrese un número por el monitor serial
  }
  numero = Serial.parseInt();  // Lee el número ingresado por el monitor serial
  
  unidades = numero % 10;
  numero /= 10;
  decenas = numero % 10;
  numero /= 10;
  centenas = numero % 10;
  numero /= 10;
  millar = numero % 10;

  Serial.println("Su número en romano es: "); 

  switch (millar) {
    case 1:
      Serial.print("M");
      break;
    case 2:
      Serial.print("MM");
      break;
    case 3:
      Serial.print("MMM");
      break;
  }

  switch (centenas) {
    case 1:
      Serial.print("C");
      break;
    case 2:
      Serial.print("CC");
      break;
    case 3:
      Serial.print("CCC");
      break;
    case 4:
      Serial.print("CD");
      break;
    case 5:
      Serial.print("D");
      break;
    case 6:
      Serial.print("DC");
      break;
    case 7:
      Serial.print("DCC");
      break;
    case 8:
      Serial.print("DCCC");
      break;
    case 9:
      Serial.print("CM");
      break;
  }

  switch (decenas) {
    case 1:
      Serial.print("X");
      break;
    case 2:
      Serial.print("XX");
      break;
    case 3:
      Serial.print("XXX");
      break;
    case 4:
      Serial.print("XL");
      break;
    case 5:
      Serial.print("L");
      break;
    case 6:
      Serial.print("LX");
      break;
    case 7:
      Serial.print("LXX");
      break;
    case 8:
      Serial.print("LXXX");
      break;
    case 9:
      Serial.print("XC");
      break;
  }

  switch (unidades) {
    case 1:
      Serial.print("I");
      break;
    case 2:
      Serial.print("II");
      break;
    case 3:
      Serial.print("III");
      break;
    case 4:
      Serial.print("IV");
      break;
    case 5:
      Serial.print("V");
      break;
    case 6:
      Serial.print("VI");
      break;
    case 7:
      Serial.print("VII");
      break;
    case 8:
      Serial.print("VIII");
      break;
    case 9:
      Serial.print("IX");
      break;
  }

  Serial.println();  
}

void loop() {
  
}
