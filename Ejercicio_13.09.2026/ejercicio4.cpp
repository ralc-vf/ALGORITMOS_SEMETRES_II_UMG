#include <iostream>
#include <string>

using namespace std;

int main() {
    int espacios = 0;
    double promedio = 0;

    cout << "SISTEMA DE NOTAS AUTOMATICO" << endl;
    cout << "===========================" << endl;
    
    
    cout << "Cuantas notas desea ingresar" << endl;
    cin >> espacios;

    double notas[espacios];

    for(int i = 0; i < espacios; i++){
        cout << "Ingrese la nota: " << i+1 << endl;
        cin >> notas[i];
        promedio = promedio + notas[i] ;
    };

    cout << "Su promedio del curso es: " << (promedio / espacios) << endl;




    return 0;
}