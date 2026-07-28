
#include <iostream>
using namespace std;


/*

Calculadora con el metodo (IF)




int main(int argc, char const *argv[])
{

    int num1, num2, resultado;
    char operador;


    cout << "Ingrese el Primer Número" << endl;
    cin >> num1;
    
    cout << "Ingrese el Segundo Número" << endl;
    cin >> num2;


    cout << "Ingrese el Operador (+, -, *, /, %)" << endl;
    cin >> operador;

    if(operador == '+'){
        resultado = num1 + num2;
        cout << "Su Resultado es: " << resultado;
    }else if(operador == '-'){
        resultado = num1 - num2;
        cout << "Su Resultado es: " << resultado;

    }else if(operador == '*'){
        resultado = num1 * num2;
        cout << "Su Resultado es: " << resultado;

    }else if(operador == '/'){
        if(num2 == 0){
            cout << "Operación inválida";
        }else{
            resultado = num1 / num2;
            cout << "Su Resultado es: " << resultado;

        }
    }else if(operador == '%'){
        if(num2 == 0){
            cout << "Operación Invalida" << endl;
        }else{
            resultado = num1 % num2;
            cout << "Su Resultado es: " << resultado;
        }
    }else{
        cout << "No ingreso el operador correcto";
    }
    return 0;
}
*/


int main(int argc, char const *argv[])
{
    int num1, num2, resultado;
    char operador;


    cout << "Ingrese el Primer Número" << endl;
    cin >> num1;
    
    cout << "Ingrese el Segundo Número" << endl;
    cin >> num2;


    cout << "Ingrese el Operador (+, -, *, /, %)" << endl;
    cin >> operador;


    switch(operador){
        case '+':
            resultado = num1 + num2;
            cout << "La Suma es: " << resultado;
        break;

        case '-':
            resultado = num1 - num2;
            cout << "La Resta es: " << resultado;
        break;

        case '*':
            resultado = num1 * num2;
            cout << "La Multiplicación es: " << resultado;
        break;

        case '/':
            if(num2 == 0){
            cout << "Operación inválida";
            }else{
                resultado = num1 / num2;
                cout << "Su Resultado es: " << resultado;

            }
        break;

        case '%':
             if(num2 == 0){
            cout << "Operación Invalida" << endl;
            }else{
                resultado = num1 % num2;
                cout << "Su Resultado es: " << resultado;
            }
        break;

        default:
        cout << "Caracter Incorrecto";
        break;   
    }

    return 0;
}


