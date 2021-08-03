#include "Box.hpp"

Box::Box()
{
    lleno = false;
}

Box::~Box()
{
}

void Box::meter(Pasajero p, int tiempo)
{
    pasajero_box = p;
    lleno = true;
    pasajero_box.setTiempo_espera(tiempo - pasajero_box.getHora_llegada() + 1); // una vez el pasajero entra al Box, defino el tiempo que ha estado esperando (en la lista)
    pasajero_box.setTiempo_box(tiempo);
}

void Box::sacar()
{
    lleno = false;
}

void Box::imprimir(int tiempo)
{
    if (lleno)
    {
        cout << " " << endl;
        cout << "*************** BOX ***************" << endl;
        cout << " " << endl;
        cout << "En el BOX esta el pasajero con ID = " << pasajero_box.getId_pasajero() << " con tiempo: " << tiempo << endl;
        cout << "Con tiempo de espera = " << pasajero_box.getTiempo_espera() << endl; 
    }
    else
    {
        cout << "BOX VACIO --> no se puede imprimir" << endl;
    }
    cout << " " << endl;
}


//GETTERS Y SETTERS
bool Box::isVacio()
{
    return !lleno;
}

Pasajero Box::getPasajero()
{
    return pasajero_box;
}

void Box::setPasajero(Pasajero pasajeroBox)
{
    pasajero_box = pasajeroBox;
}