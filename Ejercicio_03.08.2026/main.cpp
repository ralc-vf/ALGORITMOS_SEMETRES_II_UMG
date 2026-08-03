/* 
Carnet: 5090-26-621
Rene Alfredo López Castellanos
Sistema de Parqueos
Universidad Mariano Galvez, Villa Nueva
*/

#include <iostream>
using namespace std;

enum TipoVehiculo {
    MOTO = 1,
    CARRO,
    CAMIONETA
};


/*Variables*/
string nombreConductor;
string placa;
int tipoVehiculo;
int horas;
double tarifa;
double totalPagar;

int main(){

    
    cout << "Sistema de Parqueos\n";
    cout << "-------------------\n";

    cout << "Nombre del Conductor \n";
    getline(cin, nombreConductor);

    cout << "Placa \n";
    getline(cin, placa);

    cout << "Tipo de Vehiculo \n 1. Moto \n 2. Carro \n 3. Camioneta \n - Seleccione una Opción - \n";
    cin >> tipoVehiculo;

    cout << "Horas: \n";
    cin >> horas;

    //Proceso
    switch (tipoVehiculo){
        case MOTO:
            tarifa = 10;
            break;

        case CARRO:
            tarifa = 15;
            break;

        case CAMIONETA:
            tarifa = 25;   
            break;

        default:
            cout << "Fin del Proceso \n";
            break;
    }

    totalPagar = tarifa * horas;

    cout << "Recibo" << endl;
    cout << "------" << endl;
    cout << "|Nombre:             " << nombreConductor << endl;
    cout << "|Tipo de Vehiculo:   " << tipoVehiculo << endl;
    cout << "|Placa:              " << placa << endl; 
    cout << "|Horas:              " << horas << endl;
    cout << "=====================" << endl;
    cout << "|Total al Pagar:  Q. " << totalPagar << endl;
    
    




    return 0;
}


