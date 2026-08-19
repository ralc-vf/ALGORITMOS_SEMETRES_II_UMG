/*
    Rene Alfredo López Castellanos
    5090-26-621
    Universidad Mariano Gálvez

*/
#include <iostream>
#include <string>
using namespace std;


//Prototipos
void limpiarBuffer();
int leerEntero(string mensaje);
double leerDecimal(string mensaje);
string leerTextp(string mensaje);
char leerCaracter(string mensaje);
bool leerBooleano(string mensaje);




int main()
{
    int opcion;
    string nombre;
    int edad;
    char genero;
    double salario;
    bool activo;
    bool datosRegistrados = false;

    do {
        cout << "============================" << endl;
        cout << "       MENU PRINCIPAL\n";
        cout << "============================" << endl;

        cout << "1. Registrar Datos \n"
            << "2. Mostrar Datos \n"
            << "3. Realizar Calculo (Bono) \n"
            << "4. Ver Estado \n"
            << "5. Salir \n"
            << "Seleccione una opción: ";
        cin >> opcion;


        switch (opcion) {
            case 1:
               cout << "Ingrese Edad:";
               cin >> edad;
               leerEntero(edad);
               break;
            case 2:
                cout << "2";
                break;
            case 3:
                cout << "3";
                break;
            case 4:
                cout << "4";
                break;
            case 5:
                cout << "5";
                break;
            default: 
                cout << "\n Opcíón Invalida";
                   
        }





    } while (opcion != 5);
}

void limpiarBuffer()
{
    cin.clear();
    cin.ignore((numeric_limits<streamsize>::max)(), '\n');
}

int leerEntero(string mensaje)
{
    int valor;
    while (true) {
        cout << mensaje;

        if (cin >> valor) {
            limpiarBuffer();
            return valor;
        }

        cout << "Error: debe ingresar un número entero" << endl;
        limpiarBuffer();
    }
}

double leerDecimal(string mensaje)
{
    double valor;
    while (true) {
        cout << mensaje;
        
        if (cin >> valor) {
            limpiarBuffer();
            return valor;
        }
        cout << "Error: debe ingresar un número valido." << endl;
        limpiarBuffer();
        
    }
}

string leerTextp(string mensaje)
{
    return string();
}

char leerCaracter(string mensaje)
{
    return 0;
}

bool leerBooleano(string mensaje)
{
    return false;
}
