// EjercicioN1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Digit.h"
using namespace std;


int main()
{
    int num, opcion, val;
   
    do {
        cout << "Numero: ";
        cin >> num;
        if (num < 0 || num > 9)
            cout << "Numero invalido" << endl;
    } while (num < 0 || num >9);
    Digit digito(num);
    digito.print();
    cout << endl;
    cout << "----MENU-----" << endl;
    cout << "1. Siguiente " << endl;
    cout << "2. Anterior"<<endl;
    cout << "3. Salir" << endl;
    while (true) {
        do {
            cout << "Opcion: ";
            cin >> opcion;
            if (opcion < 1 || opcion >3)
                cout << "Opcion Invalida" << endl;

        } while (opcion < 1 || opcion >3);
        
        if (opcion == 1) 
            digito.next();
        
        if (opcion == 2)
            digito.before();
    

        digito.print();
        if (opcion == 3)
            break;
      
    }
    
}
