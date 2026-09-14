#include <iostream>
#include <string>

using namespace std;

int main() {
    double ventas[7], totalVenta = 0, promedioDiario = 0;
    int diaVenta = 0, ventaMayor = 0;

    cout << "Sistema de ventas SuperMarket" << endl;
    cout << "=============================" << endl;
    
    for(int i = 0; i < 7; i++){
        cout << "Ingrese la venta numero: " << i+1 << endl;
        cin >> ventas[i];
        
        if(ventas[i] > 1000){
            diaVenta = diaVenta + 1;
        }

        totalVenta = totalVenta + ventas[i];
    }

    //Promedio
    promedioDiario = totalVenta / 7;


    //Encontrar el Mayor
    ventaMayor = ventas[0];

    for (int i = 0; i < 7; i++){
        if(ventas[i] > ventaMayor  )
        ventaMayor = ventas[i];  
    }


    //Salidas
    cout << "Venta total de la semana: " << totalVenta << endl;
    cout << "Promedio de la semana: " << promedioDiario << endl;
    cout << "Dia con mayor venta: " << ventaMayor << endl;
    cout << "Dias con ventas mayorias a Q1000.00: " << diaVenta << endl;

    


    return 0;
}