#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Pasajero p, NodoArbol* izqq, NodoArbol* dcha)
{
    pasajero_na = p;
    izquierda_na = izqq;
    derecha_na = dcha;
}

NodoArbol::NodoArbol()
{
}

NodoArbol::~NodoArbol()
{
}


