#include <iostream>
#include <string>

using namespace std;



int main(){
    string nombreProducto;
    int cantidad;
    double precio, subtotal;
    
   //Entrada
    cout << "- Tienda de Conveniencia -" << endl;
     cout << "Ingresa el nombre del Producto" << endl;
    getline(cin, nombreProducto);

    cout << "Ingresa el precio del Producto" << endl;
    cin >> precio;

    cout << "Ingresa la cantidad que desea comprar" << endl;
    cin >> cantidad;

    //Procesos
    subtotal = cantidad * precio;


    //Salida
    cout << "El total de su compra es: " << endl;
    cout << nombreProducto << " - "<< subtotal << endl;
    cout << "Tenga buen dia.";
    
    return 0;
}

