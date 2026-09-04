#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector <int> notas;



//Prototipos
void ingresarNotas(int cant);
void imprimirNotas(int cant);



//Función Main
int main(){

    int cantidad;
    cout << "Cuantas notas necesita" << endl;
    cin >> cantidad;

    ingresarNotas(cantidad);


   imprimirNotas(notas.size());


   cout << "Ingreso de notas" << endl;
   ingresarNotas(2);

   cout << endl << "Mostrar Notas" << endl;
    imprimirNotas(notas.size());
   

    return 0;

}


//Funciones y Procedimientos
void ingresarNotas (int cant){

    for (int i = 0; i < cant; i++){
        int nota;
        cout << "Ingrese la Nota [" << (i+1) << "]:" << endl;
        cin >> nota;

        notas.push_back(nota);
    }
}

void imprimirNotas(int cant){
    for(int i= 0; i < cant; i++){
        cout << "La nota [" << (i+1) << "]: " << notas[i] << endl;
    }
}



















