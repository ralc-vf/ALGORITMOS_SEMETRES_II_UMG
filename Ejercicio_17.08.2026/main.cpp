/******************************************************************************
Carnet 5090-26-621
Nombre Rene Alfredo López Castellanos
Universidad Mariano Galvez
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;



enum TipoVehiculo {
    MOTO = 1, 
    CARRO,
    CAMIONETA
};

string nombreConductor;
string placa;
int tipoVehiculo;
int horas;
double tarifa;
double totalPagar;

void mostrarTitulo() {
    cout<<"====================\n" ;
    cout<<"Sistema de parqueos\n" ;
    cout<<"====================\n" ;
}

void leerDatos(){
    cout<<"Nombre del cliente: \n" ;
    getline(cin, nombreConductor);
 
    // Entrada   
    cout<<"Placa del vehículo: \n" ;
    getline(cin, placa);
    
    cout<<"Tipo del vehículo: \n" ;
    cout<<"   1. Moto\n" ;
    cout<<"   2. Carro\n" ;
    cout<<"   3. Camioneta\n" ;
    cout<<"Seleccione opción: \n" ;
    cin >> tipoVehiculo;
    
    cout<<"Horas: \n" ;
    cin >> horas;
}

void mostrarDatos(){
    cout << endl << endl << endl;
    cout<<"R E C I B O\n" ;
    mostrarTitulo();
    cout<<"Nombre del cliente: " << nombreConductor << endl;
    cout<<"Placa del vehículo: "  << placa << endl;
    cout<<"Tipo del vehículo: " ;
    switch (tipoVehiculo) {
        case MOTO: cout << "Moto\n"; break;
        case CARRO: cout << "Carro\n"; break;
        case CAMIONETA: cout << "Camioneta\n"; break;
        default: cout << "No seleccionó vehículo\n";
    }
    
    cout << "Horas:   " << horas << endl;
    cout << "Tarifa:  " << tarifa << endl;
    cout << "=======================" << endl;
    cout << "Total: Q." << totalPagar << endl;
}

double determinarTarifa(int tipo){
     switch (tipo) {
        case MOTO: tarifa = 10; break;
        case CARRO: tarifa = 15; break;
        case CAMIONETA: tarifa = 20; break;
        default: tarifa = 0;
    }
    
    return tipo;
}

double calcularPrecio(double t, double h){
    totalPagar = t * h;
    return totalPagar;
}



int main()
{

    mostrarTitulo();
    leerDatos();
    
    //Procesos
    determinarTarifa(tipoVehiculo);
    calcularPrecio(tarifa, horas);
    
    // Salida
    mostrarDatos();
    

    return 0;
}

