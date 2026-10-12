
#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int MAX_PAQUETES = 2;

// Arreglos para almacenar los paquetes
string codigo[MAX_PAQUETES];
string cliente[MAX_PAQUETES];
string origen[MAX_PAQUETES];
string destino[MAX_PAQUETES];
double peso[MAX_PAQUETES];
string fecha[MAX_PAQUETES];
string estado[MAX_PAQUETES];
string ubicacionActual[MAX_PAQUETES];

int cantidadPaquetes = 0;

// Prototipos de funciones
void mostrarMenu();
void registrarPaquete();
void limpiarBuffer();
void mostrarPaquetes();
void actualizarEstado();

int main() {
    int opcionMenu;

    do {
        mostrarMenu();
        cout << "Seleccione una opcion: ";

        if (!(cin >> opcionMenu)) {
            cout << "Entrada invalida. Ingrese un numero.\n";
            limpiarBuffer();
            continue;
        }

        limpiarBuffer();

        switch (opcionMenu) {
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
                cout << "\nGracias por utilizar Tracking Absolut.\n";
                cout << "Hasta luego.\n";
                break;

            default:
                cout << "\nOpcion invalida. Intente de nuevo.\n";
                break;
        }

    } while (opcionMenu != 4);

    return 0;
}

void mostrarMenu() {
    cout << "================================================\n";
    cout << "|              TRACKING ABSOLUT                |\n";
    cout << "|                 by: Alfredo                  |\n";
    cout << "================================================\n";
    cout << "| 1. Registrar paquete                         |\n";
    cout << "| 2. Mostrar paquetes                          |\n";
    cout << "| 3. Actualizar estado                         |\n";
    cout << "| 4. Salir                                     |\n";
    cout << "================================================\n";
}

void limpiarBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void registrarPaquete() {
    int opcion;

    do {
        if (cantidadPaquetes >= MAX_PAQUETES) {
            cout << "\nNo se pueden registrar mas paquetes.\n";
            cout << "Capacidad maxima: " << MAX_PAQUETES << ".\n";
            return;
        }

        int indice = cantidadPaquetes;

        cout << "\n==============================================\n";
        cout << "          REGISTRO DE PAQUETE\n";
        cout << "==============================================\n";

        cout << "Ingrese el codigo del paquete: ";
        getline(cin, codigo[indice]);

        cout << "Ingrese el nombre del cliente: ";
        getline(cin, cliente[indice]);

        cout << "Ingrese la direccion de origen: ";
        getline(cin, origen[indice]);

        cout << "Ingrese la direccion de destino: ";
        getline(cin, destino[indice]);

        cout << "Ingrese el peso del paquete en kg: ";

        while (!(cin >> peso[indice]) || peso[indice] <= 0) {
            cout << "Peso invalido. Ingrese un peso mayor que cero: ";
            cin.clear();
            limpiarBuffer();
        }

        limpiarBuffer();

        cout << "Ingrese la fecha: ";
        getline(cin, fecha[indice]);

        cout << "\nEstado inicial del paquete:\n";
        cout << "1. Pendiente de entrega\n";
        cout << "2. En ruta\n";
        cout << "3. Entregado\n";
        cout << "Seleccione una opcion: ";

        int opcionEstado;

        while (!(cin >> opcionEstado) ||
               opcionEstado < 1 || opcionEstado > 3) {
            cout << "Opcion invalida. Seleccione 1, 2 o 3: ";
            cin.clear();
            limpiarBuffer();
        }

        limpiarBuffer();

        switch (opcionEstado) {
            case 1:
                estado[indice] = "Pendiente de entrega";
                break;

            case 2:
                estado[indice] = "En ruta";
                break;

            case 3:
                estado[indice] = "Entregado";
                break;
        }

        cout << "Ingrese la ubicacion actual: ";
        getline(cin, ubicacionActual[indice]);

        cantidadPaquetes++;

        cout << "\n==============================================\n";
        cout << "   PAQUETE REGISTRADO EXITOSAMENTE\n";
        cout << "==============================================\n";

        cout << "Codigo: " << codigo[indice] << "\n";
        cout << "Estado: " << estado[indice] << "\n";

        if (cantidadPaquetes >= MAX_PAQUETES) {
            cout << "\nSe alcanzo el limite de paquetes.\n";
            break;
        }

        cout << "\nDesea registrar otro paquete?\n";
        cout << "1. Si\n";
        cout << "2. No\n";
        cout << "Seleccione una opcion: ";

        while (!(cin >> opcion) || (opcion != 1 && opcion != 2)) {
            cout << "Opcion invalida. Ingrese 1 o 2: ";
            cin.clear();
            limpiarBuffer();
        }

        limpiarBuffer();

    } while (opcion == 1);
}

void mostrarPaquetes() {
    if (cantidadPaquetes == 0) {
        cout << "\nNo hay paquetes registrados.\n";
        return;
    }

    cout << "\n==============================================\n";
    cout << "           PAQUETES REGISTRADOS\n";
    cout << "==============================================\n";

    for (int i = 0; i < cantidadPaquetes; i++) {
        cout << "\n---------- PAQUETE " << i + 1 << " ----------\n";
        cout << "Codigo: " << codigo[i] << "\n";
        cout << "Cliente: " << cliente[i] << "\n";
        cout << "Origen: " << origen[i] << "\n";
        cout << "Destino: " << destino[i] << "\n";
        cout << "Peso: " << peso[i] << " kg\n";
        cout << "Fecha: " << fecha[i] << "\n";
        cout << "Estado: " << estado[i] << "\n";
        cout << "Ubicacion actual: " << ubicacionActual[i] << "\n";
    }

    cout << "\n==============================================\n";
    cout << "Total de paquetes: " << cantidadPaquetes << "\n";
}

void actualizarEstado() {
    if (cantidadPaquetes == 0) {
        cout << "\nNo hay paquetes registrados para actualizar.\n";
        return;
    }

    string codigoBuscar;
    int indice = -1;

    cout << "\n==============================================\n";
    cout << "             ACTUALIZAR ESTADO\n";
    cout << "==============================================\n";

    cout << "Ingrese el codigo del paquete: ";
    getline(cin, codigoBuscar);

    for (int i = 0; i < cantidadPaquetes; i++) {
        if (codigo[i] == codigoBuscar) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        cout << "\nNo se encontro un paquete con ese codigo.\n";
        return;
    }

    cout << "\nPaquete encontrado: " << codigo[indice] << "\n";
    cout << "Estado actual: " << estado[indice] << "\n";
    cout << "Ubicacion actual: " << ubicacionActual[indice] << "\n";

    cout << "\nSeleccione el nuevo estado:\n";
    cout << "1. Pendiente de entrega\n";
    cout << "2. En ruta\n";
    cout << "3. Entregado\n";
    cout << "Opcion: ";

    int opcionEstado;

    while (!(cin >> opcionEstado) ||
           opcionEstado < 1 || opcionEstado > 3) {
        cout << "Opcion invalida. Seleccione 1, 2 o 3: ";
        cin.clear();
        limpiarBuffer();
    }

    limpiarBuffer();

    switch (opcionEstado) {
        case 1:
            estado[indice] = "Pendiente de entrega";
            break;

        case 2:
            estado[indice] = "En ruta";
            break;

        case 3:
            estado[indice] = "Entregado";
            break;
    }

    cout << "Ingrese la nueva ubicacion actual: ";
    getline(cin, ubicacionActual[indice]);

    cout << "\n==============================================\n";
    cout << "       ESTADO ACTUALIZADO EXITOSAMENTE\n";
    cout << "==============================================\n";
    cout << "Codigo: " << codigo[indice] << "\n";
    cout << "Nuevo estado: " << estado[indice] << "\n";
    cout << "Nueva ubicacion: " << ubicacionActual[indice] << "\n";
}
