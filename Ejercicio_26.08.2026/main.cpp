

#include <iostream>
#include <string>
using namespace std;


void sistemaNotas() {
    
    int notas[5];
    int suma = 0, promedio = 0, notaMayor = 0, notaMenor = 0, aprobados = 0, reprobados = 0;


    for (int i = 0; i < 5; i++) {

        cout << "Ingrese la nota " << i << ":" << endl;
        cin >> notas[i];

    }

    for (int i = 0; i < 5; i++) {

        //Calculo de Sumar todas las notas.
        suma = suma + notas[i];


        //Calculo para calcular el Promedio.
        promedio = suma / 5;
    }

    notaMayor = notas[0];
    notaMenor = notas[0];
    


    for (int i = 0; i < 5; i++) {
        if (notas[i] < notaMenor) {
            notaMenor = notas[i];
        }

        if (notas[i] > notaMayor) {
            notaMayor = notas[i];
        }
    }

  

    cout << "=========================================" << endl;
    cout << "|            Calificaciones             |" << endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < 5; i++) {

        cout << "Nota " << i << ": " << notas[i] << endl;
        

    }
    cout << "\n\n\n";

    for (int i = 0; i < 5; i++) {
        if (notas[i] > 60) {
            aprobados = aprobados + 1;
        }else if (notas[i] < 60) {
            reprobados = reprobados + 1;
        }
    }


    cout << "La suma de las Notas es: " << suma << endl;
    cout << "El promedio de las notas es: " << promedio << endl;
    cout << "La nota mayor es: " << notaMayor << endl;
    cout << "La nota menor es: " << notaMenor << endl;
    cout << "Reprobados: " << reprobados << endl;
    cout << "Aprobados: " << aprobados << endl;


}





int main()
{
    sistemaNotas();
    
    return 0;
}


