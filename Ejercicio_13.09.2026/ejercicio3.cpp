#include <iostream>
#include <string>

using namespace std;

int main (){
    int nota;


    //Entrada
    cout << "Sistema de Notas en Linea" << endl;
    cout << "=========================" << endl;
    cout << "Ingrese la nota a calificar" << endl;
    cin >> nota;

    //Proceso 
    if(nota >= 0 && nota < 60){
        cout << "Reprobado";
    }else if (nota >= 61 && nota <= 69){
        cout << "Aprobado";
    }else if(nota >= 70 && nota <= 79){
        cout << "Bueno";
    }else if(nota >= 80 && nota <= 89){
        cout << "Muy Bueno";
    }else if(nota >= 90 && nota <= 100){
        cout << "Excelente";
    }else{
        cout << "La nota no es valida.";
    };





    return 0;
}