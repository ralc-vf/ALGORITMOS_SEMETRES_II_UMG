#include <iostream>
#include <string>
#include <cctype>

using namespace std;



string solicitarNombre();
int solicitarEdad();
int calcularEdad(int edad); 
int logitudNombre(string nombre);
int contarPalabras(string nombre);

int main()
{
    cout << "Bienvenido al Sistema" << endl;

    string nombre = solicitarNombre();


    int edad = solicitarEdad();

    cout << "La edad calculada es: " << calcularEdad(edad) << endl;

    cout << "La Longitud de su Nombre es: " << logitudNombre(nombre) << endl;
    
    cout << "La cantidad de palabras es: " << contarPalabras(nombre) << endl;


    return 0;

}


string solicitarNombre() {
    string nombreCompleto;
    cout << "Ingrese un nombre y un apellido" << endl;
    getline(cin, nombreCompleto);

    return nombreCompleto;

}

int solicitarEdad() {
    int edad;
    cout << "Ingrese su anio de Nacimiento" << endl;
    cin >> edad;

    return edad;
}

int calcularEdad(int edad) {

    return 2026 - edad;
}

int logitudNombre(string nombre) {
    int longitud = 0;
    longitud = nombre.length();

    return longitud;
}

int contarPalabras(string nombre) {
    int palabras = 0;
    bool dentroPalabra = false;

    for (int i = 0; i < nombre.length(); i++) {
        if (nombre[i] != ' ' && dentroPalabra == false) {
            palabras++;
            dentroPalabra = true;
        }
        else if (nombre[i] == ' ') {
            dentroPalabra = false;
        }
    }

    return palabras;

}
