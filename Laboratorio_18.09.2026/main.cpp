#include <iostream>
#include <string>

using namespace std;



void mostrarMatriz(int ventas[][4], int filas);
int totalFila(int ventas[0][4], int fila);
int totalColumna(int ventas[][4], int fila);
void mostrarTotalesFilas(int ventas[][4]);
void mostrarTotalesColumnas (int ventas[][4]);


int ventas[3][4] = {
        {12, 8, 5, 10},
        {15, 6, 7,  9},     
        {10, 9, 4, 11}
    };

int main(){

    int opc;

     
    do{
        cout << "========= PANADERIA - CONTROL DE VENTAS =========\n";
        cout << "1. Mostrar Matriz\n";
        cout << "2. Mostrar totales por día\n";
        cout << "3. Mostrar totales por producto\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: \n";
        cin >> opc;

        switch(opc){
            case 1: 
                mostrarMatriz(ventas, 3);
                break;
            
            case 2: 
                mostrarTotalesFilas(ventas);
                break;

            case 3: 
                mostrarTotalesColumnas(ventas);
                break;

            case 4:
                cout << "Saliendo del Sistema =)";
                break;

            default: 
                cout << "Opcion Incorrecta.";
                break;
        }
    }while(opc != 4);
    

    return 0;
}

void mostrarMatriz(int ventas[][4], int filas) {
    cout << "\nMATRIZ DE VENTAS\n";
    for (int fila = 0; fila < filas; fila++) {
        for (int columna = 0; columna < 4; columna++) {
            cout << ventas[fila][columna] << "\t";
        }
        cout << endl;
    }
}

int totalFila(int ventas[][4], int fila){
    int total = 0;

    for (int j = 0; j < 4; j++){
        total += ventas[fila][j];
    }

    return total;
}


int totalColumna(int ventas[][4], int columna){
    int total = 0;

    for(int i = 0; i < 3; i++){
        total += ventas[i][columna];
    }

    return total;
}

void mostrarTotalesFilas(int ventas[][4]){
    for(int i = 0; i < 3; i++){
        cout << "El Total de la Fila " << i+1 << " es: " << totalFila(ventas, i) << endl;
    }
}

void mostrarTotalesColumnas(int ventas[][4]){
    for(int j = 0; j < 4; j++){
        cout << "El Total de la Columna " << j + 1 << " es: " << totalColumna(ventas, j) << endl;
    }
}

