#include <iostream>
using namespace std;


int main() {
    int edad, categoria;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Edad invalida." << endl;
        return 0;
    }

    categoria = edad / 10;

    switch (categoria) {
        case 0:
            cout << "Clasificacion: Nino" << endl;
            break;
        case 1:
            cout << "Clasificacion: Adolescente" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Clasificacion: Adulto" << endl;
            break;

        default:
            cout << "Clasificacion: Adulto mayor" << endl;
            break;
    }

    return 0;
}
