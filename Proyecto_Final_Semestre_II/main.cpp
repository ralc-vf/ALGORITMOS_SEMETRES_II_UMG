#include <iostream>
#include <string>
using namespace std;



string codigo, cliente, origen, destino, fecha, estado, ubicacionActual;
int opcionMenu, opcionEstado;
double peso;


/*Prototipos*/

void mostrarMenu();
void registrarPaquete();
void limpiarBuffer();
void mostrarPaquetes();
void actualizarEstado();




int main(int argc, char const *argv[])
{   
    do{

        mostrarMenu();
        cin >> opcionMenu;
        



        switch (opcionMenu)
        {
        case 1:
            registrarPaquete();
            break;
            
        case 2:
            mostrarPaquetes();
            break;

        case 3:
            actualizarEstado();
            break;
        
        case 4:
            cout << "Hasta Luego";
            break;
        
        default:
        cout << "Ingrese una Opcion Valida, Hasta Luego.";
            return 0;
            break;
        }







    }while(opcionMenu != 4);

    return 0;

}


void mostrarMenu(){
        cout << "==============================================\n";
        cout << "|                                            |\n"; 
        cout << "|                 -Tracking-                 |\n"; 
        cout << "|                 _Absolut_                  |\n";
        cout << "|                              by: Alfredo   |\n";
        cout << "==============================================\n";
        cout << "|                                            |\n";
        cout << "|                                            |\n";
        cout << "|           1. Registrar Paquete             |\n";
        cout << "|           2. Mostrar Paquetes              |\n";
        cout << "|           3. Actualizar Estado             |\n";
        cout << "|           4. Salir                         |\n";
        cout << "|                                            |\n";
        cout << "|                                            |\n";
        cout << "==============================================\n";

}

void registrarPaquete(){
        cout << "==============================================\n";
        cout << "| 1. Ingrese el Codigo de Paquete            |\n";
        cout << "==============================================\n";
        cin >> codigo;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 2. Ingrese el nombre del Cliente           |\n";
        cout << "==============================================\n";
        cin >> cliente;
        
        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 3. Ingrese la Direccion de Origen          |\n";
        cout << "==============================================\n"; 
        cin >> origen;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 4. Ingrese la Direccion de Destino         |\n";
        cout << "==============================================\n";
        cin >> destino;

        limpiarBuffer();
        
        cout << "==============================================\n";
        cout << "| 5. Ingrese el Peso (2 Decimales /  KG)     |\n";
        cout << "==============================================\n";
        cin >> peso;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 6. Ingrese la Fecha                        |\n";
        cout << "==============================================\n";
        cin >> fecha;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 7. Ingrese el Estado en que se encuentra   |\n";
        cout << "==============================================\n";
        cin >> estado;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "| 8. Ingrese la Ubicacion Actual             |\n";
        cout << "==============================================\n";
        cin >> ubicacionActual;

        limpiarBuffer();

        cout << "==============================================\n";
        cout << "|       PAQUETE REGISTRADO EXITOSAMENTE      |\n";
        cout << "==============================================\n";
        


}

void mostrarPaquetes(){

    
    cout << "==========================================================================\n";
    cout << "|                                                                        |\n"; 
    cout << "|                                  -Tracking-                            |\n"; 
    cout << "|                                  _Absolut_                             |\n";
    cout << "|                                                                        |\n";
    cout << "==========================================================================\n";
    cout << "                                                                        \n";
    cout << "                                                                        \n";
    cout << " Codigo: "<<codigo<<"                                                   \n";        
    cout << " Cliente: "<<cliente<<"                                                 \n";
    cout << " Origen: "<<origen<<"                                                   \n";
    cout << " Destino: "<<destino<<"                                                 \n";
    cout << " Peso: "<<peso<<"                                                       \n";
    cout << " Fecha: "<<fecha<<"                                                     \n";
    cout << " Estado: "<<estado<<"                                                   \n";
    cout << "                                                                        \n";
    cout << "==========================================================================\n";
    cout << "                                                                       \n";
    cout << "   Ubicación Actual:                                                   \n";
    cout << "   "<< ubicacionActual <<"                                             \n";
    cout << "                                                                       \n";
    cout << "==========================================================================\n";
}

void actualizarEstado(){
    int opcionEstadoMenu;

    cout << "==============================================\n";
    cout << "| ACTUALIZAR ESTADO                          |\n";
    cout << "==============================================\n";
    cout << "|                                            |\n"; 
    cout << "| 1. Pendiente de entrega                    |\n";
    cout << "| 2. En Ruta                                 |\n";
    cout << "| 3. Entregado                               |\n";
    cout << "|                                            |\n";
    cout << "==============================================\n";
    cin >> opcionEstadoMenu;

    switch (opcionEstadoMenu){
    case 1:
        estado = "Pendiente de Entrega";
        break;
    case 2:
        estado = "En Ruta";
        break;
    case 3:
        estado = "Entregado";
        break;
    
    default:
        cout << "Opcion Invalida, intente de nuevo";
        break;
    }
}

void limpiarBuffer()
{
    cin.clear();
    cin.ignore((numeric_limits<streamsize>::max)(), '\n');
    cout << "\n\n\n";
}

