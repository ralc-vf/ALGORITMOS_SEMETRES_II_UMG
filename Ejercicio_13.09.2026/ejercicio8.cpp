#include <iostream>
#include <string>

using namespace std;


// Funcion para calcular el IMC
double calcularIMC(double peso, double estatura) {
    return peso / (estatura * estatura);
}


// Funcion para clasificar el IMC
string clasificarIMC(double imc) {

    if (imc < 18.5)
        return "Bajo peso";
    else if (imc < 25)
        return "Peso saludable";
    else if (imc < 30)
        return "Sobrepeso";
    else
        return "Obesidad";
}


// Funcion para mostrar recomendaciones
void mostrarRecomendaciones(
    int comidaRapida,
    int chucherias,
    int bebidasAzucaradas,
    int energizantes,
    int alcohol,
    int frutasVerduras,
    int actividadFisica
) {

    if (comidaRapida >= 3)
        cout << "- Reduzca la frecuencia de comida rapida.\n";

    if (chucherias >= 3)
        cout << "- Reduzca el consumo de golosinas, frituras y chucherias.\n";

    if (bebidasAzucaradas >= 3)
        cout << "- Reduzca el consumo de bebidas azucaradas y prefiera agua.\n";

    if (energizantes > 0)
        cout << "- Limite el consumo habitual de bebidas energizantes.\n";

    if (alcohol > 0)
        cout << "- Reduzca o evite el consumo de alcohol.\n";

    if (frutasVerduras < 3)
        cout << "- Aumente el consumo de frutas y verduras.\n";

    if (actividadFisica < 3)
        cout << "- Incorpore actividad fisica regularmente.\n";
}


// Funcion para leer dias por semana
int leerDias(string etiqueta) {

    int valor;

    cout << etiqueta;
    cin >> valor;

    while (valor < 0 || valor > 7) {

        cout << "Valor invalido, debe estar entre 0 y 7. Intente de nuevo: ";
        cin >> valor;
    }

    return valor;
}


// Funcion para leer valores positivos
double leerDecimalPositivo(string etiqueta) {

    double valor;

    cout << etiqueta;
    cin >> valor;

    while (valor <= 0) {

        cout << "Valor invalido, debe ser mayor a 0. Intente de nuevo: ";
        cin >> valor;
    }

    return valor;
}


int main() {

    string nombre;
    int edad;
    char sexo;
    double peso, estatura;


    // Datos personales

    cout << "Ingrese su nombre: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Ingrese su edad: ";
    cin >> edad;

    while (edad <= 0 || edad > 120) {

        cout << "Edad invalida. Intente de nuevo: ";
        cin >> edad;
    }


    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;


    // Peso y estatura

    peso = leerDecimalPositivo("Ingrese su peso (Kg): ");

    estatura = leerDecimalPositivo("Ingrese su estatura (m): ");


    // Calcular IMC

    double imc = calcularIMC(peso, estatura);

    bool esAdulto = (edad >= 18);


    // Habitos

    int comidaRapida =
        leerDias("Comida rapida (dias/semana): ");

    int chucherias =
        leerDias("Chucherias (dias/semana): ");

    int bebidasAzucaradas =
        leerDias("Bebidas azucaradas (dias/semana): ");

    int energizantes =
        leerDias("Bebidas energizantes (por semana): ");

    int alcohol =
        leerDias("Alcohol (dias/semana): ");

    int frutasVerduras =
        leerDias("Frutas o verduras (dias/semana): ");

    int actividadFisica =
        leerDias("Actividad fisica (dias/semana): ");


    // Reporte

    cout << "\n";
    cout << "========================================\n";
    cout << "       REPORTE DE EVALUACION\n";
    cout << "========================================\n";

    cout << "Nombre: " << nombre << "\n";
    cout << "Edad: " << edad << " anos\n";
    cout << "Sexo: " << sexo << "\n";
    cout << "Peso: " << peso << " Kg\n";
    cout << "Estatura: " << estatura << " m\n";
    cout << "IMC: " << imc << "\n";


    // Clasificacion

    if (esAdulto) {

        cout << "Clasificacion: "
             << clasificarIMC(imc) << "\n";

    } else {

        cout << "Clasificacion: No aplica "
             << "(menor de 18 anos)\n";
    }


    // Habitos

    cout << "----------------------------------------\n";
    cout << "HABITOS REPORTADOS\n";
    cout << "----------------------------------------\n";

    cout << "Comida rapida: "
         << comidaRapida << " dias/semana\n";

    cout << "Chucherias: "
         << chucherias << " dias/semana\n";

    cout << "Bebidas azucaradas: "
         << bebidasAzucaradas << " dias/semana\n";

    cout << "Bebidas energizantes: "
         << energizantes << " por semana\n";

    cout << "Alcohol: "
         << alcohol << " dias/semana\n";

    cout << "Frutas o verduras: "
         << frutasVerduras << " dias/semana\n";

    cout << "Actividad fisica: "
         << actividadFisica << " dias/semana\n";


    // Recomendaciones

    cout << "----------------------------------------\n";
    cout << "RECOMENDACIONES GENERALES\n";
    cout << "----------------------------------------\n";

    mostrarRecomendaciones(
        comidaRapida,
        chucherias,
        bebidasAzucaradas,
        energizantes,
        alcohol,
        frutasVerduras,
        actividadFisica
    );


    cout << "========================================\n";
    cout << "Evaluacion de caracter educativo.\n";
    cout << "El IMC es un indicador de referencia y\n";
    cout << "no constituye por si solo un diagnostico.\n";
    cout << "========================================\n";


    return 0;
}