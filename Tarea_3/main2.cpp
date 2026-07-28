

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num1;


    cout << " Clasificación de Notas" << endl;
    cout << "========================" << endl;

    cout << "Ingrese su calificación" << endl;
    cin >> num1;

    if(num1 >= 90 && num1 <= 100){
        cout << "Su nota es: " << num1 << "\n¡Excelente!";
    } else if(num1 >= 80 && num1 <= 89){
        cout << "Su nota es: " << num1 << "\n¡Muy Bueno!";
    } else if(num1 >= 70 && num1 <= 79){
        cout << "Su nota es: " << num1 << "\n¡Bueno!";
    } else if(num1 >= 61 && num1 <= 69){
        cout << "Su nota es: " << num1 << "\n¡Aprobado!";
    } else if(num1 >= 0 && num1 <= 60){
        cout << "Su nota es: " << num1 << "\n¡Reprobado!";
    }else {
        cout << "Error";
    }

    return 0;
}
