


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int valor;
    char option;

    cout << "    Conversor de distancias" << endl;
    cout << "================================="<< endl;

    cout << "1: Convertir metros a centimetro\n2. Convertir centímetros a metros\n3. Convertir kilómetros a metros\n4. Salir" << endl;
    cin >> option;


    switch(option){
        case '1':
            cout << "Ingrese sus metros: " << endl;
            cin >> valor;
            cout << "Sus calculo es: " << valor * 100;
        break;

        case '2':
            cout << "Ingrese sus Centimetros: " << endl;
            cin >> valor;
            cout << "Sus calculo es: " << valor / 100;
        break;

        case '3':
            cout << "Ingrese sus Kilómetros: " << endl;
            cin >> valor;
            cout << "Sus calculo es: " << valor * 1000;
        break;

        case '4':
            cout << "Hasta Pronto";
        break;

        default:
            cout << "Caracter Incorrecto, Intente nuevamente.";
        break;
    }
    
    




    return 0;
}
