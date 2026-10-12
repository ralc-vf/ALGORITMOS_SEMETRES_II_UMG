#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main () {
    string nombreJugador[5];
    int partidasGanadas[5];
    int partidasPerdidas[5];
    int partidasEmpatadas[5];
    int totalGanadas[5], totalEmpatadas[5];

    for(int i = 0; i < 5; i++){
        cout << "Ingrese el nombre del Jugador " << i+1 << ":" << endl;
        getline(cin, nombreJugador[i]);
    }

    for(int i = 0; i < 5; i++){
        cout << "Ingrese las Partidas Ganadas del jugador " << nombreJugador[i] << ":" << endl;
        cin >> partidasGanadas[i];
    }

    for(int i = 0; i < 5; i++){
        cout << "Ingrese las Partidas Empatadas del jugador " << nombreJugador[i] << ":" << endl;
        cin >> partidasEmpatadas[i];
    }

    for(int i = 0; i < 5; i++){
        cout << "Ingrese las Partidas Perdidas del jugador "<< nombreJugador[i] << ":" << endl;
        cin >> partidasPerdidas[i];
    }

    for(int i = 0; i < 5; i++){
        int total = 0;
        total = partidasGanadas[i] * 5;
        totalGanadas[i] = total;
    }

    for(int i = 0; i < 5; i++){
        int total = 0;
        total = partidasEmpatadas[i] * 2;
        totalEmpatadas[i] = total;
    }

    for(int i = 0; i < 5; i++) {
        int puntos = 0;
        puntos = totalGanadas[i] + totalEmpatadas[i];

        if(puntos < 15){
            cout << "El Jugador " << nombreJugador[i] << ":" << " Es Bronce." << endl;    
        } else if (puntos >= 15 && puntos <= 29){
            cout << "El Jugador " << nombreJugador[i] << ":" << " Es Plata." << endl;    
        } else if (puntos >= 30 && puntos <= 44){
            cout << "El Jugador " << nombreJugador[i] << ":" << " Es Oro." << endl;    
        } else if(puntos >= 45){
            cout << "El Jugador " << nombreJugador[i] << ":" << " Es Leyenda." << endl;    
        }else {
            cout << "Error";
        }
    }
    return 0;
}



