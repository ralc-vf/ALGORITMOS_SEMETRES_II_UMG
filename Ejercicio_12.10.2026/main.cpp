#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Libro{
    int codigo;
    string titulo;
    string autor;
    int anio;
    int disponible;
};


int main(){
    const int MAX = 5;
    Libro libro[MAX];
    int cantidadLibros = 0;
    int buscado = 0;
    bool procesado = false;
    bool encontrado = false;
    int codigoPrestamo = 0;
    
    


    cout << "Cantidad de Libros (1 a 5)" << endl;
    cin >> cantidadLibros;

    if(!cin || cantidadLibros < 1 || cantidadLibros > MAX){
        cout << "Cantidad no valida \n";
        return 1;
    }

    for( int i = 0; i < cantidadLibros; i++){
        cout << "\n\n\n";
        cout << "\t Libro " << i + 1 << "\n";
        cout << "\t Codigo: "; 
            cin >> libro[i].codigo;
        
        if(!cin) return 1;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\t Titulo: "; getline(cin, libro[i].titulo);
        cout << "\t Autor: "; getline(cin, libro[i].autor);
        cout << "\t Anio: "; cin >> libro[i].anio;
        cout << "\t Disponibles: "; cin >> libro[i].disponible;
        
        if(!cin || libro[i].disponible < 0){
            cout << "Datos no validos \n";
            return 1;
        }

    }
    
    cout << "\t=== CATALOGO ===\n";
    for (int i = 0; i < cantidadLibros; i++ ){
        cout <<"\t|"<< libro[i].codigo << "\t|\t" << libro[i].titulo << "\t|\t" << libro[i].autor << "\t|\t" << libro[i].anio << "\t|\t" << libro[i].disponible << endl; 
    }


    // Buscar por Codigo
    cout << "\nCodigo a Buscar \n";
    cin >> buscado;
    if(!cin) return 1;

    for ( int i = 0; i < cantidadLibros; i++){
        if(libro[i].codigo == buscado){
            cout << "Encontrado: " << libro[i].titulo << "\n";
            encontrado = true;
            break;
        }
    }

    if(!encontrado){
        cout << "El codigo no se encuentra. " << endl;
        return 1;
    }


    //Actualizar estado del Libro.
    cout << "Codigo para prestamos: ";
    cin >> codigoPrestamo;
    if(!cin) return 1;

    for(int i = 0; i < cantidadLibros; i++){
        if(libro[i].codigo == codigoPrestamo){
            procesado = true;
                if(libro[i].disponible > 0){
                    libro[i].disponible--;
                    cout << "Prestamo Realizado \n";
                }else{
                    cout << "Sin ejemplares disponibles. \n";
                }
                break;
        }
    }

    if(!procesado) cout << "Libro No encontrado. \n";






    
   

    






    


    return 0;
}