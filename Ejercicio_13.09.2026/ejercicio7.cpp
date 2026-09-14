#include <iostream>
#include <string>

using namespace std;

int opcion;


void mostrarMenu(){

    cout << "CALCULADORA DIGITAL" << endl;
        cout << "===================" << endl;
        cout << "Ingrese una opcion: " << endl
             << "1. Suma " << endl
             << "2. Resta " << endl
             << "3. Multiplicacion " << endl
             << "4. Division " << endl
             << "5. Salir " << endl;
        cin >> opcion;

}

double suma(double numeroA, double numeroB){
    double resultado = 0;

    resultado = (numeroA + numeroB);


    return resultado;
}

double resta(double numeroA, double numeroB){
    double resultado = 0;

    resultado = (numeroA - numeroB);

    return resultado;
}

double mulplicacion(double numeroA, double numeroB){
    double resultado = 0;
    
    resultado = (numeroA * numeroB);

    return resultado;
}

double division(double numeroA, double numeroB){
    double resultado = 0;

    if(numeroB == 0){
        cout << "No se puede dividir dentro de 0, Intente Nuevamente.";
    }else{
        resultado = (numeroA / numeroB);
    }

    return resultado;
}


int main(){

    double num1 = 0, num2 = 0;

    do{
        mostrarMenu();


        if(opcion >= 1 && opcion <= 4){
            cout << "Ingrese el numero 1: " << endl;
            cin >> num1;

            cout << "Ingrese el numero 2: " << endl;
            cin >> num2;
        }

        switch(opcion){
            case 1:
                cout << "La suma es: " << suma(num1, num2) << endl;
                
                break;

            case 2:
                cout << "La resta es: " << resta(num1, num2) << endl;
                break;

            case 3:
                cout << "La multiplicacion es: " << mulplicacion(num1, num2) << endl;
                break;
            case 4:
                cout << "La division es: " << division(num1, num2) << endl;
                break;

            case 5:
                cout << "Saliendo del sistema" << endl;
                break;

            default:
                cout << "Opcion Invalida" << endl << endl;
                break;
        }

    }while(opcion != 5);

    cout << "Hasta Luego" << endl << endl;




    return 0;
}





