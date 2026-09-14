#include <iostream>
#include <string>

using namespace std;


int main(){

    int opcion = 0;
    double num1 = 0, num2 = 0;


    do{
        cout << "CALCULADORA DIGITAL" << endl;
        cout << "===================" << endl;
        cout << "Ingrese una opcion: " << endl
             << "1. Suma " << endl
             << "2. Resta " << endl
             << "3. Multiplicacion " << endl
             << "4. Division " << endl
             << "5. Salir " << endl;
        cin >> opcion;


        if(opcion >= 1 && opcion <= 4){
            cout << "Ingrese el numero 1: " << endl;
            cin >> num1;

            cout << "Ingrese el numero 2: " << endl;
            cin >> num2;
        }

        switch(opcion){
            case 1:
                cout << (num1 + num2) << endl << endl;    
                break;

            case 2:
                cout << (num1 - num2) << endl << endl;
                break;

            case 3:
                cout << (num1 * num2) << endl << endl;
                break;
            case 4:

                if(num2 == 0)
                    cout << "Division invalida" << endl << endl;
                else
                    cout << (num1 / num2) << endl << endl;
                
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