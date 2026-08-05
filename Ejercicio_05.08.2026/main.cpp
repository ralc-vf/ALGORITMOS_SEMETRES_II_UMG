/*
    Rene Alfredo López Castellanos
    Universidad Mariano Galvez
    5090-26-621
*/
#include <iostream>
#include <string>

using namespace std;




//Variable, Constantes y Enum
string nombre;
int  num1, num2, num3;


//Prototipos



//Implementaciones
/* P R O C E D I M I E N T O S */
void mostrarTitulo() {
    cout << "Sistema de Parqueo" << endl;
    cout << "==================" << endl;
}
void mensaje() {
    cout << "Hola !!!!" << endl;
}

void resultado(string cadena) {
    cout << cadena << endl;
}

void ingresar() {
    cout << "Ingrese su nombre: " << endl;
    getline(cin, nombre);

    cout << "Ingrese el primer Número: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo Número: " << endl;
    cin >> num2;

    cout << "Ingrese el tercer Número: " << endl;
    cin >> num3;
}

//F U N C I  O N  E S

int sumaDeNumeros(int a, int b, int c) {
    return (a+b)-c;
}









//Función Principal
int main()
{
    mostrarTitulo();

    ingresar();


    resultado(nombre);
    cout << "La suma de tus numeros es: " << sumaDeNumeros(num1, num2, num3) << endl;

    return 0;
}

