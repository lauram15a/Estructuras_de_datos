#include "Cola.hpp"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
}

Cola::~Cola()
{
}

void Cola::encolar(Pasajero p)
{
    NodoCola* nodo_nuevo = new NodoCola(p, NULL);
    
    if (primero)
    {
        ultimo->siguiente_nc = nodo_nuevo;
    }
    else
    {
        primero = nodo_nuevo;
    }
    
    ultimo = nodo_nuevo;
}

void Cola::desencolar()
{
    NodoCola* nodo_aux;         //guardamos primero
    
    if (primero != NULL)        //podemos desencolar porque la cola no esta vacia
    {
        nodo_aux = primero;
        primero = nodo_aux->siguiente_nc; // El nuevo primero es el siguiente al que desencolo   
        delete nodo_aux;                  // borrarlo de memoria
    }
    else
    {
        cout << "Cola Vacia" << endl;
    }
}

void Cola::imprimir()
{
    if(primero) 
    {
        NodoCola* nodo;
        nodo = primero;
        int contador = 1;
        while(nodo != ultimo->siguiente_nc) 
        {
            cout << nodo->pasajero_nc.getId_pasajero();
            if (contador != 9)
            {
                cout << " - ";
            }
            nodo = nodo->siguiente_nc;
            contador++;
        }
        cout << " " << endl;
    } 
    else 
    {
        cout << "COLA VACIA --> no se puede imprimir" << endl;
    }
    cout << "  " << endl;
}

//GETTERS Y SETTERS

Pasajero Cola::getPrimeroPasajero()
{
    return primero->pasajero_nc;
}

NodoCola* Cola::getPrimero()
{
    return primero;
}

NodoCola* Cola::getUltimo()
{
    return ultimo;
}

bool Cola::isVacia()
{
    if (primero)
    {
        return false;
    }
    else
    {
        return true;        
    }
}
