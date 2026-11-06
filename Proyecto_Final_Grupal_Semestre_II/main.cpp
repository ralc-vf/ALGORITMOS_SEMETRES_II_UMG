#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAXDATOS = 10;
int numeroDeVentas = 0, numeroDeCompras = 0, numeroDeProductos = 0;

struct Ventas{
    int Id;
    string fecha;
    int cantidad;
    double precioUnitario;
    double total;
    string nombreProducto;
};

struct Compras{
    int Id;
    string fecha;
    int cantidad;
    double precioUnitario;
    double total;
    string nombreProducto;
};

struct Productos{
    int id;
    string nombreProducto;
    double peso;
    int stock;
    double precioUnitario;
};

    Productos producto[MAXDATOS];
    Ventas venta[MAXDATOS];
    Compras compra[MAXDATOS]; 
    
void mostrarMenuInicial();
void mostrarMenuVentas();
void mostrarMenuCompra();
void mostrarMenuProducto();

void crearVenta();
void crearCompra();
void crearProducto();

void buscarVenta();
void buscarCompra();
void buscarProducto();

void imprimirProductos();
void imprimirVentas();
void imprimirCompras();

void generarArchivo();
    



int main (){

    

    int opcion = 0;

    do {

        mostrarMenuInicial();
        cin >> opcion;
        switch(opcion){
            case 1:
                mostrarMenuProducto();
            break;

            case 2:
                mostrarMenuCompra();
            break;

            case 3:
                mostrarMenuVentas();
            break;

            case 4:
                generarArchivo();
            break;

        }
    
    }while(opcion != 5);
    cout << "Hasta Pronto. ";

    return 0;
};

void mostrarMenuInicial () {
    cout << "+---------------------------------------+" << endl;
    cout << "|                                       |" << endl;
    cout << "|          SuperMarket --- UMG          |" << endl;
    cout << "|                                       |" << endl;
    cout << "|  1 - Productos                        |" << endl;
    cout << "|  2 - Compra                           |" << endl;
    cout << "|  3 - Ventas                           |" << endl;
    cout << "|  4 - Generar Archivo txt              |" << endl;
    cout << "|  5 - Salir                            |" << endl;
    cout << "|                                       |" << endl;
    cout << "+---------------------------------------+" << endl;
}



void mostrarMenuVentas() {
    int opc = 0;

    cout << "+---------------------------------------+" << endl;
    cout << "|                                       |" << endl;
    cout << "|          SuperMarket --- UMG          |" << endl;
    cout << "|                                       |" << endl;
    cout << "|  1 - Crear Venta                      |" << endl;
    cout << "|  2 - Buscar Venta                     |" << endl;
    cout << "|  3 - Imprimir Registros               |" << endl;
    cout << "|  4 - Regresar                         |" << endl;
    cout << "|                                       |" << endl;
    cout << "+---------------------------------------+" << endl;
    
    cin >> opc;

    switch(opc){
        case 1:
            crearVenta();
        break;
        case 2:
            buscarVenta();
        break;
        case 3:
            imprimirVentas();
        break;
        case 4:
            return;
        break;
    }
}

void mostrarMenuCompra() {
    int opc = 0;

    cout << "+---------------------------------------+" << endl;
    cout << "|                                       |" << endl;
    cout << "|          SuperMarket --- UMG          |" << endl;
    cout << "|                                       |" << endl;
    cout << "|  1 - Crear Compra                     |" << endl;
    cout << "|  2 - Buscar Compra                    |" << endl;
    cout << "|  3 - Imprimir Registros               |" << endl;
    cout << "|  4 - Regresar                         |" << endl;
    cout << "|                                       |" << endl;
    cout << "+---------------------------------------+" << endl;

    cin >> opc;


    switch(opc){
        case 1:
            crearCompra();
        break;
        case 2:
            buscarCompra();
        break;
        case 3:
            imprimirCompras();
        break;
        case 4:
            return;
        break;
    }
}

void mostrarMenuProducto() {
    int opc = 0;

    cout << "+---------------------------------------+" << endl;
    cout << "|                                       |" << endl;
    cout << "|          SuperMarket --- UMG          |" << endl;
    cout << "|                                       |" << endl;
    cout << "|  1 - Crear Producto                   |" << endl;
    cout << "|  2 - Buscar Producto                  |" << endl;
    cout << "|  3 - Imprimir Registros               |" << endl;
    cout << "|  4 - Regresar                         |" << endl;
    cout << "|                                       |" << endl;
    cout << "+---------------------------------------+" << endl;

    cin >> opc;


    switch(opc){
        case 1:
            crearProducto();
        break;
        case 2:
            buscarProducto();
        break;
        case 3:
            imprimirProductos();
        break;
        case 4:
            return;
        break;
    }
}

void crearProducto(){
    double peso = 0, precio = 0;
    int stock = 0;
    
    cout << "- Ingrese el ID del producto -" << endl;
    cin >> producto[numeroDeProductos].id;

    cin.ignore();

    cout << "- Ingrese el nombre del producto -" << endl;
    getline(cin, producto[numeroDeProductos].nombreProducto);
    
    cout << "- Ingrese el peso de producto -" << endl;
    cin >> peso;
    if(!cin) return;
    producto[numeroDeProductos].peso = peso;

    cin.ignore();

    cout << "- Ingrese su stock inicial -" << endl;
    cin >> stock;
    if(!cin) return;
    producto[numeroDeProductos].stock = stock;

    cin.ignore();

    cout << "- Ingrese precio unitario -" << endl;
    cin >> precio;
    if(!cin) return;
    producto[numeroDeProductos].precioUnitario = precio;

    cout << "- El producto se guardo correctamente -" << endl;

    numeroDeProductos++;
}

void crearVenta(){
    int numeroDelProducto = 0;
    int cantidad = 0;

    
    if (numeroDeVentas > MAXDATOS) {
        cout << "Llego a su capacidad Maxima de datos." << endl;
        return;
    }

    cout << "- Ingrese el ID de la venta -" << endl;
    cin >> venta[numeroDeVentas].Id;
    if(!cin) return;

    cin.ignore();

    cout << "- Ingrese el numero del producto de la venta -" << endl;
    for(int i = 0; i < numeroDeProductos; i++){
        cout << i << ": " << producto[i].nombreProducto << endl;
    }
    cin >> numeroDelProducto;
    if(!cin) return;
    venta[numeroDeVentas].nombreProducto = producto[numeroDelProducto].nombreProducto;

    cin.ignore();


    cout << "- Ingrese la fecha de la venta -" << endl;
    getline(cin, venta[numeroDeVentas].fecha);

    cout << "- Ingrese la cantidad de la venta -" << endl;
    cin >> cantidad;

    
    if(cantidad > producto[numeroDelProducto].stock){
        cout << "El numero de la venta supero al Stock disponible" << endl;
        return;
    }else{
        producto[numeroDelProducto].stock -= cantidad; 
    }
    
    venta[numeroDeVentas].cantidad = cantidad;

    cin.ignore();

    venta[numeroDeVentas].precioUnitario = producto[numeroDelProducto].precioUnitario;
    
    venta[numeroDeVentas].total = venta[numeroDeVentas].cantidad * producto[numeroDelProducto].precioUnitario;

    cout << "- Venta registrada correctamente." << endl;

    numeroDeVentas++;  
}

void crearCompra(){
    if(numeroDeVentas > MAXDATOS){
        cout << "Llego a su capacidad Maxima de datos." << endl;
        return;
    }

    int numeroDelProducto = 0;
    
    cout << "- Ingrese el ID de la compra -" << endl;
    cin >> compra[numeroDeCompras].Id;
    if(!cin) return;

    cin.ignore();


    cout << "- Ingrese el numero del producto de la compra -" << endl;
    for(int i = 0; i < numeroDeProductos; i++){
        cout << i << ": " << producto[i].nombreProducto << endl;
    }
    cin >> numeroDelProducto;
    if(!cin) return;
    compra[numeroDeCompras].nombreProducto = producto[numeroDelProducto].nombreProducto;

    cin.ignore();

    cout << "- Ingrese la fecha de la compra -" << endl;
    getline(cin, compra[numeroDeCompras].fecha);

    cout << "- Ingrese la cantidad a comprar -" << endl;
    cin >> compra[numeroDeCompras].cantidad;
    producto[numeroDelProducto].stock += compra[numeroDeCompras].cantidad;

    cin.ignore();

    cout << "- Ingrese el precio unitario de la compra -" << endl;
    cin >> compra[numeroDeCompras].precioUnitario;


    compra[numeroDeCompras].total = compra[numeroDeCompras].cantidad * compra[numeroDeCompras].precioUnitario;

    cout << "- Venta creada satisfactoriamente -" << endl;

    numeroDeCompras++;
}

void buscarCompra(){
    int idCompra = 0;
    bool encontrado = false;

    cout << "- Ingrese el ID de la compra -" << endl;
    cin >> idCompra;

    for (int i = 0; i < numeroDeCompras; i++) {

        if (compra[i].Id == idCompra) {

            cout << "Compra encontrada." << endl;
            cout << "ID: " << compra[i].Id << endl;
            cout << "Fecha: " << compra[i].fecha << endl;
            cout << "Cantidad: " << compra[i].cantidad << endl;
            cout << "Precio unitario: " << compra[i].precioUnitario << endl;
            cout << "Total: " << compra[i].total << endl;
            cout << "Producto: " << compra[i].nombreProducto << endl;

            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "No se encontro ninguna compra con ese ID." << endl;
    }
    
}

void buscarVenta(){
    int idVenta = 0;
    bool encontrado = false;

    cout << "- Ingrese el ID de la venta -" << endl;
    cin >> idVenta;

    for (int i = 0; i < numeroDeVentas; i++) {

        if (venta[i].Id == idVenta) {

            cout << "Compra encontrada." << endl;
            cout << "ID: " << venta[i].Id << endl;
            cout << "Fecha: " << venta[i].fecha << endl;
            cout << "Cantidad: " << venta[i].cantidad << endl;
            cout << "Precio unitario: " << venta[i].precioUnitario << endl;
            cout << "Total: " << venta[i].total << endl;
            cout << "Producto: " << venta[i].nombreProducto << endl;

            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "No se encontro ninguna venta con ese ID." << endl;
    }
    
}

void buscarProducto(){
    int idProducto = 0;
    bool encontrado = false;

    cout << "- Ingrese el ID del producto -" << endl;
    cin >> idProducto;

    for (int i = 0; i < numeroDeProductos; i++) {

        if (producto[i].id == idProducto) {

            cout << "Compra encontrada." << endl;
            cout << "ID: " << producto[i].id << endl;
            cout << "Nombre: " << producto[i].nombreProducto << endl;
            cout << "Peso: " << producto[i].peso << endl;
            cout << "Stock: " << producto[i].stock << endl;
            cout << "Precio Unitario: " << producto[i].precioUnitario << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontro ningun producto con ese ID." << endl;
    }

}

void imprimirProductos(){
    for(int i = 0; i < numeroDeProductos; i++){
        cout << "ID: " << producto[i].id << endl;
        cout << "Nombre: " << producto[i].nombreProducto << endl;
        cout << "Peso: " << producto[i].peso << endl;
        cout << "Stock: " << producto[i].stock << endl;
        cout << "Precio Unitario: " << producto[i].precioUnitario << endl; 

        "\n";
        "\n";
    }
}

void imprimirVentas(){
    for(int i = 0; i < numeroDeVentas; i++){
        cout << "ID: " << venta[i].Id << endl;
        cout << "Fecha: " << venta[i].fecha << endl;
        cout << "Cantidad: " << venta[i].cantidad << endl;
        cout << "Precio unitario: " << venta[i].precioUnitario << endl;
        cout << "Total: " << venta[i].total << endl;
        cout << "Producto: " << venta[i].nombreProducto << endl;

        "\n";
        "\n";
        
    }
}

void imprimirCompras(){
    for(int i = 0; i < numeroDeCompras; i++){
        cout << "ID: " << compra[i].Id << endl;
        cout << "Fecha: " << compra[i].fecha << endl;
        cout << "Cantidad: " << compra[i].cantidad << endl;
        cout << "Precio unitario: " << compra[i].precioUnitario << endl;
        cout << "Total: " << compra[i].total << endl;
        cout << "Producto: " << compra[i].nombreProducto << endl;

        "\n";
        "\n";
    }
}


void generarArchivo() {
    ofstream archivoSalida("Registros_UMG.txt");

    if(archivoSalida.is_open()){

            archivoSalida << "- REGISTROS DE PRODUCTO -" << endl;
        
        for(int i = 0; i < numeroDeProductos; i++){
            archivoSalida << "ID: " << producto[i].id << endl;
            archivoSalida << "Nombre: " << producto[i].nombreProducto << endl;
            archivoSalida << "Peso: " << producto[i].peso << endl;
            archivoSalida << "Stock: " << producto[i].stock << endl;
            archivoSalida << "Precio Unitario: " << producto[i].precioUnitario << endl; 

            archivoSalida << "\n";
            archivoSalida << "\n";
        }

        archivoSalida << "\n\n";

        archivoSalida << "- REGISTROS DE COMPRAS -" << endl;
    
        for(int i = 0; i < numeroDeCompras; i++){
            archivoSalida << "ID: " << compra[i].Id << endl;
            archivoSalida << "Fecha: " << compra[i].fecha << endl;
            archivoSalida << "Cantidad: " << compra[i].cantidad << endl;
            archivoSalida << "Precio unitario: " << compra[i].precioUnitario << endl;
            archivoSalida << "Total: " << compra[i].total << endl;
            archivoSalida << "Producto: " << compra[i].nombreProducto << endl;

            archivoSalida << "\n";
            archivoSalida << "\n";
        }

        archivoSalida << "\n\n";

        archivoSalida << "- REGISTRO DE VENTAS -" << endl;

        for(int i = 0; i < numeroDeVentas; i++){
            archivoSalida << "ID: " << venta[i].Id << endl;
            archivoSalida << "Fecha: " << venta[i].fecha << endl;
            archivoSalida << "Cantidad: " << venta[i].cantidad << endl;
            archivoSalida << "Precio unitario: " << venta[i].precioUnitario << endl;
            archivoSalida << "Total: " << venta[i].total << endl;
            archivoSalida << "Producto: " << venta[i].nombreProducto << endl;

            archivoSalida << "\n";
            archivoSalida << "\n";
            
        }

        cout << "Archivo creado Exitosamente" << endl ;
        cout << "\n";


        archivoSalida.close();
            
    }
}