
/*
Rene Alfredo Lopez Castellanos
Laboratorio #3
Universidad Mariano Galvez
5090-26-621
*/



#include <iostream>
using namespace std;
/*

int main() {
	for (int fila = 1; fila <= 10; fila++) {
		cout << fila  << endl;
	}

	cout << endl;
	return 0;
}

*/

/*
int main() {

	int numero;
	
	cout << "Ingrese un numero:";
	cin >> numero;



	for (int i = 1; i <= 15; i++) {
		cout << numero << " x " << i
		<< " = " << numero * i << endl;

	}

	return 0;
}
*/


int main() {
	int opcion;

	enum {
		Rojo = 1,
		Amarrillo, 
		Verde
	};
	
	cout << "1. Rojo" << endl;
	cout << "2. Amarrillo" << endl;
	cout << "3. Verde" << endl;
	cout << "Seleccione una opción" << endl;
	cin >> opcion;

	switch (opcion) {
		case Rojo:
			cout << "Detenerse." << endl;
			break;
		case Amarrillo:
			cout << "Preparese para detenerse" << endl;
			break;

		case Verde:
			cout << "Puede Avanzar" << endl;
			break;

		default:
			cout << "Estado no valido." << endl;

	}	

	return 0;



}






