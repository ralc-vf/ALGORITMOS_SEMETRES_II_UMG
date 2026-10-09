#include <iostream>
#include <string>

using namespace std;

void agregarApellido(string &nombreReferencia){
    nombreReferencia += " García";
}

int main(){
    /*
        string nombre = "Jorge Luis";
        agregarApellido(nombre);
        cout << nombre << endl;
    */

   /*
    string frase = "Algoritmos UMG";
    cout << frase.length() << endl;
    cout << frase.size() << endl;
   */
   

    string palabra = "Programacion";
    string parte = palabra.substr(0, 7);
    cout << parte << endl;

    string texto = "Hola mundo";
    size_t pos = texto.find("x");
    if(pos != string::npos) {
        cout << "Encontrado en: " << pos << endl;        
    }else{
        cout << "No encontrado" << endl;
    }

    string saludo = "Hola Mundo";
    saludo.insert(5, "querido ");
    cout << saludo << endl;

    string cadena = "Hola querido mundo" ;
    cadena.erase(5, 8);
    cout << cadena << endl;

    string frase = "Hola Mundo";
    frase.replace(5, 5, "C++");
    cout << frase << endl;



    return 0;
}







