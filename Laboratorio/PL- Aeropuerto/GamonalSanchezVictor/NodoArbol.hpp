#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP

#include "Pasajero.hpp"

class NodoArbol
{
public:
    NodoArbol(Pasajero p, NodoArbol* izqq, NodoArbol* dcha);
    NodoArbol();
    ~NodoArbol();
    
private:
    Pasajero pasajero_na;
    NodoArbol* izquierda_na;
    NodoArbol* derecha_na;
    
    friend class Arbol;

};

#endif // NODOARBOL_HPP