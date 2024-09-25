#pragma once
#include <iostream>
using namespace std;
class Digit
{
private:
	short value;
	bool leds[7];
public:
	string numeros[10] = { "abcdef", "bc", "abdeg", "abcdg", "bcfg", "acdfg", "acdefg", "abc", "abcdefg", "abcdfg" };
	Digit(short valor);
		//habilitar los digitos
		//7-> [1,1,1,0,0,0,0] -> debe llamar a la funcion toDigit()
	
	Digit(string valor); //se asume que los carateres estan ordenados
		//valor = "abc" -> 7 [1,1,1,0,0,0,0]
		//valor = "abdeg" -> 2
	Digit();//constructor por defecto que genera todo con el '0'
	void next(); //obtiene el siguiente digito por ej: si value = 2, al llamar
				// a next value = 3 se debe validar
	void before(); // obtiene el anterior en el ciclo si value=2, despues de ejecutar value=1
					//si value=0, el anterior ciclo es 9
	void toLeds(short v); //convierte un digito entero a su equivalente en leds DEBE VALIDAR																	
	void resetLeds(); // -1 [0,0,0,0,0,0,0]
	bool isValid(string valor); //valida si la representacion del vector leds es valida

	Digit add(short val); //devuelve un nuevo digito sobre la base del actual, incrementandole
						// el val
	void print();// imprime enn la consola el valor y el tablero que representa en los LEDS
	void setValue(short v);
	short getValue();

	

};

