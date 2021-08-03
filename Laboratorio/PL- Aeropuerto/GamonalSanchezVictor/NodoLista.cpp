#include "NodoLista.hpp"

NodoLista::NodoLista(Pasajero p, NodoLista* ant, NodoLista* sig)
{
    pasajero_nl = p;
    anterior_nl = ant;
    siguiente_nl = sig;
}

NodoLista::~NodoLista()
{
}


