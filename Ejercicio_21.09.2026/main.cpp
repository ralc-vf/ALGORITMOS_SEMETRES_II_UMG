#include <iostream>
#include <string>

using namespace std;

int main(){
    int edad = 0, menorEdad = 0, mayorEdad = 0;

    for( int i = 0; i < 5; i++){
        cout << "Ingrese una Edad: " << endl;
        cin >> edad;
        while(edad < 0){
            cout << "Dato Incorrecto. Ingrese nuevamente: " << endl;
            cin >> edad;
        }

        if(edad > 0 && edad < 18)
            menorEdad ++;
        else if (edad >= 18)
            mayorEdad++;

    }
    cout << endl << "Grupo etario" << endl;
        cout << "Menores de Edad: " << menorEdad << endl;
        cout << "Mayores de Edad: " << mayorEdad;

    return 0;
}