#include "Digit.h"
#include <iostream>
using namespace std;
Digit::Digit(short valor) {
	value = valor;
	toLeds(value);
}
Digit::Digit(string valor) {
	if (isValid(valor)) 
		toLeds(value);
	else {
		resetLeds();
		value = 0;
	}
}
Digit::Digit() {
	value = 0;
	resetLeds();
}
void Digit::next() {
	if (value == 9)
		value = 0;
	else
		value++;
	toLeds(value);
}
void Digit::before() {
	if (value == 0) {
		value = 9;
	}
	else
		value--;
	toLeds(value);
}
void Digit::toLeds(short v) {
	resetLeds();
	switch (v) {
	case 1:
		leds[1] = 1;
		leds[2] = 1;
		break;
	case 2:
		leds[0] = 1;
		leds[1] = 1;
		leds[3] = 1;
		leds[4] = 1;
		leds[6] = 1;
		break;
	case 3:
		leds[0] = 1;
		leds[1] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[6] = 1;
		break;
	case 4:
		leds[1] = 1;
		leds[2] = 1;
		leds[5] = 1;
		leds[6] = 1;
		break;
	case 5:
		leds[0] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[5] = 1;
		leds[6] = 1;
		break;
	case 6:
		leds[0] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[4] = 1;
		leds[5] = 1;
		leds[6] = 1;
		break;
	case 7:
		leds[0] = 1;
		leds[1] = 1;
		leds[2] = 1;
		break;
	case 8:
		leds[0] = 1;
		leds[1] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[4] = 1;
		leds[5] = 1;
		leds[6] = 1;
		
		break;
	case 9:
		leds[0] = 1;
		leds[1] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[5] = 1;
		leds[6] = 1;
	
		break;
	case 0:
		leds[0] = 1;
		leds[1] = 1;
		leds[2] = 1;
		leds[3] = 1;
		leds[4] = 1;
		leds[5] = 1;

		break;

	}
	

}

void Digit::resetLeds() {

	for (int i = 0; i < 7; i++) 
		leds[i] = 0;
}
bool Digit::isValid(string valor) {
	//string numeros[10] = { "abcdef", "bc", "abdeg", "abcdg", "bcfg", "acdfg", "acdefg", "abc", "abcdefg", "abcdfg" };
	for (int i = 0; i < 10; i++) {
		if (valor == numeros[i]) {
			value = i;
			return true;
		}
	}
	return false;
}
Digit Digit::add(short val) {
	Digit dig;
	dig.next();
	dig.toLeds(dig.value);
	return dig;
}

void Digit::print() {
	if (leds[0] == 1)
		cout<<" __" << endl;
	if (leds[5] == 1)
		cout << "|";
	if (leds[6] == 1)
		cout << "__";
	else
		cout << "  ";
	if (leds[1] == 1)
		cout << "|" << endl;
	else
		cout << endl;
	if (leds[4] == 1)
		cout << "|";
	if (leds[3] == 1)
		cout << "__";
	else
		cout << "  ";
	if (leds[2] == 1)
		cout << "|" << endl;
	else
		cout << endl;

}
void Digit::setValue(short v) {
	value = v;
}
short Digit::getValue() {
	return value;
}
