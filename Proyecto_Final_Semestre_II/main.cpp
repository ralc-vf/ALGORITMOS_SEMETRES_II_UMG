#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

    int oct1 = 0, oct2 = 0, oct3 = 0, oct4 = 0, prefijo = 0, opcMenu = 0;
    string classIp = " ";

    do{
        
        cout << "BIENVENIDO A LA CALCULADORA DE SUBNETING" << endl;
        cout << "========================================" << endl;
        cout << "1. Inciar Subneting" << endl;
        cout << "2. Salir" << endl;
        cin >> opcMenu;

        switch (opcMenu)
        {
        case 1:
            cout << "Ingrese el Primer Octeto de su IP: " << endl;
            cin >> oct1;

            cout << "Ingrese el Segundo Octeto de su IP: " << endl;
            cin >> oct2;

            cout << "Ingrese el Tercer Octeto de su IP: " << endl;
            cin >> oct3;

            cout << "Ingrese el Cuarto Octeto de su IP: " << endl;
            cin >> oct4;

            cout << "Ingrese el Prefijo de su IP: " << endl;
            cin >> prefijo;

            /*Calcular Mascara de SubRed*/
            switch (prefijo)
            {
            case 0:
                
                break;
            
            default:
                break;
            }

            /* Calcular el Tipo de clase de la IP*/
            if(oct1 >= 1 && oct1 <= 126)
            classIp = "A";

            if(oct1 >= 128 && oct1 <= 191)
            classIp = "B";

            if(oct1 >= 192 && oct1 <= 223)
            classIp = "C";

















            break;
        
        default:
            break;
        }




        
    }while(opcMenu != 2);

    cout << "Hasta Luego";

    


    return 0;
}
