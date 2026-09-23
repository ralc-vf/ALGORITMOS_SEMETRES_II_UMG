// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
const int DIAS = 4; // Jueves, Viernes, Sabado y Domingo.
const int TIPO = 3; // Niños, Adultos y AdultosMayores

//Prototipos.
double calcularIngreso(int cantidad, double precio);
int totalEntradasDia(int ventas[][TIPO], int dia);
double ingresoDia(int ventas[][TIPO], double precios[], int dia);
void mostrarResumen(int ventas[][TIPO], double precios[], string dias[]);





int main() {
	string dias[DIAS] = { "Jueves", "Viernes", "Sabado", "Domingo" };
	string tipos[TIPO] = { "Niños", "Adultos", "AdultosMayores" };
	double precios[TIPO] = { 25.0, 40.0, 30.0 };

	int ventas[DIAS][TIPO] = {
		{25, 12, 8},  //Jueves
		{20, 40, 12}, //Viernes
		{35, 55, 18}, //Sabado
		{30, 45, 15}  //Domingo

	};



	cout << "=======================================" << endl;
	cout << " Sistema de ventas de Boletos de Cine  " << endl;
	cout << "=======================================" << endl;
	
	mostrarResumen(ventas, precios, dias);
		
	return 0;
}

double calcularIngreso(int cantidad, double precio) {
	

	return cantidad * precio;


};



int totalEntradasDia(int ventas[][TIPO], int dia) {
	int total = 0;
	for (int i = 0; i < TIPO; i++) {
		total += ventas[dia][i];
	}
	
	return 	total;
};

double ingresoDia(int ventas[][TIPO], double precios[], int dia) {
	double total = 0;
	
	for (int i = 0; i < TIPO; i++) {
		total += calcularIngreso(ventas[dia][i], precios[i]);
	}

	return total;
};


void mostrarResumen(int ventas[][TIPO], double precios[], string dias[]) {
	cout << "DIA\t\tENTRADAS\tINGRESO" << endl;
	cout << "=========================================" << endl;

	for (int dia = 0; dia < DIAS; dia++) {
		cout << dias[dia] << "\t\t"
			<< totalEntradasDia(ventas, dia) << "\t\tQ."
			<< ingresoDia(ventas, precios, dia) << endl;
	}





};
