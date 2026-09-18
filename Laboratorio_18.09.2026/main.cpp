#include <iostream>
#include <string>

using namespace std;



void mostrarMatriz(int ventas[][4], int filas);
int totalFila(int ventas[0][4], int fila);
int totalColumna(int ventas[][4], int fila);
void mostrarTotalesFilas(int ventas[][4]);
int ventas[3][4] = {
        {12, 8, 5, 10},
        {15, 6, 7,  9},     
        {10, 9, 4, 11}
    };

int main(){
    


    cout << "Matriz de Ventas" << endl;

    /* Suma de Filas
        for (int i = 0; i < 3; i++){
            int totalFila = 0;

            for(int j = 0; j < 4; j++){
                totalFila = totalFila + ventas[i][j];
            }
            cout << "Total del Dia " << i + 1 << ": " << totalFila << endl;
        }
    */

    /* Suma de Productos
    for (int j = 0; j < 4; j++){
        int totalColumna = 0;

        for(int i = 0; i < 3; i++){
            totalColumna = totalColumna + ventas[i][j];
        }

        cout << "Total del Producto " << j + 1 << ": " << totalColumna << endl;
    }
    
    
    */

    mostrarMatriz(ventas, 3);
    cout << totalColumna(ventas, 1);    

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
    int totalColumna = 0;
    for (int j = 0; j < 4; j++){

        for(int i = 0; i < 3; i++){
            totalColumna = totalColumna + ventas[i][columna];
        }
    }

    return totalColumna;
}

void mostrarTotalesFilas(int ventas[][4]){
    for(int i = 0; i < 3; i++){
        cout << "El Total de la Fila " << i+1 << " es: " << totalFila(ventas, i) << endl;
    }
}

void mostrarTotalesColumnas(int ventas[][4]){
    for(int j = 0; j < 4; j++){
        cout << "El total de la Columna " << j+1 << " es: " << totalColumna(ventas, 1);
    }
}

