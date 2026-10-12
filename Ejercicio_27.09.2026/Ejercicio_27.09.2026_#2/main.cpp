#include <iostream>
#include <string>

using namespace std;

// Prototipos
double calcularPromedio(double tiempos[][3], int piloto);
string determinarCategoria(double promedio);

int main() {

    string nombres[5];  
    double tiempos[5][3];
    double promedios[5];

    int mejorPiloto = 0;

    // Registrar nombres
    cout << "===== GRAN PREMIO DE MOTOCICLISMO =====" << endl;

    for (int i = 0; i < 5; i++) {

        cout << "\nIngrese el nombre del piloto " << i + 1 << ": ";
        cin >> nombres[i];

        // Registrar tiempos
        for (int j = 0; j < 3; j++) {

            do {
                cout << "Ingrese el tiempo de la carrera "
                     << j + 1 << " (minutos): ";
                cin >> tiempos[i][j];

                if (tiempos[i][j] <= 0) {
                    cout << "El tiempo debe ser mayor que 0." << endl;
                }

            } while (tiempos[i][j] <= 0);
        }
    }

    // Calcular promedios
    for (int i = 0; i < 5; i++) {

        promedios[i] = calcularPromedio(tiempos, i);
    }

    // Buscar el mejor promedio
    for (int i = 1; i < 5; i++) {

        if (promedios[i] < promedios[mejorPiloto]) {
            mejorPiloto = i;
        }
    }

    // Mostrar resultados
    cout << "\n\n========== RESULTADOS ==========" << endl;

    for (int i = 0; i < 5; i++) {

        cout << "\nPiloto: " << nombres[i] << endl;

        cout << "Carrera 1: " << tiempos[i][0] << " minutos" << endl;
        cout << "Carrera 2: " << tiempos[i][1] << " minutos" << endl;
        cout << "Carrera 3: " << tiempos[i][2] << " minutos" << endl;

        cout << "Promedio: " << promedios[i] << " minutos" << endl;

        cout << "Categoria: "
             << determinarCategoria(promedios[i]) << endl;
    }

    cout << "\n========== MEJOR PROMEDIO ==========" << endl;

    cout << "Piloto: " << nombres[mejorPiloto] << endl;
    cout << "Promedio: " << promedios[mejorPiloto] << " minutos" << endl;


    return 0;
}


// Funcion para calcular el promedio
double calcularPromedio(double tiempos[][3], int piloto) {

    double suma = 0;

    for (int j = 0; j < 3; j++) {
        suma += tiempos[piloto][j];
    }

    return suma / 3;
}


// Funcion para determinar la categoria
string determinarCategoria(double promedio) {

    if (promedio <= 40) {
        return "Elite";
    }
    else if (promedio <= 50) {
        return "Profesional";
    }
    else if (promedio <= 60) {
        return "Intermedio";
    }
    else {
        return "Fuera de clasificacion";
    }
}