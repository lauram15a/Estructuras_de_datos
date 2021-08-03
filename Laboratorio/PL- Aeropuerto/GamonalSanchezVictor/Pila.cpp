#include "Pila.hpp"

using namespace std;

Pila::Pila()
{
    cima = NULL;
}

Pila::~Pila()
{
}

void Pila::apilar(Pasajero p)
{
    NodoPila* nodo_nuevo = new NodoPila (p, cima);
    cima = nodo_nuevo;     // la nueva cima es el nuevo pasajero   
}

void Pila::desapilar()
{
    NodoPila* nodo_aux; //guardamos el nodo siguiente de cima
    
    if (cima)      // si pila no vacía
    {
        nodo_aux = cima;
        cima = nodo_aux->siguiente_np; // el nuevo primero es el siguiente al que desapilo ahora
        delete nodo_aux;               // borrarlo de memoria
    }
    else
    {
        cout << "Pila Vacía" << endl;
    }
}

void Pila::imprimir()
{
    if(cima) 
    {
        NodoPila* nodo;
        nodo = cima;
        int contador = 1;
        while(nodo != NULL) 
        {
            cout << nodo->pasajero_np.getId_pasajero();
            nodo = nodo->siguiente_np;
            if (contador != 9)
            {
                cout << " - ";
            }
            contador ++;
        }
        cout << " " << endl;
    }
    else 
    {
        cout << "PILA VACIA --> no se puede imprimir" << endl;
    }
    cout << "  " << endl;
}

//GETTERS Y SETTERS

Pasajero Pila::getCimaPasajero()
{
    return cima->pasajero_np;
}

bool Pila::isVacia()
{
    if (cima)
    {
        return false;
    }
    else
    {
        return true;
    }
}
