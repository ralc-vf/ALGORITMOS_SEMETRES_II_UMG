#include <vector>
#include <string>
#include <iostream>


using namespace std;

vector <int> notas;

int main(){
    const int cantidad = 5;


    string nombre[5];
    string carne[5];
    float notas[5];

    for (int i = 0; i < cantidad; i++ ){

        cout << "\nEstudiante " << i + 1 << endl;
        
        cout << "\nCarnet" << endl;
        cin >> carne[i];

        cout << "\nNombre" << endl;
        cin >> nombre[i];

        cout << "\nNotas" << endl;
        cin >> notas[i];
    }

    cout << "\n Listado de Estudiantes \n";
    cout << "----------------------------\n";

    for(int i = 0; i < cantidad; i++){
        cout << carne[i] << " "
             << nombre[i] << " "
             << notas[i] << endl;
    }

    string carneBuscado;
    int posicion = -1;

    cout << "\nIngrese el Carnet que desea buscar: ";
    cin >> carneBuscado;

    for(int i = 0; i < cantidad; i++){
        if(carne[i]==carneBuscado){
            posicion = i;
            break;
            
        }
    }

    if(posicion != -1){
        cout << "\nEstudiante Encontrado\n";
        cout << "Carne: " << carne[posicion] << endl;
        cout << "Nombre: " << nombre[posicion] << endl;
        cout << "Nota: " << notas[posicion] << endl;  
    }else{
        cout << "Estudiante no encontrado. \n";
    }


    return 0;
}


