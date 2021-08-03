#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include "Pasajero.hpp"

class NodoLista
{
public:
    NodoLista(Pasajero p, NodoLista* ant, NodoLista* sig);
    ~NodoLista();
    
private:
    Pasajero pasajero_nl;
    NodoLista* anterior_nl;
    NodoLista* siguiente_nl;
    
    friend class Lista;
};

#endif // NODOLISTA_HPP