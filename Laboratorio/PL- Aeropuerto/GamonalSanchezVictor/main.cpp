#include <conio.h>
#include <stdio.h>
#include <unistd.h>

#include "Aeropuerto.hpp"
#include "Cola.hpp"
#include "Pasajero.hpp"

using namespace std;

Cola llegadaPasajeros(Aeropuerto aeropuerto);
void salida(Cola cola_final);

///////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
    // VARIABLES //
    Aeropuerto aeropuerto;
    Cola cola_final;
    //float tiempo_espera_total;
    
    //FUNCIONES
    cola_final = llegadaPasajeros(aeropuerto);
    salida(cola_final);  
}

Cola llegadaPasajeros(Aeropuerto aeropuerto)
{
    Cola cola_inicio;
    
    Pasajero p1 = Pasajero(5, 15, 5);
    Pasajero p2 = Pasajero(3, 22, 6);
    Pasajero p3 = Pasajero(7, 9, 7);
    Pasajero p4 = Pasajero(6, 14, 3);
    Pasajero p5 = Pasajero(4, 18, 4);
    Pasajero p6 = Pasajero(1, 27, 17);
    Pasajero p7 = Pasajero(9, 0, 6);
    Pasajero p8 = Pasajero(2, 26, 3);
    Pasajero p9 = Pasajero(8, 4, 7);

    cola_inicio.encolar(p1);
    cola_inicio.encolar(p2);
    cola_inicio.encolar(p3);
    cola_inicio.encolar(p4);
    cola_inicio.encolar(p5);
    cola_inicio.encolar(p6);
    cola_inicio.encolar(p7);
    cola_inicio.encolar(p8);
    cola_inicio.encolar(p9);
    
    return aeropuerto.gestionAeropuerto(cola_inicio);
}

void salida(Cola cola_final)
{
    float tiempo_espera_total = 0;
    
    if(cola_final.getPrimero()) 
    {
        NodoCola* nodo;
        nodo = cola_final.getPrimero();
        while(nodo != cola_final.getUltimo()->getSiguiente()) 
        {
            tiempo_espera_total = tiempo_espera_total + nodo->getPasajeroNC().getTiempo_espera();
            nodo = nodo->getSiguiente();
        }
    }
    
    cout << "---------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "        GRACIAS POR VIAJAR CON NOSOTROS" << endl;
    cout << "" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << " " << endl;
    cout << "*********** COLA FINAL ***********" << endl;
    cout << " " << endl;
    cola_final.imprimir();
    cout << "---------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "Tiempo media de espera: " << tiempo_espera_total / 9 << endl;
    cout << "" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "" << endl;
}

