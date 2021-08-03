#include "Lista.hpp"

Lista::Lista()
{
    primero = NULL;
    ultimo = NULL;
}

Lista::~Lista()
{
}

void Lista::enlistar(Pasajero p)
{
    insertarDerecha(p);
    //insertarIzquierda(p);
}

void Lista::insertarDerecha(Pasajero p)
{
    NodoLista* nodo_nuevo; 
    if (!primero) //lista vacia
    {        
        nodo_nuevo = new NodoLista (p, NULL, NULL);
        primero = nodo_nuevo;
    }
    else
    {
        nodo_nuevo = new NodoLista (p, ultimo, NULL);
        ultimo->siguiente_nl = nodo_nuevo;
    }
    ultimo = nodo_nuevo;  // el NUEVO ultimo es el nuevo que meto
}

void Lista::insertarIzquierda(Pasajero p)   //no lo utilizamos pero es una funcion propia de listas
{
    NodoLista* nodo_nuevo; 
    if (!primero) //lista vacia
    {        
        nodo_nuevo = new NodoLista (p, NULL, NULL);
    }
    else
    {
        nodo_nuevo = new NodoLista (p, NULL, primero);
    }
    primero = nodo_nuevo;  // el NUEVO primero es el nuevo que meto   
}

void Lista::desenlistar() // Sacamos hacia el box el primer pasajero de la lista (ya estan en orden en teoria)
{
    NodoLista* nodo_aux; //guardamos primero
    
    if (primero != NULL) //podemos desenlistar porque la lista no esta vacia
    {
        nodo_aux = primero;
        primero = nodo_aux->siguiente_nl; // El nuevo primero es el siguiente al que desenlisto
        delete nodo_aux; // borrarlo de memoria
    }
    else
    {
        cout << "Lista Vacia" << endl;
    }
}

void Lista::imprimir()
{
    if(primero) 
    {
        NodoLista* nodo;
        nodo = primero;
        int contador = 1;
        
        while(nodo != ultimo->siguiente_nl) 
        {
            cout << nodo->pasajero_nl.getId_pasajero();
            nodo = nodo->siguiente_nl;
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
        cout << "LISTA VACIA --> no se puede imprimir" << endl;
    }
    cout << "  " << endl;
}

// GETTERS Y SETTERS

bool Lista::isVacia()
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

Pasajero Lista::getPrimeroPasajero()
{
    return primero->pasajero_nl;
}

Pasajero Lista::getUltimoPasajero()
{
    return ultimo->pasajero_nl;
}