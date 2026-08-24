#include <iostream>
#include <string>

using namespace std;


int main(){
    int numeros[10], sumatoria = 0;
    int valorMinimo = 0, valorMaximo = 0;
   


    // Lenamos el arreglo

    for (int i=0; i < 10; i++){
        numeros[i] = i * 2;
        sumatoria = sumatoria + numeros[i];

        
    }

    // Recorremos y mostramos el arreglo
    for(int i = 0; i<10; i++){
        cout << "Posicion " << i
            << " = " << numeros[i] << endl; 
    }

    valorMinimo = numeros[0];
    valorMaximo = numeros[0];

    
    for (int i = 0; i < 10; i++){
        if(numeros[i] < valorMinimo  ){
        valorMinimo = numeros[i];
        }   

        if(numeros[i] > valorMaximo  ){
        valorMaximo = numeros[i];
        }  

         
    }

    cout << "La sumatoria de los Numeros son: "<< sumatoria << endl;
    cout << "El promedio de los Numeros es: " << sumatoria/10 << endl;
    cout << "El valor minimo es: "
         << valorMinimo << endl;

    cout << "El valor maximo es: "
         << valorMaximo << endl;

    
    



    

    return 0;
}


